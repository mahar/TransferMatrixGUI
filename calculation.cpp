#include "calculation.h"
#include "ui_calculation.h"

Calculation::Calculation(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Calculation)
{
    ui->setupUi(this);
}

Calculation::~Calculation()
{
    delete ui;
}
