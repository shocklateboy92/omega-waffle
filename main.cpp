#include "Attribute.h"

#include <QApplication>
#include <QQmlApplicationEngine>
#include <QtQml>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QQmlApplicationEngine engine;

    qmlRegisterType<Attribute>("org.lasath.turbo_batman", 1, 0, "Attribute");
    qmlRegisterType<Bonus>("org.lasath.turbo_batman", 1, 0, "Bonus");

    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));

    return app.exec();
}
