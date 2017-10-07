#ifndef MAIN_PANEL_H
#define MAIN_PANEL_H

#include <QWidget>
#include <QGridLayout>
#include <QtGui>
#include <QLabel>
#include <QLineEdit>
#include "display_file.h"


class MainPanel : public QWidget
{
    Q_OBJECT
public:
    explicit MainPanel(QWidget *parent = nullptr);

signals:

public slots:

private:
    QGridLayout *main_layout_;

   // lineedit and outputlabel
    InputLineEdit *input;

    NumberPanel *number_panel_;
    OperatorPanel *operator_panel_;
    ControlPanel *control_panel_;
};

#endif // MAIN_PANEL_H
