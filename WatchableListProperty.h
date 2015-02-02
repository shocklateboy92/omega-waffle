#ifndef WATCHABLELISTPROPERTY_H
#define WATCHABLELISTPROPERTY_H

#include <QList>
#include <QObject>

template <typename T>
class WatchableListProperty : QObject
{
public:
    WatchableListProperty(QList<T> data);
    ~WatchableListProperty();

private:
    QList<T> m_data;
};

#endif // WATCHABLELISTPROPERTY_H
