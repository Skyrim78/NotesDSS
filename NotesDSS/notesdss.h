#ifndef NOTESDSS_H
#define NOTESDSS_H

#include <QMainWindow>
#include <QtSql/QtSql>
#include <QSettings>
#include <QtXml/QtXml>

//widgets
#include "units.h"
#include "firms.h"

namespace Ui {
class NotesDSS;
}

class NotesDSS : public QMainWindow
{
    Q_OBJECT
    QSqlDatabase db;

public:
    explicit NotesDSS(QWidget *parent = 0);
    ~NotesDSS();

private:
    Ui::NotesDSS *ui;
public slots:
    void readSetting();
    void writeSetting();

    void connectDB();
    void openWidget(const QString name, QWidget *widget);

    void unitsWidget();
    void firmsWidget();
};

#endif // NOTESDSS_H
