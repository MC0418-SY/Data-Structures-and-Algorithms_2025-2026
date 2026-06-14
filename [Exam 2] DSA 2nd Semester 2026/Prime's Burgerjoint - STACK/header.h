#ifndef HEADER_H
#define HEADER_H

#define SIZE 10
typedef char String[50];

typedef struct{
    String name;
    String type; //Bread, Cheese, Protein, Vegetable, Condiment
}Ingredient;

typedef struct{
    Ingredient Recipe[SIZE];
    int burgTop; //index of the top element
}BurgerStack;

typedef struct{
    Ingredient Ensemble[SIZE];
    int listCnt; //counts the total number of ingredients
}IngredientList; //basic ADT LIST of Ingredients


void initBurgerStack(BurgerStack *B); // equivalent to initialize stack - makes the stack empty
void pushBurger(BurgerStack *B, Ingredient Layer); //equivalent to push - inserts element based on top
void popBurger(BurgerStack *B);//equivalent to pop - deletes element based on top
Ingredient burgTop(BurgerStack B);//equivalent to top - returns the element based on top
void display(BurgerStack B,String burg);
int isBurgerEmpty(BurgerStack B); //equivalent to isEmpty - is the stack empty
int isBurgerFull(BurgerStack B);  //equivalent to isFull - is the stack empty


/* Function to implement */
void makeBurger(BurgerStack *B,IngredientList List);

#endif