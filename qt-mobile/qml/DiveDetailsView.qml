import QtQuick 2.3
/*
import QtWebView 1.0
*/
import QtQuick.Controls 1.2
import QtQuick.Controls.Styles 1.2
import QtQuick.Dialogs 1.2
import QtQuick.Layouts 1.1
import org.subsurfacedivelog.mobile 1.0
import org.kde.plasma.mobilecomponents 0.2 as MobileComponents

Item {
	id: detailsView
	property int labelWidth: MobileComponents.Units.gridUnit * 10
	width: parent.width
	height: mainLayout.implicitHeight + MobileComponents.Units.iconSizes.large
	Rectangle {
	    z: 99
		color: MobileComponents.Theme.textColor
		opacity: 0.3
		width: MobileComponents.Units.smallSpacing/4
		anchors {
			right: parent.right
			top: parent.top
			bottom: parent.bottom
		}
	}
	GridLayout {
		id: mainLayout
		anchors {
		    fill: parent
		    margins: MobileComponents.Units.gridUnit
		}
		columns: 4
		rowSpacing: MobileComponents.Units.smallSpacing * 2
		columnSpacing: MobileComponents.Units.smallSpacing

		/*Connections {
			target: diveDetailsWindow
			onDive_idChanged: {
				qmlProfile.diveId = diveDetailsWindow.dive_id
				qmlProfile.update()
			}
		}*/

		MobileComponents.Heading {
			id: detailsViewHeading
			Layout.fillWidth: true
			text: location
			font.underline: gps !== ""
			Layout.columnSpan: 4
			wrapMode: TextEdit.WrapAtWordBoundaryOrAnywhere
			MouseArea {
				anchors.fill: parent
				onClicked: {
					if (gps !== "")
						manager.showMap(gps)
				}
			}
		}
		/*
		Rectangle {
			id: mapView
			width: parent.width
			height: parents.width * 0.7
			WebView {
				id: webView
				anchors.fill: parent
				url: "http://www.google.com"
			}
		}
	*/
		MobileComponents.Label {
			Layout.alignment: Qt.AlignRight
			id: dateLabel
			text: "Date: "
			opacity: 0.6
		}
		MobileComponents.Label {
			text: date
			Layout.minimumWidth: Math.max(MobileComponents.Units.gridUnit * 4, paintedWidth) // helps vertical alignment throughout listview
			Layout.columnSpan: 3
		}

		MobileComponents.Label {
			Layout.alignment: Qt.AlignRight
			id: depthLabel
			text: "Depth: "
			opacity: 0.6
		}
		MobileComponents.Label {
			text: depth
			Layout.minimumWidth: Math.max(MobileComponents.Units.gridUnit * 4, paintedWidth) // helps vertical alignment throughout listview
		}
		MobileComponents.Label {
			Layout.alignment: Qt.AlignRight
			text: "Duration: "
			opacity: 0.6
		}
		RowLayout {
			MobileComponents.Label {
				text: duration
			}
			Item {
				Layout.fillWidth: true
				height: parent.height
			}
			MobileComponents.Label {
				id: numberText
				text: "#" + diveNumber
				color: MobileComponents.Theme.textColor
			}
		}

		QMLProfile {
			id: qmlProfile
			Layout.fillWidth: true
			Layout.minimumHeight: Layout.preferredHeight
			Layout.preferredHeight: width * 0.66
			Layout.columnSpan: 4
			Rectangle {
				color: "transparent"
				opacity: 0.6
				border.width: 1
				border.color: MobileComponents.Theme.textColor;
				anchors.fill: parent

			}
			//Rectangle { color: "green"; opacity: 0.4; anchors.fill: parent } // used for debugging the dive profile sizing, will be removed later
		}

		MobileComponents.Heading {
			Layout.fillWidth: true
			level: 3
			text: "Dive Details"
			Layout.columnSpan: 4
		}

		MobileComponents.Label {
			Layout.alignment: Qt.AlignRight
			text: "Air Temp:"
			opacity: 0.6
		}
		MobileComponents.Label {
			id: txtAirTemp
			text: airtemp
			Layout.fillWidth: true
			wrapMode: TextEdit.WrapAtWordBoundaryOrAnywhere
		}

		MobileComponents.Label {
			Layout.alignment: Qt.AlignRight
			text: "Water Temp:"
			opacity: 0.6
		}
		MobileComponents.Label {
			id: txtWaterTemp
			text: watertemp
			Layout.fillWidth: true
			wrapMode: TextEdit.WrapAtWordBoundaryOrAnywhere
		}

		MobileComponents.Label {
			Layout.alignment: Qt.AlignRight
			text: "Suit:"
			opacity: 0.6
		}
		MobileComponents.Label {
			id: txtSuit
			text: suit
			Layout.fillWidth: true
			wrapMode: TextEdit.WrapAtWordBoundaryOrAnywhere
		}

		MobileComponents.Label {
			Layout.alignment: Qt.AlignRight
			text: "Weight:"
			opacity: 0.6
		}
		MobileComponents.Label {
			id: txtWeight
			text: weight
			Layout.fillWidth: true
			wrapMode: TextEdit.WrapAtWordBoundaryOrAnywhere
		}

		MobileComponents.Label {
			Layout.alignment: Qt.AlignRight
			text: "Buddy:"
			opacity: 0.6
		}
		MobileComponents.Label {
			id: txtBuddy
			text: buddy
			Layout.fillWidth: true
			wrapMode: TextEdit.WrapAtWordBoundaryOrAnywhere
		}

		MobileComponents.Label {
			Layout.alignment: Qt.AlignRight
			text: "Dive Master:"
			opacity: 0.6
		}
		MobileComponents.Label {
			id: txtDiveMaster
			text: divemaster
			Layout.fillWidth: true
			wrapMode: TextEdit.WrapAtWordBoundaryOrAnywhere
		}

		MobileComponents.Heading {
			Layout.fillWidth: true
			level: 3
			text: "Notes"
			Layout.columnSpan: 4
		}

		MobileComponents.Label {
			id: txtNotes
			text: notes
			focus: true
			Layout.columnSpan: 4
			Layout.fillWidth: true
			Layout.fillHeight: true
			//selectByMouse: true
			wrapMode: TextEdit.WrapAtWordBoundaryOrAnywhere
		}
		Item {
			Layout.columnSpan: 4
			Layout.fillWidth: true
			Layout.minimumHeight: MobileComponents.Units.gridUnit * 3
		}
		Component.onCompleted: {
			qmlProfile.setMargin(MobileComponents.Units.smallSpacing)
			qmlProfile.diveId = model.id;
			qmlProfile.update();
		}
	}
}
