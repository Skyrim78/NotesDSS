#ifndef MATERIAL_H
#define MATERIAL_H

#include "ui_material.h"
#include <QtSql/QtSql>
#include <QFileDialog>

class material:public QWidget{
    Q_OBJECT
public:
    material(QWidget *parent = 0);
    Ui::material ui;

    int id;
    int crow;

public slots:
    void makeStatus(const QString text);
    void load();
    void edit();
    void save();

    //import
    void readFile();
    void removeLine();
    void clearLine();
    void import();

    //test
    QString expandName(int vid, QString line);

};

#endif // MATERIAL_H
