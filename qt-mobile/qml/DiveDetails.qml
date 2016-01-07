import QtQuick 2.4
import QtQuick.Controls 1.2
import QtQuick.Layouts 1.2
import QtQuick.Window 2.2
import QtQuick.Dialogs 1.2
import org.kde.plasma.mobilecomponents 0.2 as MobileComponents
import org.subsurfacedivelog.mobile 1.0

MobileComponents.Page {
	id: page
	objectName: "DiveList"
	function showDiveIndex(index) {
	    diveListView.currentIndex = index;
	    diveListView.positionViewAtIndex(diveListView.currentIndex, ListView.Beginning);
	}
	onWidthChanged: diveListView.positionViewAtIndex(diveListView.currentIndex, ListView.Beginning);

	ScrollView {
		anchors.fill: parent
		ListView {
			id: diveListView
			anchors.fill: parent
			model: diveModel
			currentIndex: -1
			boundsBehavior: Flickable.StopAtBounds
			maximumFlickVelocity: parent.width/4
			cacheBuffer: parent.width/2
			orientation: ListView.Horizontal
			focus: true
			clip: true
			snapMode: ListView.SnapOneItem
			delegate: ScrollView {
				id: internalScrollView
				width: diveListView.width
				height: diveListView.height
				property var modelData: model
					Flickable {
						contentWidth: width
						contentHeight: diveDetails.height
						DiveDetailsView {
							id: diveDetails
							width: internalScrollView.width
						}
				}
			}
		}
	}
	Button {
            text: "Edit"
            x: 100
            y: 100
            onClicked: {
                detailsEdit.dive_id = diveListView.currentItem.modelData.id
                detailsEdit.number = diveListView.currentItem.modelData.diveNumber
                detailsEdit.dateText = diveListView.currentItem.modelData.date
                detailsEdit.locationText = diveListView.currentItem.modelData.location
                detailsEdit.durationText = diveListView.currentItem.modelData.duration
                detailsEdit.depthText = diveListView.currentItem.modelData.depth
                detailsEdit.airtempText = diveListView.currentItem.modelData.airtemp
                detailsEdit.watertempText = diveListView.currentItem.modelData.watertemp
                detailsEdit.suitText = diveListView.currentItem.modelData.suit
                detailsEdit.buddyText = diveListView.currentItem.modelData.buddy
                detailsEdit.divemasterText = diveListView.currentItem.modelData.divemaster
                detailsEdit.notesText = diveListView.currentItem.modelData.notes
                editDrawer.open();
            }
        }
	MobileComponents.OverlayDrawer {
            id: editDrawer
            anchors.fill: parent
            edge: Qt.BottomEdge
            contentItem: DiveDetailsEdit {
                id: detailsEdit
                implicitHeight: page.height - MobileComponents.Units.gridUnit*3
            }
        }
}
