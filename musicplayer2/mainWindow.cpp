#include "mainWindow.h"
#include "playlistmodel.h"
#include "libraryModel.h"
#include <QMenu>
#include <QMenuBar>
#include <QApplication>
#include <QString>
#include <QFileDialog>

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent) {
    setWindowTitle(tr("AAMusicPlayer"));

    // set up player/playlist area
    player = new Player();

    // set up library
    library = new Library();

    // central Widget
    centralWidget = new QWidget();

    setupWidgets();
    setupMenus();
}

MainWindow::~MainWindow() {
    delete player;
    delete library;
    delete centralWidget;
    delete fileMenu;
    delete menubar;
    delete exitAction;
    delete importFromFolderAction;
    delete refreshLibraryAction;
    //delete importFileAction;
}

void MainWindow::setupWidgets() {
    // widgets layout
    QHBoxLayout *hboxLayout = new QHBoxLayout(centralWidget);

    QSizePolicy spLibrary(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
    //QSizePolicy::MinimumExpanding: the SizeHint() is minimal, and sufficient. The widget can make use of extra space, so it should get as much space as possible
    //QSizePolicy::Preferred: the sizeHint() is best, but the widget can be shrunk and still be useful. The widget can be expanded, but there is no advantage to it being larger than sizeHint()
    //sizeHint(): holds the recommended size for the widget
    spLibrary.setHorizontalStretch(1);
    library->setSizePolicy(spLibrary);
    hboxLayout->addWidget(library);

    QSizePolicy spPlayer(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
    spPlayer.setHorizontalStretch(6);
    player->setSizePolicy(spPlayer);
    hboxLayout->addWidget(player);
    setCentralWidget(centralWidget);
    connect(player, SIGNAL(changeTitle(QString)), this, SLOT(setWindowTitle(const QString &)));

    // signal connections.
    connect(library, SIGNAL(addSongToPlaylist(QHash<QString, QString>)), player, SLOT(addSongFromLibrary(QHash<QString, QString>)));
    connect(library, SIGNAL(addArtistToPlaylist(QList<QHash<QString, QString> >)), player, SLOT(addArtistFromLibrary(QList<QHash<QString, QString> >)));
    connect(player->model(), SIGNAL(mediaAddedToPlaylist(QString)), library->model(), SLOT(addMusicFromPlaylist(QString)));
    connect(player->model(), SIGNAL(playlistMetaDataChange(QHash<QString, QString>)), library->model(), SLOT(playlistMetaDataChange(QHash<QString,QString>)));
    connect(library->model(), SIGNAL(libraryMetaDataChanged(int, QString, QString)), player->model(), SLOT(libraryMetaDataChanged(int, QString, QString)));
}

void MainWindow::setupMenus() {
    menubar = new QMenuBar(this);

    fileMenu = menubar->addMenu(tr("&File"));
    // actions associated with fileMenu:

    // importFromFolderAction
    importFromFolderAction = new QAction(tr("Import from folder"), this);
    fileMenu->addAction(importFromFolderAction);
    connect(importFromFolderAction, SIGNAL(triggered()), this, SLOT(importFromFolder()));
    //triggered(): emitted when the action is activated by the user.

    // refreshLibraryAction
    refreshLibraryAction = new QAction(tr("Refresh Library"), this);
    fileMenu->addAction(refreshLibraryAction);
    connect(refreshLibraryAction, SIGNAL(triggered()), library->model(), SLOT(refreshLibrary()));

    // exitAction
    exitAction = new QAction(tr("&Exit"), this);
    fileMenu->addAction(exitAction);
    connect(exitAction, SIGNAL(triggered()), this, SLOT(close()));
}

void MainWindow::importFromFolder() {
    QString dir = QFileDialog::getExistingDirectory(this, tr("Import from folder"),
                          QString(), QFileDialog::ShowDirsOnly | QFileDialog::DontResolveSymlinks);
    //QFileDialog::getExistingDirectory(QWidget *parent = 0, QString(), const QString & dir, Options options = ShowDirsOnly)
    //QFileDialog::ShowDirsOnly: Only show directories in the file dialog.
    //QFileDialog::DontResolveSymlinks: Don't resolve symlinks in the file dialog.
    library->model()->addFromDir(dir);
}

