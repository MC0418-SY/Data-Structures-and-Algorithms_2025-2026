#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

void initialize(List *L){
	L->elemPtr = (int*)malloc(sizeof(int) * LENGTH);
	L->max = LENGTH;
	L->count = 0;
}

void insertPos(List *L, int data, int position){
	if(position <= L->count && position >= 0){
		if(L->count == L->max){
			resize(L);
		}

		for(int i = L->count; i > position; --i){
			L->elemPtr[i] = L->elemPtr[i - 1];
		}

		L->elemPtr[position] = data;
		L->count++;

	}
}

void deletePos(List *L, int position){
	if (position <= L->count){
		for(int i = position; i < L->count - 1; ++i){
			L->elemPtr[i] = L->elemPtr[i + 1];
		}
		L->count--;
	}
}

int locate(List *L, int data){
	int i;
	for(i = 0; i < L-> count && L->elemPtr[i] != data; ++i){}
	return (i < L->count) ? i : -1;
}

int retrieve(List *L, int position){
	if(position <= L->count && position >= 0){
		return L->elemPtr[position];
	}
}

void insertSorted(List *L, int data){
	if(L->count == L->max){
		resize(L);
	}

	int i;
	for(i = L->count - 1; i >= 0 && L->elemPtr[i] > data; --i){
		L->elemPtr[i + 1] = L->elemPtr[i];
	}

	L->elemPtr[i + 1] = data;
	L->count++;

}

void display(List *L){
	for(int i = 0; i < L->count; ++i){
		printf("%d", L->elemPtr[i]);
		if(i < L->count - 1){
			printf(", ");
		}
	}
	printf("\n");
}

void resize(List *L){
	int *temp = realloc(L->elemPtr, sizeof(int) * (L->max * 2));
	if(temp != NULL){
		L->elemPtr = temp;
		L->max *= 2;
	} else {
		printf("Memory reallocation failed bruh");
	}
}

void makeNULL(List *L){
    free(L->elemPtr);
    L->elemPtr = NULL;
    L->count = 0;
    L->max = 0;
}
