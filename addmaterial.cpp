#include "addmaterial.h"
#include "ui_addmaterial.h"

AddMaterial::AddMaterial(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddMaterial)
{
    ui->setupUi(this);
}

AddMaterial::~AddMaterial()
{
    delete ui;
}

void AddMaterial::on_AddDielectricMaterial_clicked()
{
    // get the values from the boxes and save them.

    // Close the material window and update the materials list.

}

