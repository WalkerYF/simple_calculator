#include "control_panel.h"

ControlPanel::ControlPanel(QWidget *parent) : AbstractPanel(parent)
{
    ControlButton * equalButton = new ControlButton("=");
    connect(equalButton, SIGNAL(clicked()), this, SIGNAL(equalButtonBeClicked()));

    ControlButton * deleteButton = new ControlButton("<-");
    connect(deleteButton, SIGNAL(clicked()), this, SIGNAL(deleteButtonBeClicked()));

    control_panel_layout_ = new QHBoxLayout(this);
    control_panel_layout_->addWidget(equalButton);
    control_panel_layout_->addWidget(deleteButton);

}

