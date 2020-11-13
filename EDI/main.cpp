#include "windowlogin.h"

#include <QApplication>

/*********************************
 * main opens our applicatiion
*********************************/

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    WindowLogin w;
    w.show();
    return a.exec();
}
