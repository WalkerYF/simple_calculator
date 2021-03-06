#include "main_panel.h"

MainPanel::MainPanel(QWidget *parent) : QWidget(parent)
{
    main_layout_ = new QGridLayout(this);

    input = new InputLineEdit();
    output = new OutputLabel();
    number_panel_ = new NumberPanel();
    operator_panel_ = new OperatorPanel();
    control_panel_ = new ControlPanel();

    connect(number_panel_, SIGNAL(buttonBeClicked(QString)), input, SLOT(addItem(QString)));
    connect(operator_panel_, SIGNAL(buttonBeClicked(QString)), input, SLOT(addItem(QString)));
    connect(control_panel_, SIGNAL(deleteButtonBeClicked()), input, SLOT(deleteItem()));
    connect(control_panel_, SIGNAL(equalButtonBeClicked()), input, SLOT(computeResult()));
    connect(input, SIGNAL(returnPressed()), input, SLOT(computeResult()));
    connect(control_panel_, SIGNAL(clearButtonBeClicked()), input, SLOT(clear()));
    connect(input, SIGNAL(finishedCompute(QString)), output, SLOT(displayResult(QString)));

    QGridLayout *panel_layout = new QGridLayout();
    panel_layout->addWidget(number_panel_, 0, 0, 4, 3);
    panel_layout->addWidget(operator_panel_, 0, 4, 2, 4);
    panel_layout->addWidget(control_panel_, 2, 4, 2, 4);


    main_layout_->addWidget(input, 0, 0, 1, 8);
    main_layout_->addWidget(output, 1, 0, 1, 8);
    main_layout_->addLayout(panel_layout, 2, 0, 4, 8);
}
