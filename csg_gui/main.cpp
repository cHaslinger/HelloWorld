#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QWidgetSet>
#include <QtGui>



#include <cl_figures.h>
#include <cl_ball.h>
#include <cl_operations.h>

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));
    return app.exec();


}

