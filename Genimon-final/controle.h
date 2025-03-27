#ifndef CONTROLE_H
#define CONTROLE_H

#include <QMainWindow>
#include <QStackedWidget>
#include <QKeyEvent>

QT_BEGIN_NAMESPACE
namespace Ui {
class Controle;
}
QT_END_NAMESPACE

class Controle : public QMainWindow
{
    Q_OBJECT

public:
    Controle(QWidget *parent = nullptr);
    ~Controle();

protected:
    void keyPressEvent(QKeyEvent *event) override;

private:
    Ui::Controle *ui;
    QStackedWidget *stackedWidget;

    void changeMenu(int index);

signals:
    void sendKeyPress(int key); // Signal pour envoyer les touches clavier
};
#endif // CONTROLE_H
