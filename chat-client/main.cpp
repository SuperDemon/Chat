#include "clientwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ClientWindow w;
    w.setWindowTitle("Chat");
    w.show();

    return a.exec();
}
