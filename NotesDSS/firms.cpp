#include "firms.h"

firms::firms(QWidget *parent):QWidget(parent){
    ui.setupUi(this);

    ui.groupBox_form->hide();
    ui.tableWidget_firms->setColumnHidden(0, true);
    ui.tableWidget_firms->setColumnHidden(10, true);

    readSetting();
    loadFirms();

    connect(ui.toolButton_del, SIGNAL(clicked()), this, SLOT(makeColumns()));
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
}
