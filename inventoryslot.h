#ifndef INVENTORYSLOT_H
#define INVENTORYSLOT_H

#include <QWidget>
#include <QLabel>
#include <QLayout>
#include "item.h"

class InventorySlot : public QWidget
{
    Q_OBJECT
private:
    const ItemData data;
    QLabel* pLabelTitle;
    QLabel* pLabelImage;
    QVBoxLayout* layout;
public:
    explicit InventorySlot(const Item* data,QWidget *parent = 0);
signals:

public slots:
};

#endif // INVENTORYSLOT_H
