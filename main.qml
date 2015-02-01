import QtQuick 2.4
import QtQuick.Controls 1.3
import QtQuick.Window 2.2
import QtQuick.Dialogs 1.2

import org.lasath.turbo_batman 1.0;

ApplicationWindow {
    title: qsTr("Hello World")
    width: 640
    height: 480
    visible: true

    menuBar: MenuBar {
        Menu {
            title: qsTr("&File")
            MenuItem {
                text: qsTr("&Open")
                onTriggered: messageDialog.show(qsTr("Open action triggered"));
            }
            MenuItem {
                text: qsTr("E&xit")
                onTriggered: Qt.quit();
            }
        }
    }

    Text {
        anchors.fill: parent
        text: attr.value
        font.pixelSize: height
        horizontalAlignment: Text.AlignHCenter
    }

    Attribute {
        id: attr
        modifiers: [
            Bonus {
                name: "Text"
                amount: 3
            },
            Bonus {
                name: "Another"
                amount: 9
            }

        ]
    }
}
