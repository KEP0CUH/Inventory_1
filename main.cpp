#include "mainwindow.h"
#include <QApplication>
#include <QFileDialog>

#include "inventory.h"
#include "Item.h"


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Inventory* pInventory = new Inventory(15);


    const QString folderPath;
    QPixmap sprite = QPixmap(":/images/123.png");
    Item* pItem = new Item(argv[0],sprite);
    pInventory->addItem(pItem);

    pInventory->show();




//    QPixmap sprite = (QFileDialog::getOpenFileName(0,"Открыть","","*.jpg *.png"));
//    Item* pItem = new Item("123",sprite);
//    pInventory->addItem(pItem);

    return a.exec();
}
