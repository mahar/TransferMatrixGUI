#ifndef ADDLAYER_H
#define ADDLAYER_H

#include <QDialog>

namespace Ui {
class AddLayer;
}

class AddLayer : public QDialog
{
    Q_OBJECT

public:
    explicit AddLayer(QWidget *parent = nullptr);
    ~AddLayer();

private:
    Ui::AddLayer *ui;
};

#endif // ADDLAYER_H
