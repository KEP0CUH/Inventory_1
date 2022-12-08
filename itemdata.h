#ifndef ITEMDATA_H
#define ITEMDATA_H

#include <QString>
#include <QPixmap>

class ItemData
{
private:
    QString title;
    QPixmap sprite;
public:
    ItemData(QString title,QPixmap pixmap);
};

#endif // ITEMDATA_H
