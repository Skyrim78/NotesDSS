#ifndef NOTESDSS_H
#define NOTESDSS_H

#include <QMainWindow>
#include <QtSql/QtSql>

//widgets
#include "units.h"

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
    void connectDB();
    void openWidget(const QString name, QWidget *widget);

    void unitsWidget();
};

#endif // NOTESDSS_H
