#include "controle.h"
#include "map.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Controle w;
    Map m;
    m.show();
    return a.exec();
}
