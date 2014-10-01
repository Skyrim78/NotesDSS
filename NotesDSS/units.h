#ifndef UNITS_H
#define UNITS_H

#include "ui_units.h"
#include <QtSql/QtSql>
#include <QTimer>

class units:public QWidget{
    Q_OBJECT
public:
    units(QWidget *parent = 0);
    Ui::units ui;

    int id;
    int crow;

public slots:
    void loadUnits();
    void addUnits();
    void deleteUnits();
    void editUnits();

    void saveUnits();

    void makeStatus(const QString text);
};


#endif // UNITS_H
