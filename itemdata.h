#ifndef ITEMDATA_H
#define ITEMDATA_H

#include <QString>
#include <QPixmap>
//#include "inventoryslot.h"

class ItemData
{
private:
    QString title;
    QPixmap sprite;
public:
    ItemData(QString title,QPixmap pixmap);
    QString getTitle() { return title;}
    friend class InventorySlot;
};

#endif // ITEMDATA_H
