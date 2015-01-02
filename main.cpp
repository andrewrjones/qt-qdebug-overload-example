#include <QCoreApplication>
#include <QDebug>

#include "point.h"
#include "qpoint.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Point point(10,20);
    qDebug() << point;

    QPoint qpoint(15,30);
    qDebug() << qpoint;

    a.exit();
}
