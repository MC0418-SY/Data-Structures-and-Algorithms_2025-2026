#include <stdio.h>

#define MAX 8

typedef unsigned char WORD_SET;
typedef int BV_SET[MAX];

void wordToBitVector(WORD_SET word, BV_SET bv) {
    int i;
    for (i = 0; i < MAX; i++) {
        bv[i] = (word >> (MAX - 1 - i)) & 1;
    }
}

WORD_SET bitVectorToWord(BV_SET bv) {
    WORD_SET word = 0;
    int i;
    for (i = 0; i < MAX; i++) {
        if (bv[i]) {
            word |= (1 << (MAX - 1 - i));
        }
    }
    return word;
}

void displayWord(WORD_SET word) {
    int i;
    for (i = MAX - 1; i >= 0; i--) {
        printf("%d", (word >> i) & 1);
    }
    printf("\n");
}

void displayBitVector(BV_SET bv) {
    int i;
    printf("[");
    for (i = 0; i < MAX; i++) {
        printf("%d", bv[i]);
        if (i < MAX - 1) printf(", ");
    }
    printf("]\n");
}

int main() {
    WORD_SET word;
    BV_SET bv;


    word = 181; 

    printf("Computer Word to Bit Vector \n");
    printf("Word (binary) : "); displayWord(word);
    printf("Word (decimal): %d\n", word);

    wordToBitVector(word, bv);
    printf("Bit Vector    : "); displayBitVector(bv);


    BV_SET bv2 = {1, 0, 1, 1, 0, 1, 0, 1}; 

    printf("\n Bit Vector to Computer Word \n");
    printf("Bit Vector    : "); displayBitVector(bv2);

    WORD_SET word2 = bitVectorToWord(bv2);
    printf("Word (binary) : "); displayWord(word2);
    printf("Word (decimal): %d\n", word2);




    return 0;
}
