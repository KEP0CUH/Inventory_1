#include "inventorydata.h"

InventoryData::InventoryData(int capacity,QObject* parent) : capacity(capacity),QObject(parent)
{
    //itemsVector.resize(capacity,new Item(this));
}

void InventoryData::addItem(int id, const Item* item)
{
    itemsVector.push_back(item);
}
