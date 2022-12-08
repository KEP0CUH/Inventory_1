#ifndef INVENTORYVIEW_H
#define INVENTORYVIEW_H

#include <QWidget>
#include <QPushButton>
#include <QLayout>
#include <QSpacerItem>
#include <vector>
#include "inventorydata.h"
#include "inventoryslot.h"

class InventoryView : public QWidget
{
    Q_OBJECT
private:
    InventoryData data;
    std::vector<InventorySlot> inventorySlots;
    QPushButton* pAdd;
    QPushButton* pRemove;
    QVBoxLayout* pVerticalLayout;
    QHBoxLayout* pHorizontalLayout;
    QSpacerItem* buttonSpacer;
    QSpacerItem* inventoryVerticalSpacer;
public:
    explicit InventoryView(InventoryData data,QWidget *parent = 0);

signals:

public slots:
};

#endif // INVENTORYVIEW_H
