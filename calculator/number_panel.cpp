#include "number_panel.h"

NumberPanel::NumberPanel(QWidget *parent) : AbstractPanel(parent)
{
    NumberButton * test = new NumberButton("1");
    QVBoxLayout *t = new QVBoxLayout(this);
    t->addWidget(test);
    connect(test, SIGNAL(beClicked(QString)), this, SIGNAL(buttonBeClicked(QString)));
}
