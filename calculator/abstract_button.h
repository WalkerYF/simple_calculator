#ifndef ABSTRACT_BUTTON_H
#define ABSTRACT_BUTTON_H

#include <QObject>
#include <QPushButton>

class AbstractButton : public QPushButton
{
    Q_OBJECT
public:
    AbstractButton();
    AbstractButton(QString s);
    QString getItem() const;
    void setItem(QString);
signals:
    void beClicked(QString);
public slots:
    void passItem();
private:
    QString item_;

};


class NumberButton : public AbstractButton{
public:
    NumberButton(QString s):AbstractButton(s){}
};

class OperatorButton : public AbstractButton{
public:
    OperatorButton(QString s):AbstractButton(s){}
};

class ControlButton : public AbstractButton{
public:
    ControlButton(QString s):AbstractButton(s){}
};


#endif // ABSTRACT_BUTTON_H
