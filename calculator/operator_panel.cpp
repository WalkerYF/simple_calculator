#include "operator_panel.h"

OperatorPanel::OperatorPanel(QWidget *parent) : AbstractPanel(parent)
{
    OperatorButton * addButton = new OperatorButton("+");
    connect(addButton, SIGNAL(beClicked(QString)), this, SIGNAL(buttonBeClicked(QString)));

    OperatorButton * subButton = new OperatorButton("-");
    connect(subButton, SIGNAL(beClicked(QString)), this, SIGNAL(buttonBeClicked(QString)));

    OperatorButton * mulButton = new OperatorButton("*");
    connect(mulButton, SIGNAL(beClicked(QString)), this, SIGNAL(buttonBeClicked(QString)));

    OperatorButton * divButton = new OperatorButton("/");
    connect(divButton, SIGNAL(beClicked(QString)), this, SIGNAL(buttonBeClicked(QString)));

    OperatorButton * leftBracketButton = new OperatorButton("(");
    connect(leftBracketButton, SIGNAL(beClicked(QString)), this, SIGNAL(buttonBeClicked(QString)));

    OperatorButton * rightBracketButton = new OperatorButton(")");
    connect(rightBracketButton, SIGNAL(beClicked(QString)), this, SIGNAL(buttonBeClicked(QString)));


    operator_panel_layout = new QGridLayout(this);
    operator_panel_layout->addWidget(addButton, 0, 0);
    operator_panel_layout->addWidget(subButton, 0, 1);
    operator_panel_layout->addWidget(mulButton, 0, 2);
    operator_panel_layout->addWidget(divButton, 0, 3);
    operator_panel_layout->addWidget(leftBracketButton, 1, 0);
    operator_panel_layout->addWidget(rightBracketButton, 1, 1);

}
