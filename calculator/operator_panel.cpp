#include "operator_panel.h"

OperatorPanel::OperatorPanel(QWidget *parent) : AbstractPanel(parent)
{
    OperatorButton * test = new OperatorButton("+");
    QVBoxLayout *t = new QVBoxLayout(this);
    t->addWidget(test);
    connect(test, SIGNAL(beClicked(QString)), this, SIGNAL(buttonBeClicked(QString)));

}
