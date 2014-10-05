#include "columnEditor.h"

cEditor::cEditor(int _code, QWidget *parent):QDialog(parent){
    ui.setupUi(this);
    if (_code == 1){
        code.append("firms");
    }
    readColumn();

    connect(ui.pushButton_save, SIGNAL(clicked()), this, SLOT(writeColumn()));
    connect(ui.pushButton_close, SIGNAL(clicked()), this, SLOT(close()));
}

void cEditor::readColumn(){
    qDebug() << code;
    QSettings sett("Skyrim", "notesDSS");
    QString path(QString("%1/setting.xml").arg(sett.value("path").toString()));
    QFile file(path);
    QDomDocument doc;
    if (file.open(QIODevice::ReadOnly)){
        doc.setContent(&file);
        QDomNodeList node = doc.elementsByTagName(code);
        for (int x = 0; x < node.item(0).attributes().count(); x++){
            QListWidgetItem *item = new QListWidgetItem(node.item(0).attributes().item(x).nodeName());
            ui.listWidget_column->addItem(item);
            bool state = node.item(0).attributes().item(x).nodeValue().toInt();
            if (state){
                ui.listWidget_column->item(x)->setCheckState(Qt::Checked);
            } else {
                ui.listWidget_column->item(x)->setCheckState(Qt::Unchecked);
            }

        }
    }
    file.close();

}

void cEditor::writeColumn(){
    QSettings sett("Skyrim", "notesDSS");
    QString path(QString("%1/setting.xml").arg(sett.value("path").toString()));
    QFile file(path);
    //QTextStream in(&file);
    QTextStream out(&file);

    QDomDocument doc;
    file.open(QIODevice::ReadOnly);
    doc.setContent(out.readAll());
    file.close();

    QDomNodeList node = doc.elementsByTagName(code);
    for (int x = 0; x < ui.listWidget_column->count(); x++){
        QString n = ui.listWidget_column->item(x)->text();
        node.item(0).attributes().namedItem(n).setNodeValue(QString("%1").arg(ui.listWidget_column->item(x)->checkState()));
    }
    file.open(QIODevice::WriteOnly);
    doc.save(out, 4);
    file.close();
}
