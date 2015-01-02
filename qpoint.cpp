#include "qpoint.h"

QPoint::QPoint(const int &x, const int &y, QObject *parent) :
    QObject(parent)
{
    _x = x;
    _y = y;
}

int QPoint::x() const
{
    return _x;
}

int QPoint::y() const
{
    return _y;
}

QDebug operator <<(QDebug dbg, const QPoint &point)
{
    dbg.nospace() << "QPoint(" << point.x() << "," << point.y() << ")";
    return dbg.maybeSpace();
}
