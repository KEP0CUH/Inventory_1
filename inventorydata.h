#ifndef INVENTORYDATA_H
#define INVENTORYDATA_H

#include <vector>
#include <map>
#include <Item.h>

class InventoryData
{
private:
    int capacity;
    std::vector<Item*> itemsVector;
    std::map<int,QString> items;
public:
    InventoryData(int);
    void addItem(int,Item*);
    void RemoveItem(int);
};

#endif // INVENTORY_H
