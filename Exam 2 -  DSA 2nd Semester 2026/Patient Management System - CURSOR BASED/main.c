#include <stdio.h>
#include <string.h>
#include "hospital.h"

/* ---------------- GLOBAL HEADS ---------------- */
List headCardiovascular = -1;
List headNeurology = -1;

/* ---------------- FUNCTION PROTOTYPES (FROM vheap.c) ---------------- */
void initVHeap(VHeap *VH);
void insertEnd(VHeap *VH, List *head, Node data);
void deleteById(VHeap *VH, List *head, int id);
void transfer(VHeap *VH, List *from, List *to, int id);
void display(VHeap *VH, List head, char *dept);

int main() {
    VHeap VH;

    int choice, id, dept, target;

    initVHeap(&VH);

    while (1) {
        printf("========== PATIENT MANAGEMENT MENU ==========\n");
        printf("1. Add Patient\n");
        printf("2. Delete Patient\n");
        printf("3. Transfer Patient\n");
        printf("4. Display All\n");
        printf("5. Exit\n");
        printf("Choice: ");
        scanf("%d", &choice);

        switch (choice) {

        case 1: {
            Node data;

            printf("ID: "); scanf("%d", &data.id);
            printf("Name: "); scanf("%s", data.name);
            printf("Age: "); scanf("%d", &data.age);
            printf("Diagnosis: "); scanf("%s", data.diagnosis);
            printf("Department (1-Cardiovascular, 2-Neurology): ");
            scanf("%d", &dept);

            if (dept == 1)
                insertEnd(&VH, &headCardiovascular, data);
            else
                insertEnd(&VH, &headNeurology, data);
            printf("\n");
            break;
        }

        case 2:
            printf("ID: "); scanf("%d", &id);
            deleteById(&VH, &headCardiovascular, id);
            deleteById(&VH, &headNeurology, id);
            printf("\n");
            break;

        case 3:
            printf("ID: "); scanf("%d", &id);
            printf("Move to (1-CV,2-NE): ");
            scanf("%d", &target);

            if (target == 1)
                transfer(&VH, &headNeurology, &headCardiovascular, id);
            else
                transfer(&VH, &headCardiovascular, &headNeurology, id);
            printf("\n");
            break;

        case 4:
            display(&VH, headCardiovascular, "Cardiovascular");
            display(&VH, headNeurology, "Neurology");
            printf("\n");
            break;

        case 5:
            return 0;

        default:
            printf("Invalid choice.\n");
        }
    }
}