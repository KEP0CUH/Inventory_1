#include "inventory.h"

Inventory::Inventory(int capacity,QWidget* parent) : QWidget(parent),data(capacity,parent),view(data)
{
    pAdd = new QPushButton("Добавить итем");
    pAdd->resize(100,50);
    QObject::connect(pAdd,SIGNAL(clicked(bool)),this,SLOT(slotInvokeAddition()));
    pRemove = new QPushButton("Удалить итем");

    pHorizontalLayout = new QHBoxLayout();
    pVerticalLayout = new QVBoxLayout();

    buttonSpacer = new QSpacerItem(50,30,QSizePolicy::Expanding);
    inventoryVerticalSpacer = new QSpacerItem(300,250,QSizePolicy::Expanding);

    pVerticalLayout->addWidget(&view);
    pVerticalLayout->addItem(inventoryVerticalSpacer);
    pVerticalLayout->addLayout(pHorizontalLayout);
    pHorizontalLayout->addWidget(pAdd);
    pHorizontalLayout->addWidget(pRemove);
    pHorizontalLayout->addItem(buttonSpacer);

    setLayout(pVerticalLayout);


}

void Inventory::slotInvokeAddition()
{
    QPixmap sprite = (QFileDialog::getOpenFileName(0,"Открыть","","*.jpg *.png"));
    Item* pItem = new Item("123",sprite);
    this->addItem(pItem);
}

void Inventory::addItem(const Item* item)
{
    this->data.addItem(getId(),item);
    view.refreshData();
}
