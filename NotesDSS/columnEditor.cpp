#include "columnEditor.h"

cEditor::cEditor(QWidget *parent):QDialog(parent){
    ui.setupUi(this);

    readColumn();

    connect(ui.pushButton_save, SIGNAL(clicked()), this, SLOT(writeColumn()));
    connect(ui.pushButton_close, SIGNAL(clicked()), this, SLOT(close()));
}

void cEditor::readColumn(){
    QSettings sett("Skyrim", "notesDSS");
    QString path(QString("%1/setting.xml").arg(sett.value("path").toString()));
    QFile file(path);
    QDomDocument doc;
    if (file.open(QIODevice::ReadOnly)){
        doc.setContent(&file);
        QDomNodeList node = doc.elementsByTagName("firms");
        for (int x = 0; x < node.item(0).attributes().count(); x++){
            QListWidgetItem *item = new QListWidgetItem(node.item(0).attributes().item(x).nodeName());
            ui.listWidget_column->addItem(item);
            QtC
            //bool state = node.item(0).attributes().item(0).nodeValue().toInt();
            ui.listWidget_column->item(x)->setCheckState(node.item(0).attributes().item(0).nodeValue().toInt());
        }
    }
    file.close();

}

void cEditor::writeColumn(){

}
