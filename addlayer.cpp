#include "addlayer.h"
#include "ui_addlayer.h"

AddLayer::AddLayer(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddLayer)
{
    ui->setupUi(this);
}

AddLayer::~AddLayer()
{
    delete ui;
}
