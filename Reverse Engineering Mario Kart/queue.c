#include <stdio.h>
#include <string.h>
#include "queue.h"


Item makeItem(const char *name, const char *desc) {
    Item it;
    strcpy(it.itemName,    name);
    strcpy(it.description, desc);
    return it;
}


int isInventoryEmpty(Player *p) {
    return p->inventoryCount == 0;
}


int isInventoryFull(Player *p) {
    return p->inventoryCount == MAX_INVENTORY;
}


void enqueue(Player *p, Item item) {
    if (isInventoryFull(p)) {
        printf("[INFO] '%s' inventory full! Oldest item '%s' replaced by '%s'.\n\n",
               p->handle.accountName,
               p->inventory[0].itemName,
               item.itemName);
        int i;
        for (i = 0; i < MAX_INVENTORY - 1; i++)
            p->inventory[i] = p->inventory[i + 1];
        p->inventory[MAX_INVENTORY - 1] = item;
    } else {
        p->inventory[p->inventoryCount] = item;
        p->inventoryCount++;
    }
}


Item dequeue(Player *p) {
    if (isInventoryEmpty(p)) {
        printf("[INFO] '%s' has no items to use.\n", p->handle.accountName);
        Item empty = {"", ""};
        return empty;
    }

    Item front = p->inventory[0];

    int i;
    for (i = 0; i < p->inventoryCount - 1; i++)
        p->inventory[i] = p->inventory[i + 1];

    p->inventoryCount--;
    return front;
}


Item peek(Player *p) {
    if (isInventoryEmpty(p)) {
        printf("[INFO] '%s' has no items to peek at.\n", p->handle.accountName);
        Item empty = {"", ""};
        return empty;
    }

    return p->inventory[0];
}


void displayInventory(Player *p) {
    printf("Inventory for '%s' [%d/%d]:\n",
           p->handle.accountName, p->inventoryCount, MAX_INVENTORY);

    if (isInventoryEmpty(p)) {
        printf("  (empty)\n");
    } else {
        int i;
        for (i = 0; i < p->inventoryCount; i++)
            printf("\t[%d] %-20s \"%s\"\n",
                   i + 1,
                   p->inventory[i].itemName,
                   p->inventory[i].description);
    }
}
