#include "inventoryslot.h"

InventorySlot::InventorySlot(const Item* item,QWidget *parent) : QWidget(parent), data(item->data)
{
    layout = new QVBoxLayout();

    pLabelTitle = new QLabel("132213");
    pLabelImage = new QLabel();

    pLabelTitle->setText(item->data.title);
    pLabelImage->setPixmap(item->data.sprite);

    layout->addWidget(pLabelTitle);
    layout->addWidget(pLabelImage);

    setLayout(layout);
}
