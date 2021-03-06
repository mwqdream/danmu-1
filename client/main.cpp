#include "widget.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;

    w.setWindowFlags(Qt::FramelessWindowHint | Qt::WindowStaysOnTopHint);
    w.setAttribute(Qt::WA_TranslucentBackground);
    w.showFullScreen();
    w.show();

    return a.exec();
}
