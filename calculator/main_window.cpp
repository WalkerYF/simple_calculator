#include "main_window.h"
#include "display_file.h"
MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent)
{
    QWidget *test = new QWidget(this);
    NumberPanel * p1 = new NumberPanel();
    OperatorPanel *p2 = new OperatorPanel();
    QHBoxLayout * l = new QHBoxLayout(test);
    l->addWidget(p1);
    l->addWidget(p2);
}
