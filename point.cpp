#include "point.h"

Point::Point()
{
}

Point::Point(const int &x, const int &y)
{
    _x = x;
    _y = y;
}

Point::Point(const Point &other)
{
    _x = other.x();
    _y = other.y();
}

Point::~Point()
{
}

int Point::x() const
{
    return _x;
}

int Point::y() const
{
    return _y;
}

QDebug operator <<(QDebug dbg, const Point &point)
{
    dbg.nospace() << "Point(" << point.x() << "," << point.y() << ")";
    return dbg.maybeSpace();
}
