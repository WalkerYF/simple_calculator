#ifndef ABSTRACT_PANEL_H
#define ABSTRACT_PANEL_H

#include <QWidget>
#include <QString>
#include "abstract_button.h"

// 面板的基类
// 定义了信号buttonBeClicked，用于接受面板内按钮的信号并转发出去
class AbstractPanel : public QWidget
{
    Q_OBJECT
public:
    explicit AbstractPanel(QWidget *parent = nullptr);

signals:
    void buttonBeClicked(QString);
public slots:
};

#endif // ABSTRACT_PANEL_H
