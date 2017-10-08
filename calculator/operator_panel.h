#ifndef OPERATOR_PANEL_H
#define OPERATOR_PANEL_H

#include <QObject>
#include <QWidget>
#include <QtGui>
#include <QGridLayout>
#include "abstract_button.h"
#include "abstract_panel.h"
class OperatorPanel : public AbstractPanel
{
    Q_OBJECT
public:
    explicit OperatorPanel(QWidget *parent = nullptr);

signals:
    void buttonBeClicked(char);
public slots:

private:
    QGridLayout * operator_panel_layout;

};

#endif // OPERATOR_PANEL_H
