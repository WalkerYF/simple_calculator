#ifndef ABSTRACT_PANEL_H
#define ABSTRACT_PANEL_H

#include <QWidget>
#include <QString>
#include "abstract_button.h"

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
