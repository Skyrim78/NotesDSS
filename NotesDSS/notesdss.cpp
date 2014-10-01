#include "notesdss.h"
#include "ui_notesdss.h"

NotesDSS::NotesDSS(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::NotesDSS)
{
    ui->setupUi(this);
}

NotesDSS::~NotesDSS()
{
    delete ui;
}
