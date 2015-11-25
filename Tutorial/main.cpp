#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QCoreApplication>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{

    //Hello World
    cout<<"HEY, you, I'm alive! Oh, and Hello World!\n";
    cin.get();

  return 1;



  //Qt Quick Application (ist bereits enthalten beim öffnen)
  QGuiApplication app(argc, argv);

  QQmlApplicationEngine engine;
  engine.load(QUrl(QStringLiteral("qrc:/main.qml")));

  return app.exec();
}




