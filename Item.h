#ifndef ITEM_H
#define ITEM_H

#include <QObject>
#include "itemdata.h"
#include "itemview.h"

class Item : public QObject
{
    Q_OBJECT
private:
    ItemData data;
    ItemView view;
public:
    Item(QString,QPixmap,QObject *parent = 0);
    friend class ItemView;
    friend class InventorySlot;

signals:

public slots:
};

#endif // ITEMDATA_H
