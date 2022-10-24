#include "photonmainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    PhotonMainWindow w;
    w.show();
    return a.exec();
}

#include "main.moc"
