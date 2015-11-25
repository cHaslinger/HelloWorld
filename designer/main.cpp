#include "ui_design_test.h"'
#include <QApplication>
#include <QQmlApplicationEngine>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QWidget *widget = new QWidget;
    Ui::design_test ui;
    ui.setupUi(widget);

    widget->show();
    return app.exec();

}

