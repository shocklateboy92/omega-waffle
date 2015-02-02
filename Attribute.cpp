#include "Attribute.h"
#include <algorithm>

Attribute::Attribute(QQuickItem *parent)
    : QQuickItem(parent)
{
}

Attribute::~Attribute()
{

}

Attribute::ModelPointer Attribute::model()
{
    return m_model;
}

QQmlListProperty<Bonus> Attribute::modifiers()
{
    return QQmlListProperty<Bonus>(this, m_modifiers);
}

int Attribute::value() const
{
    return std::accumulate(m_modifiers.begin(), m_modifiers.end(), 0, Bonus::add);
}

//void Attribute::setModifiers(QQmlListProperty<Bonus> arg)
//{
//    if (m_modifiers == arg)
//        return;

//    m_modifiers = arg;
//    emit modifiersChanged(arg);
//}
