#ifndef MAP_H
#define MAP_H

#include <QWidget>
#include <QLabel>
#include <QKeyEvent>

namespace Ui {
    class Map;
}

class Map : public QWidget
{
    Q_OBJECT

public:
    explicit Map(QWidget* parent = nullptr);
    ~Map();

    void handleKeyPress(int key);

protected:
    void keyPressEvent(QKeyEvent* event) override;

private:
    Ui::Map* ui;
    QLabel* joueur;
    int joueurX;
    int joueurY;
};

#endif // MAP_H
