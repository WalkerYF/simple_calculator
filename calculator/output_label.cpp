#include "output_label.h"

OutputLabel::OutputLabel()
{
    this->setFrameStyle(QFrame::Panel | QFrame::Sunken);
    this->setAlignment( Qt::AlignBottom | Qt::AlignLeft);
}


void OutputLabel::displayResult(QString result){
    this->setText(result);
    return ;
}
