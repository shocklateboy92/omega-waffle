import QtQuick 2.4
import QtQuick.Layouts 1.0

Item {
    width: 400
    height: 400

    RowLayout {
        id: rowLayout1
        anchors.rightMargin: 0
        anchors.bottomMargin: 0
        anchors.leftMargin: 0
        anchors.topMargin: 0
        anchors.fill: parent

        Text {
            id: text1
            width: 27
            height: 13
            text: qsTr("FORT")
            font.pointSize: 42
        }

        Text {
            id: text2
            text: qsTr("+7")
            style: Text.Normal
            font.pointSize: 42
        }
    }
}

