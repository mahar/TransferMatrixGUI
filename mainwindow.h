#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "addlayer.h"
#include "addmaterial.h"
#include "calculation.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_addLayerButton_clicked();

    void on_removeLayer_clicked();

    void on_addMaterialButton_clicked();

    void on_calculateButton_clicked();

private:
    Ui::MainWindow *ui;
    AddLayer * addLayer;
    AddMaterial * addMaterial;
    Calculation * calculation;

};
#endif // MAINWINDOW_H
