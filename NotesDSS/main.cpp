#include "notesdss.h"
#include <QApplication>
#include <QTextCodec>
#include <QSettings>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //QTextCodec::setCodecForCStrings(QTextCodec::codecForName("utf-8"));
    QSettings sett("Skyrim", "notesDSS");
    sett.setValue("path", a.applicationDirPath());
    NotesDSS w;
    w.show();

    return a.exec();
}
