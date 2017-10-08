#ifndef INPUT_LINE_EDIT_H
#define INPUT_LINE_EDIT_H

#include <QObject>
#include <QLineEdit>

class InputLineEdit : public QLineEdit
{
    Q_OBJECT
public:
    InputLineEdit();
signals:
    void finishedCompute(QString);
public slots:
    void addItem(const QString &);
    void deleteItem();
    void computeResult();
};

#endif // INPUT_LINE_EDIT_H
