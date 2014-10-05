#ifndef COLUMNEDITOR_H
#define COLUMNEDITOR_H

#include "ui_columnsEditor.h"
#include <QtXml/QtXml>

class cEditor:public QDialog{
    Q_OBJECT
public:
    cEditor(int _code, QWidget *parent = 0);
    Ui::Dialog ui;

    QString code;

public slots:
    void readColumn();
    void writeColumn();

};

#endif // COLUMNEDITOR_H
