#ifndef INVENTORYDATA_H
#define INVENTORYDATA_H

#include <QObject>
#include <vector>
#include <map>
#include <Item.h>

class InventoryData : public QObject
{
    Q_OBJECT
private:
    int capacity;
    std::vector<const Item*> itemsVector;
    std::map<int,QString> items;
public:
    explicit InventoryData(int,QObject* parent = 0);
    void addItem(int,const Item*);
    void RemoveItem(int);
    friend class InventoryView;
};

#endif // INVENTORY_H
