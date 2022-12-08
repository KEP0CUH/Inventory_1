#ifndef INVENTORY_H
#define INVENTORY_H

#include <QWidget>
#include <QSpacerItem>
#include "inventorydata.h"
#include "inventoryview.h"

class Inventory : public QWidget
{
    Q_OBJECT
private:
    int idForItem = 0;

    InventoryData data;
    InventoryView view;

    QPushButton* pAdd;
    QPushButton* pRemove;
    QVBoxLayout* pVerticalLayout;
    QHBoxLayout* pHorizontalLayout;
    QSpacerItem* buttonSpacer;
    QSpacerItem* inventoryVerticalSpacer;


public:
    explicit Inventory(int,QWidget* parent = 0);
    void addItem(const Item*);
    int getId() { return ++idForItem;}
signals:

public slots:
    void slotInvokeAddition();

};

#endif // INVENTORY_H
