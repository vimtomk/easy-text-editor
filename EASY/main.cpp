#include "easy.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Easy w;
    w.show();
    return a.exec();
}
