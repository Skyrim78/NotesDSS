#ifndef PEOPLE_H
#define PEOPLE_H

#include "ui_people.h"
#include <QtSql/QtSql>

class people:public QWidget{
    Q_OBJECT
public:
    people(QWidget *parent = 0);
    Ui::people ui;

    int id;
    int crow;

public slots:
    void makeStatus(const QString text);
    void makeFace();

    void add();
    void edit();
    void del();
    void save();

    void load();
};

#endif // PEOPLE_H
