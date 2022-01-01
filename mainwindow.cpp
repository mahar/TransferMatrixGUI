#include "mainwindow.h"
#include "addlayer.h"
#include "addmaterial.h"
#include "calculation.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete addMaterial;
    delete addLayer;
    delete calculation;
}


void MainWindow::on_removeLayer_clicked()
{

    for(auto selectedIndex : ui->layersTable->selectedItems()) {
        ui->layersTable->removeRow(selectedIndex->row());
    }
}


void MainWindow::on_addLayerButton_clicked()
{
    addLayer = new AddLayer(this);
    addLayer->show();
}


void MainWindow::on_addMaterialButton_clicked()
{
    addMaterial = new AddMaterial(this);
    addMaterial->show();
}


void MainWindow::on_calculateButton_clicked()
{
    calculation = new Calculation(this);
    calculation->show();
}

