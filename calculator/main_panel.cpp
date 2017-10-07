#include "main_panel.h"

MainPanel::MainPanel(QWidget *parent) : QWidget(parent)
{
    main_layout_ = new QGridLayout(this);

    input = new InputLineEdit();

    number_panel_ = new NumberPanel();
    operator_panel_ = new OperatorPanel();
    control_panel_ = new ControlPanel();

    connect(number_panel_, SIGNAL(buttonBeClicked(QString)), input, SLOT(addItem(QString)));
    connect(operator_panel_, SIGNAL(buttonBeClicked(QString)), input, SLOT(addItem(QString)));
    connect(control_panel_, SIGNAL(deleteButtonBeClicked()), input, SLOT(deleteItem()));
    connect(control_panel_, SIGNAL(equalButtonBeClicked()), input, SLOT(computeResult()))

    main_layout_->addWidget(input, 0, 0, 1, 8);
    main_layout_->addWidget(number_panel_, 1, 0, 4, 3);
    main_layout_->addWidget(operator_panel_, 1, 4, 2, 4);
    main_layout_->addWidget(control_panel_, 3, 3, 2, 4);
}
