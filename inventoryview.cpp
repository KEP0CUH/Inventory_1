#include "inventoryview.h"

InventoryView::InventoryView(InventoryData data,QWidget *parent) : QWidget(parent), data(data)
{
    pAdd = new QPushButton("Добавить итем");
    pAdd->resize(100,50);
    pRemove = new QPushButton("Удалить итем");

    pHorizontalLayout = new QHBoxLayout();
    pVerticalLayout = new QVBoxLayout();

    buttonSpacer = new QSpacerItem(50,30,QSizePolicy::Expanding);
    inventoryVerticalSpacer = new QSpacerItem(300,450,QSizePolicy::Expanding);

    pVerticalLayout->addItem(inventoryVerticalSpacer);
    pVerticalLayout->addLayout(pHorizontalLayout);
    pHorizontalLayout->addWidget(pAdd);
    pHorizontalLayout->addWidget(pRemove);
    pHorizontalLayout->addItem(buttonSpacer);

    setLayout(pVerticalLayout);

}

