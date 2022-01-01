#ifndef ADDMATERIAL_H
#define ADDMATERIAL_H

#include <QDialog>

namespace Ui {
class AddMaterial;
}

class AddMaterial : public QDialog
{
    Q_OBJECT

public:
    explicit AddMaterial(QWidget *parent = nullptr);
    ~AddMaterial();

private slots:
    void on_AddDielectricMaterial_clicked();

private:
    Ui::AddMaterial *ui;
};

#endif // ADDMATERIAL_H
