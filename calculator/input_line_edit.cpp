#include "input_line_edit.h"
#include <QDebug>
#include
InputLineEdit::InputLineEdit():QLineEdit()
{

}

void InputLineEdit::addItem(const QString & update)
{
    this->setText(this->text()+update);
}

void InputLineEdit::deleteItem(){
    if (this->text().size() != 0)
//        qDebug() << this->text() << endl;
//        qDebug() << this->text().remove(text().size()-1,1) << endl;
        this->setText(this->text().remove(text().size()-1, 1));
    return ;
}

void InputLineEdit::computeResult(){

}
