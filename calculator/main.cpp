#include <QApplication>

#include "display_file.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainPanel t;
    t.resize(200, 100);
    t.setWindowTitle("my calculator!");
    t.show();
    return a.exec();
}
