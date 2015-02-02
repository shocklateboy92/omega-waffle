#include "Sheet.h"

Sheet::Sheet()
{

}

Sheet::~Sheet()
{

}

QQmlListProperty<Attribute> Sheet::stats()
{
    return {this, m_stats};
}

