#include <stdio.h>

void displayAvailableProducts(unsigned char products) {
    //write your code here
}

void moveInventory(unsigned char *branchA, unsigned char *branchB) {
    //write your code here
}

void unavailableProducts(unsigned char branchA, unsigned char branchB) {
    //write your code here
}

int main() {
    unsigned char branch_A = 0;
    unsigned char branch_B = 0;

    branch_A |= (1 << 7);
    branch_A |= (1 << 5);
    branch_A |= (1 << 4);
    branch_A |= (1 << 2);
    branch_A |= (1 << 0);

    displayAvailableProducts(branch_A);

    branch_A = 0;
    branch_B = 0;

    branch_A |= (1 << 7);
    branch_A |= (1 << 6);
    branch_A |= (1 << 4);
    branch_A |= (1 << 3);
    branch_A |= (1 << 0);

    branch_B |= (1 << 7);
    branch_B |= (1 << 6);
    branch_B |= (1 << 5);
    branch_B |= (1 << 2);
    branch_B |= (1 << 0);

    moveInventory(&branch_A, &branch_B);
    displayAvailableProducts(branch_A);
    displayAvailableProducts(branch_B);

    branch_A = 0;
    branch_B = 0;

    branch_A |= (1 << 5);
    branch_A |= (1 << 4);
    branch_A |= (1 << 1);

    branch_B |= (1 << 6);
    branch_B |= (1 << 3);
    branch_B |= (1 << 1);

    unavailableProducts(branch_A, branch_B);

    return 0;
}