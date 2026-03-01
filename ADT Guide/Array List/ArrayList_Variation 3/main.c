#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

int main()
{
    printf("Hello world!\n");

    List L = initialize(L);

	L = insertPos(L, 1, 0);
	L = insertPos(L, 2, 1);
	L = insertPos(L, 3, 2);
	L = insertPos(L, 4, 3);
	L = insertPos(L, 5, 4);
	L = insertPos(L, 6, 5);
	L = insertPos(L, 7, 6);
	L = insertPos(L, 8, 7);
	L = insertPos(L, 9, 8);
	L = insertPos(L, 10, 9);
	L = insertPos(L, 11, 10);
	printf("\nDisplaying List...\n");
	display(L);

	printf("\n\nDeleting 2...\n");
	L = deletePos(L, 1);
	display(L);
	printf("\n\nDeleting 4...\n");
	L = deletePos(L, 2);
	display(L);

	int loc;
	printf("\n\nLocating 3...\n");
	loc = locate(L, 3);
	printf("Located at Index [%d]", loc);

	printf("\n\nLocating 6...\n");
	loc = locate(L, 6);
	printf("Located at Index [%d]", loc);

	printf("\n\nInserting 4...\n");
	L = insertSorted(L, 4);
	display(L);
	printf("\n\nInserting 2...\n");
	L = insertSorted(L, 2);
	display(L);

	printf("\n\nList Count: %d", L.count);
	printf("\nList Count: %d", L.max);

    return 0;
}
