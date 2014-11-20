#include "material.h"

material::material(QWidget *parent):QWidget(parent){
    ui.setupUi(this);
    ui.groupBox_card->hide();
    id = 0;


    load();
    connect(ui.toolButton_updM, SIGNAL(clicked()), this, SLOT(load()));
    connect(ui.pushButton_save, SIGNAL(clicked()), this, SLOT(save()));
    connect(ui.pushButton_close, SIGNAL(clicked()), ui.groupBox_card, SLOT(hide()));
    connect(ui.tableWidget_material, SIGNAL(doubleClicked(QModelIndex)), this, SLOT(edit()));
    connect(ui.toolButton_open, SIGNAL(clicked()), this, SLOT(readFile()));
    //import
    connect(ui.toolButton_add, SIGNAL(clicked()), this, SLOT(import()));

}

void material::load(){
    ui.comboBox_units->clear();
    QSqlQuery queryUnits("select units.name from units order by units.name");
    while (queryUnits.next()){
        ui.comboBox_units->addItem(queryUnits.value(0).toString());
    }

    for (int r = ui.tableWidget_material->rowCount(); r >= 0; r--){
        ui.tableWidget_material->removeRow(r);
    }
    QSqlQuery query("select material.id, material.articul, material.name, units.name "
                    "from material, units "
                    "where material.units = units.id "
                    "order by material.name ");
    int row = 0;
    while (query.next()){
        ui.tableWidget_material->insertRow(row);
        for (int col = 0; col < 4; col++){
            QTableWidgetItem *item = new QTableWidgetItem(query.value(col).toString());
            ui.tableWidget_material->setItem(row, col, item);
        }
        row++;
    }
    ui.tableWidget_material->resizeColumnsToContents();
    ui.tableWidget_material->horizontalHeader()->setStretchLastSection(true);
}

void material::edit(){
    ui.groupBox_card->setVisible(true);
    crow = ui.tableWidget_material->currentRow();
    id = ui.tableWidget_material->item(crow, 0)->text().toInt();
    QSqlQuery query(QString("select material.articul, material.name, units.name "
                            "from material, units "
                            "where material.units = units.id and material.id = \'%1\' ")
                    .arg(id));
    query.next();
    ui.lineEdit_art->setText(query.value(0).toString());
    ui.lineEdit_name->setText(query.value(1).toString());
    ui.comboBox_units->setCurrentIndex(ui.comboBox_units->findText(query.value(2).toString()));

    ui.lineEdit_name->setFocus();
}

void material::save(){
    QString error;
    if (ui.lineEdit_art->text().isEmpty()){
        error.append("Введите артикульный номер материала!");
    } else {
        if (ui.lineEdit_name->text().isEmpty()){
            error.append("Введите наименование материала!");
        } else {
            if (ui.comboBox_units->currentIndex() == -1){
                error.append("Выберите единицу измерения материала!");
            } else {
                QSqlQuery queryIDUnits(QString("select units.id from units where units.name = \'%1\'")
                                       .arg(ui.comboBox_units->currentText()));
                queryIDUnits.next();
                QSqlQuery query(QString("update material set articul = \'%1\', name = \'%2\', units = \'%3\' "
                                        "where material.id = \'%4\' ")
                                .arg(ui.lineEdit_art->text())
                                .arg(ui.lineEdit_name->text())
                                .arg(queryIDUnits.value(0).toString())
                                .arg(id));
                query.exec();
                error.append(query.lastError().text());
            }
        }
    }
    if (error.size() > 3){
        makeStatus(error);
    } else {
        makeStatus("Сохранено!");
        ui.groupBox_card->hide();
    }
}

void material::makeStatus(const QString text){
    ui.label_status->setText(text);
    QTimer *timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), ui.label_status, SLOT(clear()));
    timer->start(10000);
}

void material::readFile(){
    ui.lineEdit_file->setText(QFileDialog::getOpenFileName(this, "Select file.", "C:", "Text files (*.txt)"));

    for (int r = ui.tableWidget_import->rowCount(); r >= 0; r--){
        ui.tableWidget_import->removeRow(r);
    }

    QFile file(ui.lineEdit_file->text());
    file.open(QFile::ReadOnly);
    QTextStream stream(&file);
    QString line;
    int row = 0;
    while (!stream.atEnd()){
        line = stream.readLine();
        if (row >= 10){
            ui.tableWidget_import->insertRow(row - 10);
            QStringList list = line.split(QRegExp("\t"));

            if (list.size() > 0){
                QTableWidgetItem *itemName = new QTableWidgetItem(expandName(1, list.at(0)));
                ui.tableWidget_import->setItem(row - 10, 0, itemName);

                QTableWidgetItem *itemCount = new QTableWidgetItem(expandName(2, list.at(0)));
                ui.tableWidget_import->setItem(row - 10, 1, itemCount);

                QTableWidgetItem *itemUnits = new QTableWidgetItem(expandName(3, list.at(0)));
                ui.tableWidget_import->setItem(row - 10, 2, itemUnits);

            }
        }
        row++;
    }
    file.close();
    ui.tableWidget_import->resizeColumnsToContents();
    ui.tableWidget_import->horizontalHeader()->setStretchLastSection(true);
}

QString material::expandName(int vid, QString line){
    QString result;
    int z1 = 0;
    int z2 = 0;
    int count = 0;
    for (int x = line.size() - 1; x >= 0; x--){
        QString lit = line.at(x);
        if (lit == ","){
            count++;
            if (count == 1){
                z1 = x;
            } else if (count == 2){
                z2 = x;
                break;
            }
        }
    }
    if (vid == 3){ //units
        result = line.right(line.size() - z1 - 2);
    } else if (vid == 2){ // articul
        result = line.mid(z2 + 2, z1 - z2 - 2);
    } else if (vid == 1){
        result = line.left(z2);
    }
    return result;
}

void material::removeLine(){

}

void material::clearLine(){

}

void material::import(){
    ui.progressBar->setValue(0);
    int inU = 0;
    int inM = 0;
    int upM = 0;
    QString error;
    QString messa;
    if (ui.tableWidget_import->rowCount() > 0){
        // import units
        for (int row = 0; row < ui.tableWidget_import->rowCount(); row++){
            QSqlQuery qTestUnits(QString("select units.id from units where units.name = \'%1\' ")
                                 .arg(ui.tableWidget_import->item(row, 2)->text()));
            qTestUnits.next();
            if (!qTestUnits.isValid()){
                QSqlQuery query("insert into units (name) values (?) ");
                query.bindValue(0, ui.tableWidget_import->item(row, 2)->text());
                query.exec();
                inU++;
            }
        }
        messa.append("Добавлено: ");
        if (inU > 0){
            messa.append(QString("Ед. изм. - %1;").arg(inU));
        }
        //import materials
        for (int row = 0; row < ui.tableWidget_import->rowCount(); row++){
            int art = ui.tableWidget_import->item(row, 1)->text().toInt();
            QSqlQuery qUnit(QString("select units.id from units where units.name = \'%1\' ")
                            .arg(ui.tableWidget_import->item(row, 2)->text()));
            qUnit.next();
            QSqlQuery query(QString("select material.id from material where material.articul = \'%1\' ").arg(art));
            query.next();
            if (!query.isValid()){
                QSqlQuery qInMaterial("insert into material (name, articul, units) "
                                      "values (?, ?, ?)");
                qInMaterial.bindValue(0, ui.tableWidget_import->item(row, 0)->text());
                qInMaterial.bindValue(1, ui.tableWidget_import->item(row, 1)->text());
                qInMaterial.bindValue(2, qUnit.value(0).toString());
                qInMaterial.exec();
                inM++;
            } else {
                QSqlQuery qUpMaterial(QString("update material set name = \'%1\', articul = \'%2\', units = \'%3\' "
                                              "where material.id = \'%4\'")
                                      .arg(ui.tableWidget_import->item(row, 0)->text())
                                      .arg(ui.tableWidget_import->item(row, 1)->text())
                                      .arg(qUnit.value(0).toString())
                                      .arg(query.value(0).toString()));
                qUpMaterial.exec();
                upM++;
            }
            double x = (row * 100) / ui.tableWidget_import->rowCount();
            ui.progressBar->setValue(qRound(x));
        }
        if (inM > 0){
            messa.append(QString("Материалов - %1;").arg(inM));
        }
        if (upM > 0){
            messa.append(QString("Обновлено: Материалов - %1;").arg(upM));
        }

    } else {
        error.append("Нет данных для импортирования!");
    }
    ui.progressBar->setValue(0);
    if (error.size() > 2){
        makeStatus(error);
    } else {
        makeStatus(messa);
    }

}
