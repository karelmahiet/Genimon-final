#ifndef MAP_H
#define MAP_H

#include <QWidget>

namespace Ui {
class Map;
}

class Map : public QWidget
{
    Q_OBJECT

public:
    explicit Map(QWidget *parent = nullptr);
    ~Map();

public slots:
    void handleKeyPress(int key);

private:
    Ui::Map *ui;

signals:
    void requestMenuChange(int index);  // Signal pour demander un changement de menu
};

#endif // MAP_H
