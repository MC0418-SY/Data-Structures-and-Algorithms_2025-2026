#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED

#include "cursor.h"


Item makeItem(const char *name, const char *desc);
int  isInventoryEmpty(Player *p);
int  isInventoryFull(Player *p);
void enqueue(Player *p, Item item);
Item dequeue(Player *p);
Item peek(Player *p);
void displayInventory(Player *p);

#endif // QUEUE_H_INCLUDED
