#ifndef POINT_H
#define POINT_H

#include <QMetaType>
#include <QDebug>

class Point
{
public:
    Point(const int &x, const int &y);

    int x() const;
    int y() const;

private:
    int _x;
    int _y;
};

QDebug operator<<(QDebug dbg, const Point &point);

#endif // POINT_H
