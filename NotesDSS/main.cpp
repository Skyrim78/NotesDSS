#include "notesdss.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    NotesDSS w;
    w.show();

    return a.exec();
}
