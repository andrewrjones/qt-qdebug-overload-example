#ifndef QPOINT_H
#define QPOINT_H

#include <QObject>
#include <QDebug>
#include <QSharedPointer>

class QPoint : public QObject
{
    Q_OBJECT
public:
    explicit QPoint(const int &x, const int &y, QObject *parent = 0);

    int x() const;
    int y() const;

private:
    int _x;
    int _y;
};

Q_DECLARE_METATYPE(QSharedPointer<QPoint>)

QDebug operator<<(QDebug dbg, const QPoint &point);

#endif // QPOINT_H
