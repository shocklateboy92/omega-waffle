import QtQuick 2.4
import QtQuick.Layouts 1.0

Item {
    width: 400
    height: 400

    RowLayout {
        id: rowLayout1
        anchors.fill: parent

        Image {
            id: image1
            width: 100
            height: 100
            sourceSize.height: text1.height
            sourceSize.width: 4
            source: "file:///home/fernie/Downloads/line-icon-set/eps/heart66.eps"
        }

        Text {
            id: text1
            text: qsTr("73/156")
            font.pointSize: 48
            font.pixelSize: 12
        }

        Save {
            id: save1
        }

        Save {
            id: save2
        }
    }
}

