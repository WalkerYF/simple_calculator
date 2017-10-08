#ifndef NUMBER_PANEL_H
#define NUMBER_PANEL_H

#include <QWidget>
#include <QGridLayout>
#include <QVBoxLayout>
#include "abstract_button.h"
#include "abstract_panel.h"

class NumberPanel : public AbstractPanel
{
    Q_OBJECT
public:
    explicit NumberPanel(QWidget *parent = nullptr);

signals:
public slots:

private:
//    NumberPanel number_button_[12];
    QGridLayout *number_panel_layout_;
};

#endif // NUMBER_PANEL_H
