#include "genidex.h"
#include "ui_genidex.h"

Genidex::Genidex(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Genidex)
{
    ui->setupUi(this);
}

Genidex::~Genidex()
{
    delete ui;
}

void Genidex::handleKeyPress(int key) {

}
