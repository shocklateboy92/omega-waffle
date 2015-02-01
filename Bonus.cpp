#include "Bonus.h"

Bonus::Bonus(QQuickItem *parent)
    : QQuickItem(parent)
{

}

Bonus::~Bonus()
{

}

int Bonus::amount() const
{
    return m_amount;
}

QString Bonus::name() const
{
    return m_name;
}

void Bonus::setAmount(int arg)
{
    if (m_amount == arg)
        return;

    m_amount = arg;
    emit amountChanged(arg);
}

void Bonus::setName(QString arg)
{
    if (m_name == arg)
        return;

    m_name = arg;
    emit nameChanged(arg);
}

