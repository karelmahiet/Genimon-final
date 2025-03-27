#include "commande.h"
#include "ui_commande.h"

Commande::Commande(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Commande)
{
    ui->setupUi(this);
}

Commande::~Commande()
{
    delete ui;
}

void Commande::handleKeyPress(int key) {

}
