#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

int main()
{
    printf("Hello world!\n");

    Etype List;
    EPtr L = &List;
    initialize(L);

	insertPos(L, 1, 0);
	insertPos(L, 2, 1);
	insertPos(L, 3, 2);
	insertPos(L, 4, 3);
	insertPos(L, 5, 4);

	printf("\nList: ");
	display(L);

	printf("\nDeleting %d...\n", L->elem[1]);
	deletePos(L, 1);
	display(L);
	printf("\nDeleting %d...\n", L->elem[2]);
	deletePos(L, 2);
	display(L);

	printf("\nLocating 5...");
	int idx = locate(L, 5);
	printf("\nFound at Index %d\n", idx);

	printf("\nRetrieving Element at Index [0]...");
	int ret = retrieve(L, 0);
	printf("\nElement is %d\n", ret);

	printf("\nInserting 6...\n");
	insertSorted(L, 6);
	display(L);
	printf("\nInserting 2...\n");
	insertSorted(L, 2);
	display(L);

	makeNULL(L);

    return 0;
}
