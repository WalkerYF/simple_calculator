#ifndef OUTPUT_LABEL_H
#define OUTPUT_LABEL_H

#include <QObject>
#include <QLabel>

class OutputLabel : public QLabel
{
    Q_OBJECT
public:
    OutputLabel();
public slots:
    void displayResult(QString);
};

#endif // OUTPUT_LABEL_H
