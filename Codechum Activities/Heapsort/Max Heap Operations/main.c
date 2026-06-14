#include <stdio.h>

int size = 0;

// Hey there, implement the max heap operations here...

void insert(int array[], int newNum) {
    if (size == 0) {
        array[0] = newNum;
        size += 1;
    } else {
        array[size] = newNum;
        size += 1;

        for (int ctr = size / 2 - 1; ctr >= 0; ctr--) {
            heapify(array, size, ctr);
        }
    }
}

void printArray(int array[], int size) {
    for (int ctr = 0; ctr < size; ++ctr) {
        printf("%d ", array[ctr]);
    }
    printf("\n");
}

int main (void) {
    int array[10];
    int operation,input, elementPeeked;

    do {
        printf("Enter operation: ");
        scanf("%d", &operation);

        switch (operation) {
            case 1:
                printf("Enter element to add: ");
                scanf("%d", &input);
                insert(array, input);
                break;
            case 2:
                elementPeeked = peek(array);
                if (elementPeeked != -1) {
                    printf("Maximum element is: %d\n", elementPeeked);
                }else {
                    printf("\nHeap is empty\n");
                }
                break;
            case 3:
                printf("Enter element to delete: ");
                scanf("%d", &input);
                delete(array, input);
                printf("\n");
                printArray(array, size);
                break;
            case 4:
                printf("Maximum element removed is: %d\n\n", removeMax(array));
                printArray(array, size);
                break;
            default:
                break;
        }
        printf("\n");
    }while(operation != 0);

    printArray(array, size);

    return 0;
}