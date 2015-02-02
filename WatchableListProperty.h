#ifndef WATCHABLELISTPROPERTY_H
#define WATCHABLELISTPROPERTY_H

#include <QList>
#include <QObject>
#include <QQmlListProperty>

#include <functional>

template <typename T>
class ListPropertyUtils
{
public:
    ~ListPropertyUtils();

    static void qlist_append(QQmlListProperty<T> *p, T *v) {
        reinterpret_cast<QList<T *> *>(p->data)->append(v);
    }
    static int qlist_count(QQmlListProperty<T> *p) {
        return reinterpret_cast<QList<T *> *>(p->data)->count();
    }
    static T *qlist_at(QQmlListProperty<T> *p, int idx) {
        return reinterpret_cast<QList<T *> *>(p->data)->at(idx);
    }
    static void qlist_clear(QQmlListProperty<T> *p) {
        return reinterpret_cast<QList<T *> *>(p->data)->clear();
    }

    static QQmlListProperty<T> build(std::function<void(T*)> append_callback, QList<T> data) {
        return {nullptr, data, qlist_append, qlist_count, qlist_at, qlist_clear};
    }

private:
    ListPropertyUtils();
    QList<T*> m_data;
};

#endif // WATCHABLELISTPROPERTY_H
