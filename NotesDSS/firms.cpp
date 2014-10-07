#include "firms.h"

firms::firms(QWidget *parent):QWidget(parent){
    ui.setupUi(this);

    ui.groupBox_form->hide();
    ui.tableWidget_firms->setColumnHidden(0, true);
    ui.tableWidget_firms->setColumnHidden(10, true);

    id = 0;
    crow = 0;

    readSetting();
    loadFirms();

    connect(ui.toolButton_del, SIGNAL(clicked()), this, SLOT(delFirms()));
    connect(ui.toolButton_add, SIGNAL(clicked()), this, SLOT(addFirms()));
    connect(ui.tableWidget_firms, SIGNAL(doubleClicked(QModelIndex)), this, SLOT(editFirms()));
    connect(ui.pushButton_save, SIGNAL(clicked()), this, SLOT(saveFirms()));
    connect(ui.pushButton_close, SIGNAL(clicked()), ui.groupBox_form, SLOT(hide()));
}

void firms::closeEvent(QCloseEvent *){
    writeSetting();
}

void firms::readSetting(){
    QSettings sett("Skyrim", "notesDSS");
    QString path(QString("%1/setting.xml").arg(sett.value("path").toString()));
    QFile file(path);
    QDomDocument doc;
    if (file.open(QIODevice::ReadOnly)){
        doc.setContent(&file);
        QDomNodeList node = doc.elementsByTagName("firms");
        ui.tableWidget_firms->setColumnHidden(1, !node.item(0).attributes().namedItem("inn").nodeValue().toInt());
        ui.tableWidget_firms->setColumnHidden(2, !node.item(0).attributes().namedItem("name").nodeValue().toInt());
        ui.tableWidget_firms->setColumnHidden(3, !node.item(0).attributes().namedItem("address").nodeValue().toInt());
        ui.tableWidget_firms->setColumnHidden(4, !node.item(0).attributes().namedItem("face").nodeValue().toInt());
        ui.tableWidget_firms->setColumnHidden(5, !node.item(0).attributes().namedItem("phone").nodeValue().toInt());
        ui.tableWidget_firms->setColumnHidden(6, !node.item(0).attributes().namedItem("email").nodeValue().toInt());
        ui.tableWidget_firms->setColumnHidden(7, !node.item(0).attributes().namedItem("bank").nodeValue().toInt());
        ui.tableWidget_firms->setColumnHidden(8, !node.item(0).attributes().namedItem("rs").nodeValue().toInt());
        ui.tableWidget_firms->setColumnHidden(9, !node.item(0).attributes().namedItem("okpo").nodeValue().toInt());
    }
    file.close();
}

void firms::writeSetting(){
    QSettings sett("Skyrim", "notesDSS");
    QString path(QString("%1/setting.xml").arg(sett.value("path").toString()));
    QFile file(path);
    QTextStream in(&file);
    QTextStream out(&file);

    QDomDocument doc;
    file.open(QIODevice::ReadOnly);
    doc.setContent(out.readAll());
    file.close();

    QDomNodeList node = doc.elementsByTagName("firms");
    node.item(0).attributes().namedItem("inn").setNodeValue(QString("%1").arg(ui.tableWidget_firms->isColumnHidden(1)));
    node.item(0).attributes().namedItem("name").setNodeValue(QString("%1").arg(ui.tableWidget_firms->isColumnHidden(2)));
    node.item(0).attributes().namedItem("address").setNodeValue(QString("%1").arg(ui.tableWidget_firms->isColumnHidden(3)));
    node.item(0).attributes().namedItem("face").setNodeValue(QString("%1").arg(ui.tableWidget_firms->isColumnHidden(4)));
    node.item(0).attributes().namedItem("phone").setNodeValue(QString("%1").arg(ui.tableWidget_firms->isColumnHidden(5)));
    node.item(0).attributes().namedItem("email").setNodeValue(QString("%1").arg(ui.tableWidget_firms->isColumnHidden(6)));
    node.item(0).attributes().namedItem("bank").setNodeValue(QString("%1").arg(ui.tableWidget_firms->isColumnHidden(7)));
    node.item(0).attributes().namedItem("rs").setNodeValue(QString("%1").arg(ui.tableWidget_firms->isColumnHidden(8)));
    node.item(0).attributes().namedItem("okpo").setNodeValue(QString("%1").arg(ui.tableWidget_firms->isColumnHidden(9)));
    file.open(QIODevice::WriteOnly);
    doc.save(out, 4);
    file.close();
}

void firms::loadFirms(){
    for (int r = ui.tableWidget_firms->rowCount(); r >= 0; r--){
        ui.tableWidget_firms->removeRow(r);
    }
    QSqlQuery query("select firm.id, firm.inn, firm.name, firm.address, firm.face, "
                    "firm.phone, firm.email, firm.bank, firm.rs, firm.mfo, "
                    "(select Count(docs.id) from docs where docs.firm = firm.id) "
                    "from firm "
                    "order by firm.name ");
    int row = 0;
    while (query.next()){
        ui.tableWidget_firms->insertRow(row);
        for (int col = 0; col < 11; col++){
            QTableWidgetItem *item = new QTableWidgetItem(query.value(col).toString());
            ui.tableWidget_firms->setItem(row, col, item);
        }
        row++;
    }
    ui.tableWidget_firms->resizeColumnsToContents();
    ui.tableWidget_firms->horizontalHeader()->setStretchLastSection(true);

}

void firms::makeStatus(const QString text){
    ui.label_status->setText(text);
    QTimer *timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), ui.label_status, SLOT(clear()));
    timer->start(10000);
}

void firms::makeColumns(){
    cEditor *ed = new cEditor(1, this);
    ed->exec();
    readSetting();
    loadFirms();
}

void firms::addFirms(){
    ui.groupBox_form->setVisible(true);
    ui.lineEdit_name->clear();
    ui.lineEdit_inn->clear();
    ui.lineEdit_address->clear();
    ui.lineEdit_bank->clear();
    ui.lineEdit_face->clear();
    ui.lineEdit_mail->clear();
    ui.lineEdit_okpo->clear();
    ui.lineEdit_phone->clear();
    ui.lineEdit_rs->clear();
    ui.textEdit_note->clear();

    ui.lineEdit_name->setFocus();
}

void firms::editFirms(){
    crow = ui.tableWidget_firms->currentRow();
    id = ui.tableWidget_firms->item(crow, 0)->text().toInt();
    QSqlQuery query(QString("select firm.inn, firm.name, firm.address, firm.phone, firm.email, "
                            "firm.face, firm.bank, firm.rs, firm.mfo, firm.note "
                            "from firm "
                            "where firm.id = \'%1\' ").arg(id));
    query.next();
    ui.lineEdit_inn->setText(query.value(0).toString());
    ui.lineEdit_name->setText(query.value(1).toString());
    ui.lineEdit_address->setText(query.value(2).toString());
    ui.lineEdit_phone->setText(query.value(3).toString());
    ui.lineEdit_mail->setText(query.value(4).toString());
    ui.lineEdit_face->setText(query.value(5).toString());
    ui.lineEdit_bank->setText(query.value(6).toString());
    ui.lineEdit_rs->setText(query.value(7).toString());
    ui.lineEdit_okpo->setText(query.value(8).toString());
    ui.lineEdit_inn->setFocus();
    ui.groupBox_form->setVisible(true);
}

void firms::delFirms(){
    crow = ui.tableWidget_firms->currentRow();
    QString error;
    if (id > 0){
        int test = ui.tableWidget_firms->item(crow, 10)->text().toInt();
        if (test > 0){
            error.append("Невозможно удалить используемого контрагента!");
        } else {

            QSqlQuery query(QString("delete from firm where firm.id = \'%1\' ")
                            .arg(ui.tableWidget_firms->item(crow, 0)->text()));
            query.exec();
            error.append(query.lastError().text());
        }
    } else {
        error.append("Выберите контрагента!");
    }
    if (error.size() > 3){
        makeStatus(error);
    } else {
        makeStatus("Удалено!");
        ui.groupBox_form->hide();
        loadFirms();
    }
}

void firms::saveFirms(){
    QString error;
    if (ui.lineEdit_name->text().isEmpty()){
        error.append("Укажите наименование контрагента.");
    } else {
        if (id == 0){
            QSqlQuery query ("insert into firm (inn, name, address, phone, email, face, bank, rs, mfo, note) "
                             "values (?, ?, ?, ?, ?, ?, ?, ?, ?, ?)");
            query.bindValue(0, ui.lineEdit_inn->text());
            query.bindValue(1, ui.lineEdit_name->text());
            query.bindValue(2, ui.lineEdit_address->text());
            query.bindValue(3, ui.lineEdit_phone->text());
            query.bindValue(4, ui.lineEdit_mail->text());
            query.bindValue(5, ui.lineEdit_face->text());
            query.bindValue(6, ui.lineEdit_bank->text());
            query.bindValue(7, ui.lineEdit_rs->text());
            query.bindValue(8, ui.lineEdit_okpo->text());
            query.bindValue(9, ui.textEdit_note->toPlainText());
            query.exec();
            error.append(query.lastError().text());
        } else if (id > 0){
            QSqlQuery query(QString("update firm set inn = \'%1\', name=\'%2\', address=\'%3\', phone=\'%4\', email=\'%5\', "
                                    "face = \'%6\', bank = \'%7\', mfo = \'%8\', note = \'%9\' where firm.id = \'%10\' ")
                            .arg(ui.lineEdit_inn->text())
                            .arg(ui.lineEdit_name->text())
                            .arg(ui.lineEdit_address->text())
                            .arg(ui.lineEdit_phone->text())
                            .arg(ui.lineEdit_mail->text())
                            .arg(ui.lineEdit_face->text())
                            .arg(ui.lineEdit_bank->text())
                            .arg(ui.lineEdit_rs->text())
                            .arg(ui.lineEdit_okpo->text())
                            .arg(id));
            query.exec();
            error.append(query.lastError().text());
        }
        if (error.size() > 3){
            makeStatus(error);
        } else {
            makeStatus("Сохранено!");
            loadFirms();
            addFirms();
        }

    }
}
