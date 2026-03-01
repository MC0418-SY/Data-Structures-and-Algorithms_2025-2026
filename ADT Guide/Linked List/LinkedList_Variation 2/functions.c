#include "functions.h"
#include <stdio.h>
#include <stdlib.h>

//typedef struct node {
//	int data;
//	struct node *next;
//} Node;
//
//typedef struct{
//	Node *head;
//	int count;
//} List;

List* initialize(){
	List *L = (List*)malloc(sizeof(List));
	if(L != NULL){
		L->head = NULL;
		L->count = 0;
	} else {
		return NULL;
	}

	return L;
}

void empty(List *list) {
    Node *current = list->head;
    while (current != NULL) {
        Node *next = current->next;
        free(current);
        current = next;
    }
    list->head = NULL;
    list->count = 0;
}

void insertFirst(List *list, int data){
	Node *temp = (Node*)malloc(sizeof(Node));
	if (temp == NULL) return;
	temp->data = data;
	temp->next = list->head;
	list->head = temp;
	list->count++;
}

void insertLast(List *list, int data){
	Node *temp = (Node*)malloc(sizeof(Node));
	if (temp == NULL) return;
	temp->data = data;
	temp->next = NULL;

	if(list->head == NULL){
		list->head = temp;
	} else {
		Node *trav = list->head;
		while(trav->next != NULL){
			trav = trav->next;
		}
		trav->next = temp;
	}
	list->count++;
}

void insertPos(List *list, int data, int index){
	if(index <= list->count){
		if(index == 0){
			insertFirst(list, data);
		} else if (index == list->count){
			insertLast(list, data);
		} else {
			Node *temp = (Node*)malloc(sizeof(Node));
			if (temp == NULL) return;
			temp->data = data;

			Node *trav = list->head;
			for(int i = 0; i < index - 1; ++i){
				trav = trav->next;
			}
			temp->next = trav->next;
			trav->next = temp;
			list->count++;
		}
	}
}

void deleteStart(List *list){
	Node *trav = list->head;
	list->head = trav->next;
	free(trav);
	list->count--;
}

void deleteLast(List *list){
	if (list->count == 0) return;

	if(list->count == 1){
		free(list->head);
		list->head = NULL;
		list->count--;
	} else {
		Node *trav = list->head;
		for(int i = 0; i < list->count -2; ++i){
			trav = trav->next;
		}
		free(trav->next);
		trav->next = NULL;
		list->count--;
	}
}

void deletePos(List *list, int index){
	if(index == 0){
		deleteStart(list);
	} else {
		Node *trav = list->head;
		for(int i = 0; i < index - 1; ++i){
			trav = trav->next;
		}
		Node *temp = trav->next;
		trav->next = temp->next;
		free(temp);
		list->count--;
	}
}

int retrieve(List *list, int index){
	if(index < list->count){
		Node *trav = list->head;
		for(int i = 0; i < index; ++i){
			trav = trav->next;
		}
		return trav->data;
	}
	return -1;
}

int locate(List *list, int data) {
    if (list->head == NULL) return -1;
    int index = 0;
    for (Node *trav = list->head; trav != NULL; trav = trav->next, index++) {
        if (trav->data == data) return index;
    }
    return -1;
}

void display(List *list){
	for(Node *trav = list->head; trav != NULL; trav = trav->next){
		printf("%d", trav->data);
		if(trav->next != NULL){
			printf(" -> ");
		}
	}
	printf("\n");

}
