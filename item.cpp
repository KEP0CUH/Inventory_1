#include "item.h"

Item::Item(QString title,QPixmap sprite,QObject *parent) : QObject(parent),data(title,sprite)
{

}

