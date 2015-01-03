#include "debug.h"
#include "library.h"
#include "libraryModel.h"
#include <QAbstractItemView>
#include <QtWidgets>

Library::Library(QWidget *parent) : QWidget(parent) {
    libraryModel = new LibraryModel(this);

    // view
    libraryView = new LibraryView(this);
    libraryView->setModel(libraryModel);
    //QTreeView setModel(QAbstractItemModel *model): set the model for the view to present

    // layout
    QBoxLayout *displayLayout = new QVBoxLayout;
    displayLayout->addWidget(libraryView);
    setLayout(displayLayout);

    // signal connections
    connect(libraryView, SIGNAL(activated(QModelIndex)), this, SLOT(addToPlaylist(QModelIndex)));
    //activated(const QModelIndex &index): emitted when the item specified by index is activated by the user. activate items depends on the platform by single or double clicking the item
}

Library::~Library() {
    delete libraryModel;
    delete libraryView;
}

LibraryModel* Library::model() const {
    return libraryModel;
}

LibraryView* Library::view() const {
    return libraryView;
}

// slot
void Library::addToPlaylist(const QModelIndex idx) {
    TreeItem *item = libraryModel->getItem(idx);

    if (item->getItemType() == TreeItem::SONG) {
        emit(addSongToPlaylist(libraryModel->getSongInfo(idx)));
    }
    if (item->getItemType() == TreeItem::ARTIST) {
        emit(addArtistToPlaylist(libraryModel->getArtistSongInfo(idx)));
    }
}
