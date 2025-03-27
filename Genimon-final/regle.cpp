#include "regle.h"
#include "ui_regle.h"

Regle::Regle(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Regle)
{
    ui->setupUi(this);
}

Regle::~Regle()
{
    delete ui;
}

void Regle::handleKeyPress(int key) {

}
