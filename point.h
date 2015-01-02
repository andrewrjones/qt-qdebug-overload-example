#ifndef POINT_H
#define POINT_H

#include <QMetaType>
#include <QDebug>

class Point
{
public:
    Point();
    Point(const Point &other);
    ~Point();

    Point(const int &x, const int &y);

    int x() const;
    int y() const;

private:
    int _x;
    int _y;
};

Q_DECLARE_METATYPE(Point)

QDebug operator<<(QDebug dbg, const Point &point);

#endif // POINT_H
