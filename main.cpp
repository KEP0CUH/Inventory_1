#include "mainwindow.h"
#include <QApplication>

#include "inventory.h"


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Inventory* pInventory = new Inventory(15);

    return a.exec();
}
