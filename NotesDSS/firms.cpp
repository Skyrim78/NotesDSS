#include "firms.h"

firms::firms(QWidget *parent):QWidget(parent){
    ui.setupUi(this);

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
        int _w = node.item(0).attributes().namedItem("name").nodeValue().toInt();
        int _h = node.item(0).attributes().namedItem("height").nodeValue().toInt();
        int _x = node.item(0).attributes().namedItem("x").nodeValue().toInt();
        int _y = node.item(0).attributes().namedItem("y").nodeValue().toInt();
        setGeometry(_x, _y, _w, _h);
    }
    file.close();
}

void firms::writeSetting(){

}

void firms::loadFirms(){
    for (int r = ui.tableWidget_firms->rowCount(); r >= 0; r--){
        ui.tableWidget_firms->removeRow(r);
    }
    QSqlQuery query("select firm.id, firm.name, firm.");

}

void firms::makeStatus(const QString text){

}
