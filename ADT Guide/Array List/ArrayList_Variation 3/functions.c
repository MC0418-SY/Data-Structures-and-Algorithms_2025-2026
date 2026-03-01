#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

//typedef struct{
//	int *elemPtr;
//	int count;
//	int max;
//} List;

List initialize(List L){
	L.elemPtr = (int*)malloc(sizeof(int) * LENGTH);
	L.max = LENGTH;
	L.count = 0;
	return L;
}
List insertPos(List L, int data, int position){
	if(position <= L.count){
		if (L.count == L.max){
			L = resize(L);
		}

		for(int i = L.count; i > position; --i){
			L.elemPtr[i] = L.elemPtr[i - 1];
		}

		L.elemPtr[position] = data;
        L.count++;
	}

	return L;

}

List deletePos(List L, int position){
	if(position >= 0 && position <= L.count){
		for(int i = position; i < L.count -1; ++i){
			L.elemPtr[i] = L.elemPtr[i + 1];
		}
		L.count--;
	}
	return L;
}

int locate(List L, int data){
	int i;
	for(i = 0; i < L.count && L.elemPtr[i] != data; ++i){}
	return (i < L.count) ? i : -1;
}

List  insertSorted(List L, int data){
	if(L.count == L.max){
		L = resize(L);
	}
	int i;

	for(i = L.count - 1; i >= 0 && L.elemPtr[i] > data; --i){
		L.elemPtr[i + 1] = L.elemPtr[i];
	}

	L.elemPtr[i + 1] = data;
	L.count++;

	return L;
}

void display(List L){
	for(int i = 0; i < L.count; ++i){
		printf("%d", L.elemPtr[i]);
		if(i < L.count - 1){
			printf(", ");
		}
	}

}

List resize(List L){
    int *temp = realloc(L.elemPtr, sizeof(int) * (L.max * 2));
    if(temp != NULL){
        L.elemPtr = temp;
        L.max = L.max * 2;
    } else {
        printf("Memory reallocation failed bruh");
    }
    return L;
}
