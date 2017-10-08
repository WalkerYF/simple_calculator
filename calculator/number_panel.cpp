#include "number_panel.h"

NumberPanel::NumberPanel(QWidget *parent) : AbstractPanel(parent)
{

    NumberButton * digit1 = new NumberButton("1");
    connect(digit1, SIGNAL(beClicked(QString)), this, SIGNAL(buttonBeClicked(QString)));
    NumberButton * digit2 = new NumberButton("2");
    connect(digit2, SIGNAL(beClicked(QString)), this, SIGNAL(buttonBeClicked(QString)));
    NumberButton * digit3 = new NumberButton("3");
    connect(digit3, SIGNAL(beClicked(QString)), this, SIGNAL(buttonBeClicked(QString)));

    NumberButton * digit4 = new NumberButton("4");
    connect(digit4, SIGNAL(beClicked(QString)), this, SIGNAL(buttonBeClicked(QString)));
    NumberButton * digit5 = new NumberButton("5");
    connect(digit5, SIGNAL(beClicked(QString)), this, SIGNAL(buttonBeClicked(QString)));
    NumberButton * digit6 = new NumberButton("6");
    connect(digit6, SIGNAL(beClicked(QString)), this, SIGNAL(buttonBeClicked(QString)));

    NumberButton * digit7 = new NumberButton("7");
    connect(digit7, SIGNAL(beClicked(QString)), this, SIGNAL(buttonBeClicked(QString)));
    NumberButton * digit8 = new NumberButton("8");
    connect(digit8, SIGNAL(beClicked(QString)), this, SIGNAL(buttonBeClicked(QString)));
    NumberButton * digit9 = new NumberButton("9");
    connect(digit9, SIGNAL(beClicked(QString)), this, SIGNAL(buttonBeClicked(QString)));


    NumberButton * digit10 = new NumberButton("%");
    connect(digit10, SIGNAL(beClicked(QString)), this, SIGNAL(buttonBeClicked(QString)));
    NumberButton * digit0 = new NumberButton("0");
    connect(digit0, SIGNAL(beClicked(QString)), this, SIGNAL(buttonBeClicked(QString)));
    NumberButton * digit12 = new NumberButton(".");
    connect(digit12, SIGNAL(beClicked(QString)), this, SIGNAL(buttonBeClicked(QString)));

    number_panel_layout_ = new QGridLayout(this);
    number_panel_layout_->setColumnMinimumWidth(3, 50);
    number_panel_layout_->addWidget(digit1, 0, 0);
    number_panel_layout_->addWidget(digit2, 0, 1);
    number_panel_layout_->addWidget(digit3, 0, 2);
    number_panel_layout_->addWidget(digit4, 1, 0);
    number_panel_layout_->addWidget(digit5, 1, 1);
    number_panel_layout_->addWidget(digit6, 1, 2);
    number_panel_layout_->addWidget(digit7, 2, 0);
    number_panel_layout_->addWidget(digit8, 2, 1);
    number_panel_layout_->addWidget(digit9, 2, 2);
    number_panel_layout_->addWidget(digit10, 3, 0);
    number_panel_layout_->addWidget(digit0, 3, 1);
    number_panel_layout_->addWidget(digit12, 3, 2);
}
