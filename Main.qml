import QtQuick 2.15
import QtQuick.Controls 2.15

ApplicationWindow {
    visible: true
    width: 400
    height: 200
    title: "Context Properties Example"

    // Display person's name using the context property
    Text {
        anchors.centerIn: parent
        text: "Hello, " + person.name
    }
}
