#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

int main()
{
    printf("Hello world!\n");

    //typedef struct node {
	//	int data;
	//	struct node *next;
	//} Node;
	//
	//typedef struct{
	//	Node *head;
	//	int count;
	//} List;

	List *L = initialize();

	printf("Linked List:\n");
	insertFirst(L, 5);
	insertFirst(L, 4);
	insertFirst(L, 3);
	insertFirst(L, 2);
	insertFirst(L, 1);
	display(L);

	printf("\nInserting 6, 7, 8, 9, 10...\n");
	insertLast(L, 6);
	insertLast(L, 7);
	insertLast(L, 8);
	insertLast(L, 9);
	insertLast(L, 10);
	display(L);

	printf("\nInserting at Position 5...\n");
	insertPos(L, 18, 5);
	display(L);

	printf("\nInserting at Position 4...\n");
	insertPos(L, 4, 4);
	display(L);

	printf("\nDeleting Front...\n");
	deleteStart(L);
	display(L);

	printf("\nDeleting Last...\n");
	deleteLast(L);
	display(L);

	printf("\nDeleting at Position 6...\n");
	deletePos(L, 6);
	display(L);

	printf("\nRetrieving Position 4...");
	int retri = retrieve(L, 4);
	printf("\nData is %d\n", retri);

	printf("\nLocating Index of 18...");
	int loc = locate(L, 18);
	printf("\nFound at Index [%d]\n", loc);

    return 0;
}
