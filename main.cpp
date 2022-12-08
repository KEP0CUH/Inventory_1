#include "mainwindow.h"
#include <QApplication>
#include <QFileDialog>

#include "inventory.h"
#include "Item.h"


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Inventory* pInventory = new Inventory(15);
    pInventory->show();


//    QPixmap sprite = (QFileDialog::getOpenFileName(0,"Открыть","","*.jpg *.png"));
//    Item* pItem = new Item("123",sprite);
//    pInventory->addItem(pItem);

    return a.exec();
}
