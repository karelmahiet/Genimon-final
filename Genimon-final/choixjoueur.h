#ifndef CHOIXJOUEUR_H
#define CHOIXJOUEUR_H

#include <QWidget>

namespace Ui {
class ChoixJoueur;
}

class ChoixJoueur : public QWidget
{
    Q_OBJECT

public:
    explicit ChoixJoueur(QWidget *parent = nullptr);
    ~ChoixJoueur();

public slots:
    void handleKeyPress(int key);   // Slot pour gérer les touches 1 et 2

private:
    Ui::ChoixJoueur *ui;
    void updateQuiz();

    int etat;
    char typeChoisi;
    QString nomJoueur;
    bool Clavier1;
    bool Clavier2;

signals:
    void requestMenuChange(int index);  // Signal pour demander un changement de menu
};

#endif // CHOIXJOUEUR_H
