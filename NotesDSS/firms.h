#ifndef FIRMS_H
#define FIRMS_H

#include "ui_firms.h"
#include <QtSql/QtSql>
#include <QtXml/QtXml>
#include <QMenu>
#include <QContextMenuEvent>
//--------------
#include "columnEditor.h"


class firms:public QWidget{
    Q_OBJECT
public:
    firms(QWidget *parent = 0);
    Ui::firms ui;

    int id;
    int crow;

    QMenu *cMenu;
    QAction *columnEditor;
    QAction *addFirm;
    QAction *editFirm;
    QAction *deleteFirm;

    virtual void closeEvent(QCloseEvent *);

protected slots:
    virtual void contextMenuEvent(QContextMenuEvent *event);

public slots:
    void readSetting();
    void writeSetting();

    void makeStatus(const QString text);
    void makeColumns();

    void loadFirms();
    void addFirms();
    void editFirms();
    void delFirms();
    void saveFirms();

};

#endif // FIRMS_H
