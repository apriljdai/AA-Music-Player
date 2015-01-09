#include "mainWindow.h"
#include "playlistmodel.h"
#include "libraryModel.h"
#include <QMenu>
#include <QMenuBar>
#include <QApplication>
#include <QString>
#include <QFileDialog>
#include <QDesktopWidget>

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent) {
    setWindowTitle(tr("AAMusicPlayer"));

    // set up player/playlist area
    player = new Player(this);

    // set up library
    library = new Library(this);

    // central Widget
    centralWidget = new QWidget(this);

    setupWidgets();
    menubar = new QMenuBar(this);
    setupMenus();
}

MainWindow::~MainWindow() {
    /*
    delete player;
    delete library;
    delete centralWidget;
    delete fileMenu;
    delete exitAction;
    delete importFromFolderAction;
    delete refreshLibraryAction;
    delete aboutMenu;
    delete aboutAction;
    */
    delete menubar;
}

void MainWindow::setupWidgets() {
    // widgets layout
    QHBoxLayout *hboxLayout = new QHBoxLayout(centralWidget);

    QSizePolicy spLibrary(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
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
    connect(player->model(), SIGNAL(playlistFileOpened(QFileInfo)), library->model_pl(), SLOT(addToModelAndDB(QFileInfo)));

    connect(library->model_pl(), SIGNAL(loadPlaylist(QString)), player->model(), SLOT(loadPlaylistItem(QString)));
    connect(player->model(), SIGNAL(newPlaylistCreated(QString, QString)), library->model_pl(), SLOT(addNewlyCreatedPlaylist(QString, QString)));
}

void MainWindow::setupMenus() {

    fileMenu = menubar->addMenu(tr("&File"));
    // actions associated with fileMenu:

    // importFromFolderAction
    importFromFolderAction = new QAction(tr("Import from folder"), this);
    fileMenu->addAction(importFromFolderAction);
    connect(importFromFolderAction, SIGNAL(triggered()), this, SLOT(importFromFolder()));

    // refreshLibraryAction
    refreshLibraryAction = new QAction(tr("Refresh Library"), this);
    fileMenu->addAction(refreshLibraryAction);
    connect(refreshLibraryAction, SIGNAL(triggered()), library->model(), SLOT(refreshLibrary()));
    connect(refreshLibraryAction, SIGNAL(triggered()), library->model_pl(), SLOT(refresh()));

    // exitAction
    exitAction = new QAction(tr("&Exit"), this);
    fileMenu->addAction(exitAction);
    connect(exitAction, SIGNAL(triggered()), this, SLOT(close()));

    aboutMenu = menubar->addMenu(tr("&About"));

    // aboutAction
    aboutAction = new QAction(tr("About"), this);
    aboutMenu->addAction(aboutAction);
    connect(aboutAction, SIGNAL(triggered()), SLOT(about()));
}

void MainWindow::importFromFolder() {
    QString dir = QFileDialog::getExistingDirectory(this, tr("Import from folder"),
                          QString(), QFileDialog::ShowDirsOnly | QFileDialog::DontResolveSymlinks);
    library->model()->addFromDir(dir);
}

void MainWindow::about() {
    QString msg = "AAMusicPlayer\nThe MIT License (MIT)\nCopyright (c) 2014 Allen Yin, April Dai";
    QMessageBox::about(0, "Title", msg);
}
