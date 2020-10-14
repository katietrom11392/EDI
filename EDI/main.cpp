#include "windowlogin.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    WindowLogin w;
    w.show();
    return a.exec();
}
