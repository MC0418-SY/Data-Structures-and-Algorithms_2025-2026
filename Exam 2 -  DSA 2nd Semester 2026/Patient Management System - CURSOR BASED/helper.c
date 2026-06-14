#include <stdio.h>
#include <string.h>
#include "hospital.h"

void initVHeap(VHeap *VH) {
    for (int i = 0; i < MAX - 1; i++) {
        VH->H[i].next = i + 1;
    }
    VH->H[MAX - 1].next = -1;

    VH->avail = 0;
}

int allocSpace(VHeap *VH) {
    int index = VH->avail;

    if (index != -1)
        VH->avail = VH->H[index].next;

    return index;
}

void deallocSpace(VHeap *VH, int index) {
    VH->H[index].next = VH->avail;
    VH->avail = index;
}

void insertEnd(VHeap *VH, List *head, Node data) {
    int newNode = allocSpace(VH);

    if (newNode == -1) {
        printf("Memory Full!\n");
        return;
    }

    VH->H[newNode].patient = data;
    VH->H[newNode].patient.next = -1;

    if (*head == -1) {
        *head = newNode;
        return;
    }

    int temp = *head;

    while (VH->H[temp].patient.next != -1) {
        temp = VH->H[temp].patient.next;
    }

    VH->H[temp].patient.next = newNode;
}

void display(VHeap *VH, List head, char *dept) {
    printf("\n%s Department:\n", dept);

    if (head == -1) {
        printf("Empty\n");
        return;
    }

    int curr = head;

    while (curr != -1) {
        printf("ID:%d Name:%s Age:%d Diagnosis:%s\n",
               VH->H[curr].patient.id,
               VH->H[curr].patient.name,
               VH->H[curr].patient.age,
               VH->H[curr].patient.diagnosis);

        curr = VH->H[curr].patient.next;
    }
}