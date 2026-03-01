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
	display(L);

	L = deletePos(L, 1);
	display(L);
	L = deletePos(L, 4);
	display(L);

	int idx = locate(L, 5);
	printf("Found at Index %d\n", idx);


	L = insertSorted(L, 6);
	display(L);
	L = insertSorted(L, 2);
	display(L);



    return 0;
}
