#ifndef GENIDEX_H
#define GENIDEX_H

#include <QWidget>

namespace Ui {
class Genidex;
}

class Genidex : public QWidget
{
    Q_OBJECT

public:
    explicit Genidex(QWidget *parent = nullptr);
    ~Genidex();

public slots:
    void handleKeyPress(int key);

private:
    Ui::Genidex *ui;

signals:
    void requestMenuChange(int index);  // Signal pour demander un changement de menu
};

#endif // GENIDEX_H
