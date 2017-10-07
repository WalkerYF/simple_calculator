#include <QApplication>

#include "display_file.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
//    Calculator test;
//    test.show();
    MainPanel t;
    t.show();
    return a.exec();
}
