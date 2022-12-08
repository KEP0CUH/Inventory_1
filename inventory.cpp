#include "inventory.h"

Inventory::Inventory(int capacity,QObject* parent) : QObject(parent),data(capacity),view(data)
{
    view.show();
}
