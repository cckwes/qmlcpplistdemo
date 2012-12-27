#ifndef WATCHITEM_H
#define WATCHITEM_H

#include <QObject>

#include "listmodel.h"

class WatchItem : public ListItem
{
    Q_OBJECT

public:
    enum Roles {
        IdRole = Qt::UserRole + 1,
        NameRole,
        PriceRole,
        WeightRole
    };

public:
    WatchItem(QObject *parent = 0) : ListItem(parent) {}
    explicit WatchItem(const int id, const QString& name, const qreal price, const qreal weight, QObject *parent = 0);
    QVariant data(int role) const;
    QHash<int, QByteArray> roleNames() const;
    inline int id() const {return m_id;}
    inline QString name() const {return m_name;}
    inline qreal price() const {return m_price;}
    inline qreal weight() const {return m_weight;}
    
signals:
    
public slots:

private:
    int m_id;
    QString m_name;
    qreal m_price, m_weight;
    
};

#endif // WATCHITEM_H
