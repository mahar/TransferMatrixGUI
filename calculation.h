#ifndef CALCULATION_H
#define CALCULATION_H

#include <QDialog>

namespace Ui {
class Calculation;
}

class Calculation : public QDialog
{
    Q_OBJECT

public:
    explicit Calculation(QWidget *parent = nullptr);
    ~Calculation();

private:
    Ui::Calculation *ui;
};

#endif // CALCULATION_H
