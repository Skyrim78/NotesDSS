#include "firms.h"

firms::firms(QWidget *parent):QWidget(parent){
    ui.setupUi(this);
    readSetting();

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
        ui.tableWidget_firms->setColumnHidden(9, !node.item(0).attributes().namedItem("mfo").nodeValue().toInt());
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
    node.item(0).attributes().namedItem("mfo").setNodeValue(QString("%1").arg(ui.tableWidget_firms->isColumnHidden(9)));
    file.open(QIODevice::WriteOnly);
    doc.save(out, 4);
    file.close();
}

void firms::loadFirms(){
    for (int r = ui.tableWidget_firms->rowCount(); r >= 0; r--){
        ui.tableWidget_firms->removeRow(r);
    }
    QSqlQuery query("select firm.id, firm.name, firm.");

}

void firms::makeStatus(const QString text){

}

void firms::makeColumns(){
    cEditor *ed = new cEditor(this);
    ed->exec();
    readSetting();
}
