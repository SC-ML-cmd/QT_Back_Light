#ifndef LISTVIEW_H
#define LISTVIEW_H

#include <QListView>


class ListView : public QListView
{
    Q_OBJECT
public:
    explicit ListView(QWidget *parent = nullptr);
    void resizeEvent(QResizeEvent* event);
};


#endif // LISTVIEW_H
