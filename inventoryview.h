#ifndef INVENTORYVIEW_H
#define INVENTORYVIEW_H

#include <QWidget>
#include <QPushButton>
#include <QLayout>
#include <QSpacerItem>
#include <vector>
#include <QFileDialog>
#include "inventorydata.h"
#include "inventoryslot.h"

class InventoryView : public QWidget
{
    Q_OBJECT
private:
    const InventoryData& data;
    std::vector<InventorySlot*> inventorySlots;
    QVBoxLayout* pVerticalLayout;
    QHBoxLayout* pHorizontalLayout;
    QSpacerItem* buttonSpacer;
    QSpacerItem* inventoryVerticalSpacer;

    void initData();
public:
    explicit InventoryView(const InventoryData& data,QWidget *parent = 0);

signals:

public slots:
    void refreshData();
};

#endif // INVENTORYVIEW_H
