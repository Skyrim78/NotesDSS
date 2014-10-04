#ifndef FIRMS_H
#define FIRMS_H

#include "ui_firms.h"
#include <QtSql/QtSql>
#include <QtXml/QtXml>
//--------------
#include "columnEditor.h"


class firms:public QWidget{
    Q_OBJECT
public:
    firms(QWidget *parent = 0);
    Ui::firms ui;

    int id;
    int crow;

    virtual void closeEvent(QCloseEvent *);

public slots:
    void readSetting();
    void writeSetting();

    void makeStatus(const QString text);
    void makeColumns();

    void loadFirms();

};

#endif // FIRMS_H
