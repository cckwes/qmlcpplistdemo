#include <QApplication>
#include <QtDeclarative>
#include <QGraphicsObject>
#include <QDebug>

#include "watch.h"

int main(int argc, char* argv[])
{
    QApplication app(argc, argv);

    Watch w;
    w.initialize();

    QDeclarativeView view;
    view.rootContext()->setContextProperty("watchModel", w.getList());
    view.setSource(QUrl("qrc:///main.qml"));
    QObject *rootObject = view.rootObject();

    QObject::connect(rootObject, SIGNAL(addItem()), &w, SLOT(appendRandom()));

    view.show();

    return app.exec();
}
