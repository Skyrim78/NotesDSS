#ifndef NOTESDSS_H
#define NOTESDSS_H

#include <QMainWindow>

namespace Ui {
class NotesDSS;
}

class NotesDSS : public QMainWindow
{
    Q_OBJECT

public:
    explicit NotesDSS(QWidget *parent = 0);
    ~NotesDSS();

private:
    Ui::NotesDSS *ui;
};

#endif // NOTESDSS_H
