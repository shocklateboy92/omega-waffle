#include "ui-loader.h"

#include <QThread>

const QString COMPONENTS_PATH = QStringLiteral("qrc://");

UiLoader::~UiLoader()
{

}

QMainWindow* UiLoader::createWindow()
{
    auto window = new QMainWindow();
    window->setDockOptions(QMainWindow::AllowNestedDocks
                           | QMainWindow::AllowTabbedDocks
                           | QMainWindow::AnimatedDocks);
    return window;
}

void UiLoader::setupComponents()
{
}

