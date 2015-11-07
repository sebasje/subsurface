import QtQuick 2.3
import QtQuick.Controls 1.2
import QtQuick.Controls.Styles 1.2
import QtQuick.Window 2.2
import QtQuick.Dialogs 1.2
import QtQuick.Layouts 1.1
import QtQuick.Window 2.2
import org.subsurfacedivelog.mobile 1.0

Rectangle {
	id: topPart

	property bool goBack: (stackView.depth > 1)

	color: theme.accentColor
	Layout.minimumHeight: units.gridUnit * 2 + units.largeSpacing
	Layout.fillWidth: true
	Layout.margins: 0
	RowLayout {
		anchors.bottom: topPart.bottom
		anchors.bottomMargin: units.largeSpacing / 2
		anchors.left: topPart.left
		anchors.leftMargin: units.largeSpacing / 2
		anchors.right: topPart.right
		anchors.rightMargin: units.largeSpacing / 2
		Item {
			Layout.preferredHeight: subsurfaceLogo.height
			Image {
				id: subsurfaceLogo
				source: "qrc:/qml/subsurface-mobile-icon.png"
				anchors {
					top: parent.top
					left: parent.left
				}
				width: units.gridUnit * 2
				height: width
			}
			Text {
				text: qsTr("Subsurface")
				height: subsurfaceLogo.height
				anchors {
					left: subsurfaceLogo.right
					bottom: subsurfaceLogo.bottom
					leftMargin: units.gridUnit / 2
				}
				font.pointSize: units.fontMetrics.font.pointSize * 1.5
				verticalAlignment: Text.AlignBottom
				Layout.fillWidth: false
				color: theme.accentTextColor
			}
		}
		Item {
			Layout.fillWidth: true
		}
		Button {
			id: prefsButton
			// Display back arrow or menu button
			text: topPart.goBack ? "\u2190" : "\u22ee"
			anchors.right: parent.right
			Layout.preferredWidth: units.gridUnit * 2
			Layout.preferredHeight: parent.height
			style: ButtonStyle {
				background: Rectangle {
					implicitWidth: units.gridUnit * 2
					color: theme.accentColor
				}
				label: Text {
					id: txt
					color: theme.accentTextColor
					font.pointSize: units.fontMetrics.font.pointSize * 2
					font.bold: true
					text: control.text
					horizontalAlignment: Text.AlignHCenter
					verticalAlignment: Text.AlignVCenter
				}
			}
			onClicked: {
				if (topPart.goBack) {
					stackView.pop()
				} else {
					prefsMenu.popup()
				}
			}
		}

	}

}
