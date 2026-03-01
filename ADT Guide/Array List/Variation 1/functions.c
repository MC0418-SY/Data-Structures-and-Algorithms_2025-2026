#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

List initialize(List L){
    L.count = 0;
    return L;
}

List insertPos(List L, int data, int position){
    if(position >= 0 && position <= L.count && L.count < MAX){
        for(int i = L.count; i > position; --i){
            L.elem[i] = L.elem[i - 1];
        }

        L.elem[position] = data;
        L.count++;
    }

    return L;
}

List deletePos(List L, int position){
    if(position >= 0 && position < L.count){
        for(int i = position; i < L.count - 1; ++i){
            L.elem[i] = L.elem[i + 1];
        }

        L.count--;
    }

    return L;
}

int locate(List L, int data){
    int i;
    for(i = 0; i < L.count && L.elem[i] != data; ++i){}

    if(i < L.count){
        return i;
    } else {
        return -1;
    }
}

List insertSorted(List L, int data){
    if(L.count < MAX){
        int i;

        for(i = L.count - 1; i >= 0 && L.elem[i] > data; --i){
            L.elem[i + 1] = L.elem[i];
        }

        L.elem[i + 1] = data;
        L.count++;
    }

    return L;
}

void display(List L){
    for(int i = 0; i < L.count; ++i){
        printf("%d", L.elem[i]);
        if(i < L.count - 1){
            printf(", ");
        }
    }
    printf("\n");
}
