#include <stdio.h>
#include "traffic.h"

int main() {
    Road roadA, roadB;
    init(&roadA);
    init(&roadB);

    int choice;
    Vehicle v;
    int roadChoice;

    while (1) {
        printf("========== TRAFFIC SYSTEM MENU ==========\n");
        printf("1. Add Vehicle\n");
        printf("2. Process Road A (Green Light)\n");
        printf("3. Process Road B (Green Light)\n");
        printf("4. Display Roads\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {

        case 1:
            printf("Enter Vehicle ID: ");
            scanf("%d", &v.id);
            printf("Enter Vehicle Type: ");
            scanf("%s", v.type);

            printf("Enter Road (1 = A, 2 = B): ");
            scanf("%d", &roadChoice);

            if (roadChoice == 1)
                addVehicle(&roadA, v);
            else if (roadChoice == 2)
                addVehicle(&roadB, v);
            else
                printf("Invalid road selection\n");

            printf("\n");
            break;

        case 2:
            process(&roadA, "Road A");
            printf("\n");
            break;

        case 3:
            process(&roadB, "Road B");
            printf("\n");
            break;

        case 4:
            display(&roadA, "Road A");
            display(&roadB, "Road B");
            printf("\n");
            break;

        case 5:
            printf("Exiting system...\n");
            return 0;

        default:
            printf("Invalid choice!\n");
        }
    }
}