#ifndef SHEET_H
#define SHEET_H

#include "Attribute.h"

#include <QtQml>
#include <QQuickItem>

class Sheet : public QQuickItem
{
    Q_OBJECT
    Q_PROPERTY(QQmlListProperty<Attribute> stats READ stats NOTIFY statsChanged)

public:
    Sheet();
    ~Sheet();

    QQmlListProperty<Attribute> stats();

signals:
    void statsChanged(QQmlListProperty<Attribute> arg);

public slots:

private:
    QList<Attribute*> m_stats;
};

#endif // SHEET_H
