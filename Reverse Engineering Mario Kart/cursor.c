#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "cursor.h"


Player createPlayer(const char *account, const char *id,
                    const char *charName, const char *carName,
                    int coins) {
    Player p;
    memset(&p, 0, sizeof(Player));
    strcpy(p.handle.accountName, account);
    strcpy(p.handle.id,          id);
    strcpy(p.selected.charName,  charName);
    strcpy(p.chosen.name,        carName);
    p.coins          = coins;
    p.inventoryCount = 0;
    return p;
}


void initialize(VirtualList *V) {
    int i;
    for (i = 0; i < MAX - 1; i++) {
        V->R[i].next = i + 1;
    }
    V->R[MAX - 1].next = -1;
    V->available = 0;
}


int allocSpace(VirtualList *V) {
    if (V->available == -1) {
        return -1; // No space left
    }
    int index = V->available;
    V->available = V->R[V->available].next;
    return index;
}


void deallocSpace(VirtualList *V, int index) {
    V->R[index].next = V->available;
    V->available = index;
}


void insertFirst(int *L, VirtualList *V, Player racer) {
    int newNode = allocSpace(V);
    if (newNode == -1) {
        printf("[ERROR] List is full. Cannot insert '%s'.\n", racer.handle.accountName);
    } else {
        V->R[newNode].racer = racer;
        V->R[newNode].next  = *L;
        *L = newNode;
    }
}


void insertLast(int *L, VirtualList *V, Player racer) {
    int newNode = allocSpace(V);
    if (newNode == -1) {
        printf("[ERROR] List is full. Cannot insert '%s'.\n", racer.handle.accountName);
    } else {
        int *cur;
        V->R[newNode].racer = racer;
        V->R[newNode].next  = -1;

        for (cur = L; *cur != -1; cur = &V->R[*cur].next);
        *cur = newNode;
    }
}


void insertSorted(int *L, VirtualList *V, Player racer) {
    int newNode = allocSpace(V);
    if (newNode == -1) {
        printf("[ERROR] List is full. Cannot insert '%s'.\n", racer.handle.accountName);
    } else {
        V->R[newNode].racer = racer;

        int *cur;
        for (cur = L; *cur != -1 &&
             !(V->R[*cur].racer.coins < racer.coins ||
              (V->R[*cur].racer.coins == racer.coins &&
               strcmp(V->R[*cur].racer.handle.accountName, racer.handle.accountName) > 0));
             cur = &V->R[*cur].next);

        V->R[newNode].next = *cur;
        *cur = newNode;
    }
}


void delete(int *L, VirtualList *V, Player racer) {
    int *cur = L;
    for (; *cur != -1 && strcmp(V->R[*cur].racer.handle.accountName, racer.handle.accountName) != 0; cur = &V->R[*cur].next) {}
    if (*cur != -1) {
        int toFree = *cur;
        *cur = V->R[*cur].next;
        deallocSpace(V, toFree);
    } else {
        printf("[WARN] Racer '%s' not found in the list.\n", racer.handle.accountName);
    }
}


void deleteAllOccurrence(int *L, VirtualList *V, Player racer) {
    int *cur;
    int found = 0;

    for (cur = L; *cur != -1; ) {
        if (strcmp(V->R[*cur].racer.handle.accountName, racer.handle.accountName) == 0) {
            int toFree = *cur;
            *cur = V->R[*cur].next;
            deallocSpace(V, toFree);
            found = 1;
        } else {
            cur = &V->R[*cur].next;
        }
    }

    if (!found)
        printf("[WARN] Racer '%s' not found in the list.\n", racer.handle.accountName);
}

/* -----------------------------------------------------------------------
   display
   Prints every racer in the list with their rank, account name, character,
   car, and current coin count.
   ----------------------------------------------------------------------- */
void display(int L, VirtualList V) {
    if (L == -1) {
        printf("(empty list)\n");
    } else {
        int cur;
        int rank = 1;

        printf("\n%-4s %-20s %-15s %-20s %s\n",
               "Rank", "Account Name", "Character", "Car", "Coins");
        printf("%-4s %-20s %-15s %-20s %s\n",
               "----", "--------------------", "---------------",
               "--------------------", "-----");

        for (cur = L; cur != -1; cur = V.R[cur].next, rank++) {
            Player *p = &V.R[cur].racer;
            printf("%-4d %-20s %-15s %-20s %d\n",
                   rank,
                   p->handle.accountName,
                   p->selected.charName,
                   p->chosen.name,
                   p->coins);
        }
        printf("\n");
    }
}
