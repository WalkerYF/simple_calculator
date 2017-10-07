#include "abstract_button.h"
#include <QDebug>
#include <QString>

AbstractButton::AbstractButton(QString s):QPushButton(s)
{
    item_ = s;
    connect(this, SIGNAL(clicked()), this, SLOT(passItem()));
}

QString AbstractButton::getItem() const
{
    return item_;
}

void AbstractButton::setItem(QString s){
    item_ = s;
}

void AbstractButton::passItem(){
    qDebug() << QString(item_) << endl;
    emit beClicked(item_);
}
