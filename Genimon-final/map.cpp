#include "map.h"
#include "ui_map.h"
#include <QKeyEvent>
#include <QLabel>
#include <QPixmap>
#include "joueur.h"

Map::Map(QWidget* parent)
    : QWidget(parent)
    , ui(new Ui::Map)
    , joueurX(100)
    , joueurY(100)
{
    ui->setupUi(this);

    // Création du bonhomme (cone.png)
    joueur = new Joueur(5, 5, this);
    QPixmap sprite(":/Image_Qt/Chimie/Erlenmeyer_test.jpg");  // assure-toi que le .qrc contient cette ressource
    joueur->setPixmap(sprite.scaled(32, 32, Qt::KeepAspectRatio, Qt::SmoothTransformation));
    joueur->setGeometry(joueurX, joueurY, 32, 32);
    joueur->show();

    setFocusPolicy(Qt::StrongFocus); // Permet de capter les touches
    setFocus();
}

Map::~Map()
{
    delete ui;
}

void Map::handleKeyPress(int key) {

}

void Map::keyPressEvent(QKeyEvent* event) {
    if (!joueur) return; // protection anti crash

    int step = 10;

    switch (event->key()) {
    case Qt::Key_W:
    case Qt::Key_Up:
        joueurY -= step;
        break;
    case Qt::Key_S:
    case Qt::Key_Down:
        joueurY += step;
        break;
    case Qt::Key_A:
    case Qt::Key_Left:
        joueurX -= step;
        break;
    case Qt::Key_D:
    case Qt::Key_Right:
        joueurX += step;
        break;
    default:
        QWidget::keyPressEvent(event);
        return;
    }

    joueur->move(joueurX, joueurY);
}
