#include <QDebug>

#include "watch.h"

Watch::Watch(QObject *parent) :
    QObject(parent)
{
    watchModel = new ListModel(new WatchItem, this);
}

Watch::~Watch()
{
    delete watchModel;
}

void Watch::initialize()
{
    watchModel->appendRow(new WatchItem(1, "Rolex", 2499.32, 123));
    watchModel->appendRow(new WatchItem(2, "Casio", 493.34, 15));
    watchModel->appendRow(new WatchItem(3, "Swatch", 3499.53, 115));
}

void Watch::appendRandom()
{
    qDebug() << "Appending random";
    watchModel->appendRow(new WatchItem(1, "Rolex", 2499.32, 123));
}

ListModel* Watch::getList()
{
    return watchModel;
}
