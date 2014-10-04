#ifndef FIRMS_H
#define FIRMS_H

#include "ui_firms.h"
#include <QtSql/QtSql>
#include <QtXml/QtXml>

class firms:public QWidget{
    Q_OBJECT
public:
    firms(QWidget *parent = 0);
    Ui::firms ui;

    int id;
    int crow;

    virtual void QCloseEvent(QCloseEvent *);

public slots:
    void readSetting();
    void writeSetting();

    void makeStatus(const QString text);

    void loadFirms();

};

#endif // FIRMS_H
