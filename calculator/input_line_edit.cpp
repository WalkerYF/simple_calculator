#include "input_line_edit.h"
#include <QDebug>
#include "compute_engine.h"
InputLineEdit::InputLineEdit():QLineEdit()
{

}

void InputLineEdit::addItem(const QString & update)
{
    this->setText(this->text()+update);
}

void InputLineEdit::deleteItem(){
    if (this->text().size() != 0)
        this->setText(this->text().remove(text().size()-1, 1));
    return ;
}

void InputLineEdit::computeResult(){
    QString ans =
            QString::number(
                ComputeEngine::getInstance()->computeByString(
                    this->text().toStdString()
                )
            );
    qDebug() << ans << endl;
//    this->setText(ans);
    emit finishedCompute(ans);
}
