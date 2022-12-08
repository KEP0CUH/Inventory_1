#ifndef INVENTORY_H
#define INVENTORY_H

#include <QObject>
#include "inventorydata.h"
#include "inventoryview.h"

class Inventory : public QObject
{
    Q_OBJECT
private:
    InventoryData data;
    InventoryView view;
public:
    explicit Inventory(int,QObject* parent = 0);

signals:

public slots:

};

#endif // INVENTORY_H
