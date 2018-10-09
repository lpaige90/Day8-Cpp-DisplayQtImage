#include "surprise.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Surprise w;
    w.show();

    return a.exec();
}
