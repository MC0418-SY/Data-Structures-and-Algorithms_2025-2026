#include<stdio.h>
#include "header.h"


int main(){
    EarringsBox George;
    populateDummyEarrings(&George);
    printf("\n\nBefore Organizing\n\n");
    displayEarrings(George);

    organizeEarringsBox(&George);
    printf("\nAfter Organizing\n\n");
    displayEarrings(George);

}
