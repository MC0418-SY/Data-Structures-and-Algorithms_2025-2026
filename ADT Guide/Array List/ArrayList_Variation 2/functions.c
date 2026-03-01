#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

void initialize(EPtr L){
	L->count = 0;
}

void insertPos(EPtr L, int data, int position){
	if(position <= L->count && L->count != MAX && position >= 0){
		for(int i = L->count; i > position; --i){
			L->elem[i] = L->elem[i - 1];
		}
		L->elem[position] = data;
        L->count++;

	}
}
void deletePos(EPtr L, int position){
	if(position >= 0 && position < L->count){
        for(int i = position; i < L->count - 1; ++i){
            L->elem[i] = L->elem[i + 1];
        }

        L->count--;
    }

}
int locate(EPtr L, int data){
	int i;
	for(i = 0; i < L->count && L->elem[i] != data; ++i){};
	return (i < L->count) ? i : -1;
}

int retrieve(EPtr L, int position){
	if(position <= L->count){
		return L->elem[position];
	}
}

void insertSorted(EPtr L, int data){
	    if(L->count < MAX){
        int i;

        for(i = L->count - 1; i >= 0 && L->elem[i] > data; --i){
            L->elem[i + 1] = L->elem[i];
        }

        L->elem[i + 1] = data;
        L->count++;
    }
}

void display(EPtr L){
	for(int i = 0; i < L->count; ++i){
        printf("%d", L->elem[i]);
        if(i < L->count - 1){
            printf(", ");
        }
    }
    printf("\n");

}

void makeNULL(EPtr L){
    L->count = 0;
}
