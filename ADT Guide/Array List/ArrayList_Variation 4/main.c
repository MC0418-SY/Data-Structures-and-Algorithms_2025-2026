#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

int main() {
    List *L = (List *)malloc(sizeof(List));

    initialize(L);

    insertPos(L, 10, 0);
    insertPos(L, 20, 1);
    insertPos(L, 15, 1);
    printf("\n\nList after insertPos:\n");
    display(L);

    deletePos(L, 1);
    printf("\n\nList after deletePos at index 1:\n");
    display(L);

    int idx = locate(L, 20);
    printf("\n\nLocate 20 -> index %d\n", idx);

    insertSorted(L, 5);
    insertSorted(L, 25);
    printf("\n\nList after insertSorted:\n");
    display(L);

    int val = retrieve(L, 2);
    printf("\n\nRetrieve element at index 2 -> %d\n", val);

    makeNULL(L);
    free(L); // free the list struct itself

    return 0;
}
