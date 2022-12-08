#ifndef ITEM_H
#define ITEM_H

#include <QObject>

class Item : public QObject
{
    Q_OBJECT
public:
    explicit Item(QObject *parent = 0);

signals:

public slots:
};

#endif // ITEMDATA_H
