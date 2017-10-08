#ifndef CONTROL_PANEL_H
#define CONTROL_PANEL_H

#include <QWidget>
#include "abstract_button.h"
#include <QVBoxLayout>
#include "abstract_panel.h"

class ControlPanel : public AbstractPanel
{
    Q_OBJECT
public:
    explicit ControlPanel(QWidget *parent = nullptr);

signals:
    void deleteButtonBeClicked();
    void equalButtonBeClicked();
    void clearButtonBeClicked();
public slots:
private:
    QHBoxLayout * control_panel_layout_;
};

#endif // CONTROL_PANEL_H
