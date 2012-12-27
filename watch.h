#ifndef WATCH_H
#define WATCH_H

#include <QObject>
#include "watchitem.h"

class Watch : public QObject
{
    Q_OBJECT
public:
    explicit Watch(QObject *parent = 0);
    ~Watch();
    void initialize();
    ListModel* getList();
    
signals:
    
public slots:
    void appendRandom();

private:
    ListModel *watchModel;
};

#endif // WATCH_H
