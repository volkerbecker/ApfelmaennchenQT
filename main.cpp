#include "apfelmaennchen.h"

#include <QtGui>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Apfelmaennchen w;
    w.show();
    return a.exec();
}
