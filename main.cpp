#include <QCoreApplication>
#include <QDebug>

#include "point.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Point point(10,20);

    qDebug() << point;

    a.exit();
}
