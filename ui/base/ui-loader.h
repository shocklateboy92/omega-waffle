#ifndef UILOADER_H
#define UILOADER_H

#include <QMainWindow>

#include <memory>

class UiLoader
{
public:
    UiLoader() = delete;
    ~UiLoader();

    static QMainWindow *createWindow();
    static void setupComponents();
};

#endif // UILOADER_H
