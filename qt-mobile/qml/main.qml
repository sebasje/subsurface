import QtQuick 2.3
import QtQuick.Controls 1.2
import QtQuick.Controls.Styles 1.2
import QtQuick.Window 2.2
import QtQuick.Dialogs 1.2
import QtQuick.Layouts 1.1
import QtQuick.Window 2.2
import org.subsurfacedivelog.mobile 1.0
import "qrc:/qml/theme" as Theme


ApplicationWindow {
	title: qsTr("Subsurface mobile")
	property bool fullscreen: true
	property alias messageText: message.text
	visible: true

	Theme.Units {
		id: units

		property int titlePointSize: Math.round(fontMetrics.font.pointSize * 1.5)
		property int smallPointSize: Math.round(fontMetrics.font.pointSize * 0.7)

	}

	Theme.Theme {
		id: theme
		/* Added for subsurface */
		property color accentColor: "#2d5b9a"
		property color accentTextColor: "#ececec"
	}

	Menu {
		id: prefsMenu
		title: "Menu"

		MenuItem {
			text: "Preferences"
			onTriggered: {
				stackView.push(prefsWindow)
			}
		}

		MenuItem {
			text: "Load Dives"
			onTriggered: {
				manager.loadDives();
			}
		}

		MenuItem {
			text: "Download Dives"
			onTriggered: {
				stackView.push(downloadDivesWindow)
			}
		}

		MenuItem {
			text: "Add Dive"
			onTriggered: {
				manager.addDive();
				stackView.push(detailsWindow)
			}
		}

		MenuItem {
			text: "Save Changes"
			onTriggered: {
				manager.saveChanges();
			}
		}

		MenuItem {
			text: "View Log"
			onTriggered: {
				stackView.push(logWindow)
			}
		}

		MenuItem {
			text: "Theme Information"
			onTriggered: {
				stackView.push(themetest)
			}
		}
	}

	ColumnLayout {
		anchors.fill: parent

		TopBar {

		}

		StackView {
			id: stackView
			Layout.preferredWidth: parent.width
			Layout.fillHeight: true
			focus: true
			Keys.onReleased: if (event.key == Qt.Key_Back && stackView.depth > 1) {
						stackView.pop()
						event.accepted = true;
					}
			initialItem: Item {
				width: parent.width
				height: parent.height

				ColumnLayout {
					id: awLayout
					anchors.fill: parent
					spacing: units.gridUnit / 2

					Rectangle {
						id: detailsPage
						Layout.fillHeight: true
						Layout.fillWidth: true

						DiveList {
							anchors.fill: detailsPage
							id: diveDetails
							color: theme.backgroundColor
						}
					}

					Rectangle {
						id: messageArea
						height: childrenRect.height
						Layout.fillWidth: true
						color: theme.backgroundColor

						Text {
							id: message
							color: theme.textColor
							wrapMode: TextEdit.WrapAtWordBoundaryOrAnywhere
							styleColor: theme.textColor
							font.pointSize: units.smallPointSize
						}
					}
				}
			}
		}
	}

	QMLManager {
		id: manager
	}

	Preferences {
		id: prefsWindow
		visible: false
	}

	DiveDetails {
		id: detailsWindow
		visible: false
	}

	DownloadFromDiveComputer {
		id: downloadDivesWindow
		visible: false
	}

	Log {
		id: logWindow
		visible: false
	}

	ThemeTest {
		id: themetest
		visible: false
	}

	Component.onCompleted: {
		print("units.gridUnit is: " + units.gridUnit);
	}
}
