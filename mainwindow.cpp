#include "mainwindow.h"
#include "calculation.h"
#include "tmm.h"
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
    ui->layersTable->insertRow(ui->layersTable->rowCount());

}

/*
//void MainWindow::on_addMaterialButton_clicked()
//{
//    addMaterial = new AddMaterial(this);
    addMaterial->exec();

    // when Material window is closed
    if (addMaterial->Accepted) {
        QString epsS = QString::number(addMaterial->getEpsilon());
        QString muS = QString::number(addMaterial->getMu());
        QString nameS = addMaterial->getName();


        ui->MaterialsTable->insertRow(ui->MaterialsTable->rowCount());

        QTableWidgetItem *nameItem = new QTableWidgetItem (nameS);
        QTableWidgetItem *epsItem = new QTableWidgetItem (epsS);
        QTableWidgetItem *muItem = new QTableWidgetItem (muS);

        ui->MaterialsTable->setItem(ui->MaterialsTable->rowCount()-1,0, nameItem);
        ui->MaterialsTable->setItem(ui->MaterialsTable->rowCount()-1,1,epsItem);
        ui->MaterialsTable->setItem(ui->MaterialsTable->rowCount()-1,2,muItem);




    }
}
*/


void MainWindow::on_calculateButton_clicked()
{
    //calculation = new Calculation(this);
    //calculation->show();

    // Step 1: Frequency range and angle of incidence

    /* Step 2: Gather the layer and material list
     * and convert them into the appropriate data structures.
     */
    std::vector<Layer> structure = {};
    double freqStart = ui->FreqStart->value();
    double freqEnd = ui->FreqEnd->value();
    int freqsNumber = ui->FreqsNumber->value();

    double angleInc = ui->Angle->value();

    double freqStep = (freqEnd-freqStart)/freqsNumber;

    for (double freq = freqStart; freq <= freqEnd; freq += freqStep) {
        tmm * calculation = new tmm(freq,angleInc, structure);
    }


}




