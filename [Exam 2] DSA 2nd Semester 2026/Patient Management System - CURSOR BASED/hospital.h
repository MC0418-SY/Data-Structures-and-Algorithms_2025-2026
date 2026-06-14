#ifndef VHEAP_H
#define VHEAP_H

#define MAX 10

/* ---------------- NODE ---------------- */
typedef struct {
    int id;
    char name[50];
    int age;
    char diagnosis[50];
    int next;
} Node;

/* ---------------- HEAP CELL ---------------- */
typedef struct {
    Node patient;
    int next;
} Cell, HeapSpace[MAX];

/* ---------------- VHEAP ---------------- */
typedef struct {
    HeapSpace H;
    int avail;
} VHeap;

/* ---------------- LIST TYPE ---------------- */
typedef int List;

/* ---------------- FUNCTION PROTOTYPES ---------------- */
void initVHeap(VHeap *VH);

int allocSpace(VHeap *VH);
void deallocSpace(VHeap *VH, int index);

void insertEnd(VHeap *VH, List *head, Node data);
void deleteById(VHeap *VH, List *head, int id);
void transfer(VHeap *VH, List *from, List *to, int id);

void display(VHeap *VH, List head, char *dept);

#endif