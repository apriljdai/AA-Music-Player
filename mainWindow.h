#pragma once
#include "debug.h"
#include "util.h"
#include "debug.h"
#include "util.h"
#include "player.h"
#include "library.h"
#include <QMainWindow>
#include <QHBoxLayout>
#include <QtWidgets>

class Player;
class QHBoxLayout;

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();

public slots:

private slots:
    void importFromFolder();

private:
    Player *player;
    Library *library;
    QWidget *centralWidget;
    QMenuBar *menubar;
    QMenu *fileMenu;
    QAction *exitAction;
    QAction *importFromFolderAction;
    QAction *refreshLibraryAction;
    //QAction *importFileAction;
    void setupWidgets();
    void setupMenus();

};
