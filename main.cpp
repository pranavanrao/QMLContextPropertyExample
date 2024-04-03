#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include "person.h"
#include <QQmlContext>

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    Person person;

    QQmlApplicationEngine engine;

    engine.rootContext()->setContextProperty("person", &person);

    engine.load(QUrl(QStringLiteral("qrc:/QMLContextProperties/Main.qml")));

    return app.exec();
}
