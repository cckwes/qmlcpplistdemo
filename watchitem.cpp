#include "watchitem.h"

WatchItem::WatchItem(const int id, const QString &name, const qreal price, const qreal weight, QObject *parent) :
    m_id(id), m_name(name), m_price(price), m_weight(weight), ListItem(parent)
{
}

QVariant WatchItem::data(int role) const
{
    switch(role) {
    case IdRole:
        return id();

    case NameRole:
        return name();

    case PriceRole:
        return price();

    case WeightRole:
        return weight();

    default:
        return QVariant();
    }
}

QHash<int, QByteArray> WatchItem::roleNames() const
{
    QHash<int, QByteArray> names;
    names[IdRole] = "id";
    names[NameRole] = "name";
    names[PriceRole] = "price";
    names[WeightRole] = "weight";
    return names;
}
