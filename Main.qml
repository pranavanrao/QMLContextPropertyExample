import QtQuick 2.15
import QtQuick.Controls 2.15

ApplicationWindow {
    visible: true
    width: 400
    height: 200
    title: "Context Properties Example"

    Rectangle {
        anchors.fill: parent
        color: person.primaryColor

        Text {
            anchors.centerIn: parent
            text: "Hello, " + person.name
        }
    }
}
