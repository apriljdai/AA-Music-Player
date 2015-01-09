#pragma once
#include <QTreeView>
#include <QMouseEvent>

class LibraryView : public QTreeView {
    Q_OBJECT

public:
    LibraryView(QWidget* parent = 0);
    ~LibraryView();

protected:
    virtual void mouseDoubleClickEvent(QMouseEvent* e);
    virtual void dragEnterEvent(QDragEnterEvent *event);
    virtual void dragMoveEvent(QDragMoveEvent *event);
    virtual void keyPressEvent(QKeyEvent *event);


private:

};
