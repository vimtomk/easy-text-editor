#ifndef EASY_H
#define EASY_H

#include <QDialog>

QT_BEGIN_NAMESPACE
namespace Ui { class Easy; }
QT_END_NAMESPACE

class Easy : public QDialog
{
    Q_OBJECT

public:
    Easy(QWidget *parent = nullptr);
    ~Easy();

private:
    Ui::Easy *ui;
};
#endif // EASY_H
