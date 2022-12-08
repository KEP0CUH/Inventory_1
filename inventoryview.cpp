#include "inventoryview.h"

InventoryView::InventoryView(const InventoryData& data,QWidget *parent) : QWidget(parent), data(data)
{
    pHorizontalLayout = new QHBoxLayout();
    pVerticalLayout = new QVBoxLayout();

    setLayout(pVerticalLayout);
}

void InventoryView::initData()
{
    for(auto iterator = data.itemsVector.begin(); iterator != data.itemsVector.end();++iterator)
    {
        InventorySlot* slot = new InventorySlot((*iterator));
        pVerticalLayout->addWidget(slot);
        inventorySlots.push_back(slot);
    }
}

void InventoryView::refreshData()
{
    auto iterator = data.itemsVector.back();
    InventorySlot* slot = new InventorySlot((iterator));
    pVerticalLayout->addWidget(slot,1);
    inventorySlots.push_back(slot);
}

