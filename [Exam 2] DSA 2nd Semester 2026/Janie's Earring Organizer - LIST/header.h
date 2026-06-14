#ifndef HEADER_H
#define HEADER_H

#define SMASIZE 10
#define AVGSIZE 6
#define BIGSIZE 5

typedef char String[25];

typedef enum {Short,Long} Length;
typedef enum {Small,Big} Size;
typedef enum {Red,Green,Yellow,Blue,Orange,Violet} Pigment;

typedef struct{
    String substance;//Material;
    String type;//Category;
}Hardware;

typedef struct{
    int Bejeweled;
    Pigment Color;
}Decoration;

typedef struct{
    Hardware mat;
    Decoration decor;
    float weight;
    Length earringLength;
    Size earringSize;
}Earring;

typedef struct{
    Earring Set;
    int Pair;
    int Asymmetrical;
}Container;

typedef struct{
    Container topD[SMASIZE];
    int topCnt;
}TopDrawer;

typedef struct{
    Container mtD[AVGSIZE];
    int mtCnt;
}MiddleTopDrawer;

typedef struct{
    Container mbD[AVGSIZE];
    int mbCnt;
}MiddleBottomDrawer;

typedef struct{
    Container botD[BIGSIZE];
    int bCnt;
}BottomDrawer;


typedef struct{
    TopDrawer t; //if stud-small, dangle-small, cuff-small
    MiddleTopDrawer mt; //if stud-big, cuff-big
    BottomDrawer b;//else
    int totalCnt;
}EarringsBox;


void displayEarrings(EarringsBox);
void populateDummyEarrings(EarringsBox *box);


/* Function to implement */
void organizeEarringsBox(EarringsBox *box);

#endif
