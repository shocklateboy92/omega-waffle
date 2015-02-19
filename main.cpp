#include "Attribute.h"

#include <QApplication>
#include <QDockWidget>
#include <QMainWindow>
#include <QQmlApplicationEngine>
#include <QQuickView>
#include <QtQml>

#include "ui/base/ui-loader.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    auto mw = UiLoader::createWindow();
    UiLoader::setupComponents();

//    QQmlApplicationEngine engine;

    mw->setVisible(false);
    qmlRegisterType<Attribute>("org.lasath.turbo_batman", 1, 0, "Attribute");
    qmlRegisterType<Bonus>("org.lasath.turbo_batman", 1, 0, "Bonus");

//    engine.load();
    for (std::size_t i = 0; i < 7; i++) {
        auto d = new QDockWidget("Test", mw);
        auto qv = new QQuickView();
        auto widget = QWidget::createWindowContainer(qv);
        d->setWidget(widget);
        mw->addDockWidget(Qt::LeftDockWidgetArea, d);
        qv->setSource(QUrl(QStringLiteral("qrc:/main.qml")));
    }
    mw->setVisible(true);

    return app.exec();
}
