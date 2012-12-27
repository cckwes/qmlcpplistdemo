import QtQuick 1.1

Rectangle {
    id: appWindow
    width: 480
    height: 854

    signal addItem();

    ListView {
        width: parent.width
        height: parent.height - 100
        anchors.top: parent.top
        anchors.left: parent.left

        model: watchModel

        delegate: Item {
            width: parent.width
            height: 200

            Column {
                spacing: 20

                Text {
                    text: name
                    font.pixelSize: 30
                    font.bold: Font.Bold
                    horizontalAlignment: Text.AlignHCenter
                }

                Text {
                    text: price
                    font.pixelSize: 22
                    font.italic: true
                    horizontalAlignment: Text.AlignRight
                }
            }
        }
    }

    Rectangle {
        width: parent.width
        height: 80
        radius: 20
        color: "blue"
        anchors.bottom: parent.bottom

        Text {
            font.pixelSize: 25
            color: "white"
            text: "Add"
            anchors.centerIn: parent
        }

        MouseArea {
            anchors.fill: parent
            onClicked: appWindow.addItem();
        }
    }
}
