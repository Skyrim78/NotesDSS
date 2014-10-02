#include "notesdss.h"
#include "ui_notesdss.h"

NotesDSS::NotesDSS(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::NotesDSS)
{
    ui->setupUi(this);
    connectDB();
    connect(ui->aUnits, SIGNAL(triggered()), this, SLOT(unitsWidget()));
}

NotesDSS::~NotesDSS()
{
    if (db.isOpen()){
        db.close();
    }
    delete ui;
}

void NotesDSS::connectDB(){
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("note.db3");
    db.open();
    qDebug() << db.isOpen();
}

void NotesDSS::openWidget(const QString name, QWidget *widget){
    int test = -1;
    for (int x = 0; x < ui->tabWidget_pages->count(); x++){
        if (ui->tabWidget_pages->tabText(x) == name){
            test = x;
            break;
        }
    }
    if (test == -1){
        ui->tabWidget_pages->addTab(widget, name);
        ui->tabWidget_pages->setCurrentIndex(ui->tabWidget_pages->count() - 1);
    } else if (test > -1){
        ui->tabWidget_pages->setCurrentIndex(test);
    }
}


void NotesDSS::unitsWidget(){
    units *u = new units(this);
    openWidget("Единицы измерения", u);
}

