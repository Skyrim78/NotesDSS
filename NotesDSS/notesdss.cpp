#include "notesdss.h"
#include "ui_notesdss.h"

NotesDSS::NotesDSS(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::NotesDSS)
{
    ui->setupUi(this);
    readSetting();
    connectDB();
    connect(ui->aUnits, SIGNAL(triggered()), this, SLOT(unitsWidget()));
    connect(ui->aFirms, SIGNAL(triggered()), this, SLOT(firmsWidget()));
}

NotesDSS::~NotesDSS()
{
    if (db.isOpen()){
        db.close();
    }
    writeSetting();
    delete ui;
}

void NotesDSS::readSetting(){
    QSettings sett("Skyrim", "notesDSS");
    qDebug() << sett.value("path").toString();
    QString path(QString("%1/setting.xml").arg(sett.value("path").toString()));
    QFile file(path);
    QDomDocument doc;
    if (file.open(QIODevice::ReadOnly)){
        doc.setContent(&file);
        QDomNodeList node = doc.elementsByTagName("main");
        int _w = node.item(0).attributes().namedItem("width").nodeValue().toInt();
        int _h = node.item(0).attributes().namedItem("height").nodeValue().toInt();
        int _x = node.item(0).attributes().namedItem("x").nodeValue().toInt();
        int _y = node.item(0).attributes().namedItem("y").nodeValue().toInt();
        setGeometry(_x, _y, _w, _h);
    }
    file.close();
}

void NotesDSS::writeSetting(){
    QSettings sett("Skyrim", "notesDSS");
    QString path(QString("%1/setting.xml").arg(sett.value("path").toString()));
    QFile file(path);
    QTextStream in(&file);
    QTextStream out(&file);

    QDomDocument doc;
    file.open(QIODevice::ReadOnly);
    doc.setContent(out.readAll());
    file.close();

    QDomNodeList node = doc.elementsByTagName("main");
    node.item(0).attributes().namedItem("width").setNodeValue(QString("%1").arg(geometry().size().width()));
    node.item(0).attributes().namedItem("height").setNodeValue(QString("%1") .arg(geometry().size().height()));
    node.item(0).attributes().namedItem("x").setNodeValue(QString("%1").arg(geometry().x()));
    node.item(0).attributes().namedItem("y").setNodeValue(QString("%1").arg(geometry().y()));

    file.open(QIODevice::WriteOnly);
    doc.save(out, 4);
    file.close();
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

void NotesDSS::firmsWidget(){
    firms *f = new firms(this);
    openWidget("Контрагенты", f);
}

