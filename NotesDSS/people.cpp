#include "people.h"

people::people(QWidget *parent):QWidget(parent){
    ui.setupUi(this);
    ui.groupBox_card->hide();
    //ui.tableWidget_people->setColumnHidden(0, true);
   // ui.tableWidget_people->setColumnHidden(2, true);
    id = 0;
    crow = 0;

    load();

    connect(ui.toolButton_add, SIGNAL(clicked()), this, SLOT(add()));
    connect(ui.tableWidget_people, SIGNAL(doubleClicked(QModelIndex)), this, SLOT(edit()));
    connect(ui.pushButton_close, SIGNAL(clicked()), ui.groupBox_card, SLOT(hide()));
    connect(ui.pushButton_save, SIGNAL(clicked()), this, SLOT(save()));
    connect(ui.toolButton_del, SIGNAL(clicked()), this, SLOT(del()));

    connect(ui.lineEdit_fam, SIGNAL(textEdited(QString)), this, SLOT(makeFace()));
    connect(ui.lineEdit_name, SIGNAL(textEdited(QString)), this, SLOT(makeFace()));
    connect(ui.lineEdit_otc, SIGNAL(textEdited(QString)), this, SLOT(makeFace()));
}

void people::load(){
    for (int r = ui.tableWidget_people->rowCount(); r >= 0; r--){
        ui.tableWidget_people->removeRow(r);
    }
    QSqlQuery query("select people.id, people.face, "
                    "(select Count(treb.id) from treb where treb.face = people.id) "
                    "from people "
                    "order by people.face");
    int row = 0;
    while (query.next()){
        ui.tableWidget_people->insertRow(row);
        for (int col = 0; col < 3; col++){
            QTableWidgetItem *item = new QTableWidgetItem(query.value(col).toString());
            ui.tableWidget_people->setItem(row, col, item);
        }
        row++;
    }
    ui.tableWidget_people->resizeColumnsToContents();
    ui.tableWidget_people->horizontalHeader()->setStretchLastSection(true);
}

void people::add(){
    ui.groupBox_card->setVisible(true);
    id = 0;

    ui.lineEdit_fam->clear();
    ui.lineEdit_name->clear();
    ui.lineEdit_otc->clear();
    ui.lineEdit_face->clear();

    ui.lineEdit_fam->setFocus();
}

void people::edit(){
    crow = ui.tableWidget_people->currentRow();
    id = ui.tableWidget_people->item(crow, 0)->text().toInt();

    QSqlQuery query(QString("select people.fam, people.name, people.otc, people.face "
                            "from people "
                            "where people.id = \'%1\' ").arg(id));
    query.next();
    ui.lineEdit_fam->setText(query.value(0).toString());
    ui.lineEdit_name->setText(query.value(1).toString());
    ui.lineEdit_otc->setText(query.value(2).toString());
    ui.lineEdit_face->setText(query.value(3).toString());

    ui.lineEdit_fam->setFocus();
    ui.groupBox_card->setVisible(true);
}

void people::makeFace(){
    QString fam;
    if (!ui.lineEdit_fam->text().isEmpty()){
        fam.append(ui.lineEdit_fam->text());
    }

    QString name;
    if (!ui.lineEdit_name->text().isEmpty()){
        name.append(QString("%1.").arg(ui.lineEdit_name->text().left(1)));
    }

    QString otc;
    if (!ui.lineEdit_otc->text().isEmpty()){
        otc.append(QString("%1.").arg(ui.lineEdit_otc->text().left(1)));
    }

    ui.lineEdit_face->setText(QString("%1 %2%3").arg(fam).arg(name).arg(otc));
}

void people::save(){
    QString error;
    if (ui.lineEdit_face->text().isEmpty()){
        error.append("Введите данные сотрудника!");
    } else {
        if (id == 0){
            QSqlQuery query("insert into people (fam, name, otc, face) "
                            "values (?, ?, ?, ?) ");
            query.bindValue(0, ui.lineEdit_fam->text());
            query.bindValue(1, ui.lineEdit_name->text());
            query.bindValue(2, ui.lineEdit_otc->text());
            query.bindValue(3, ui.lineEdit_face->text());
            query.exec();
            error.append(query.lastError().text());
        } else if (id > 0){
            QSqlQuery query(QString("update people set fam = \'%1\', name = \'%2\', otc=\'%3\', face = \'%4\' "
                                    "where people.id = \'%5\' ")
                            .arg(ui.lineEdit_fam->text())
                            .arg(ui.lineEdit_name->text())
                            .arg(ui.lineEdit_otc->text())
                            .arg(ui.lineEdit_face->text())
                            .arg(id));
            query.exec();
            error.append(query.lastError().text());
        }
    }
    if (error.size() > 2){
        makeStatus(error);
    } else {
        makeStatus("Сохранено!");
        load();
        add();
    }
}

void people::del(){
    QString error;
    if (ui.tableWidget_people->rowCount() > 0){
        crow = -1;
        for (int r = 0; r < ui.tableWidget_people->rowCount(); r++){
            if (ui.tableWidget_people->item(r, 0)->isSelected()){
                crow = r;
                id = ui.tableWidget_people->item(crow, 0)->text().toInt();
                break;
            }
        }
        if (crow == -1){
            error.append("Выберите сотрудника!");
        } else if (crow > -1){
            int test = ui.tableWidget_people->item(crow, 2)->text().toInt();
            if (test == 0){
                QSqlQuery query(QString("delete from people where people.id = \'%1\'")
                                .arg(id));
                query.exec();
                error.append(query.lastError().text());
            } else {
                error.append("Данного сотрудника удалить нельзя!");
            }
        }
    } else {
        error.append("Нет сотрудников для удаления!");
    }
    if (error.size() > 2){
        makeStatus(error);
    } else {
        makeStatus(QString("Сотрудник (id:%1) удален!").arg(id));
        ui.groupBox_card->hide();
        load();
    }

}

void people::makeStatus(const QString text){
    ui.label_status->setText(text);
    QTimer *timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), ui.label_status, SLOT(clear()));
    timer->start(10000);
}
