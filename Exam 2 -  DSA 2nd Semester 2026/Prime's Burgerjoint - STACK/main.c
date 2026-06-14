#include<stdio.h>
#include<string.h>
#include "header.h"


int main(){

	BurgerStack burg;
	String nameBurg;
	int choice,temp;
    initBurgerStack(&burg);

    Ingredient Bun = {"Sesame Bun","Bread"};
    Ingredient SolidCheese = {"Solid Cheese","Cheese"};
    Ingredient MeltedCheese = {"Melted Cheese","Cheese"};
    Ingredient ChickenPatty = {"Chicken Patty","Protein"};
    Ingredient BeefPatty = {"Beef Patty","Protein"};
    Ingredient PorkPatty = {"Pork Patty","Protein"};
    Ingredient Lettuce = {"Lettuce","Vegetable"};
    Ingredient Tomato = {"Tomato","Vegetable"};
    Ingredient Onion = {"Onion","Vegetable"};
    Ingredient Pickles = {"Pickles","Vegetable"};
    Ingredient Ketchup = {"Ketchup","Condiment"};
    Ingredient Mayo = {"Mayo","Condiment"};
    Ingredient Mustard = {"Mustard","Condiment"};

    IngredientList emptyList;
	IngredientList normBurg={{Bun,Mayo,Lettuce,BeefPatty,MeltedCheese,Tomato,Onion,Bun},8};
	IngredientList moistBurg={{Bun,Mayo,BeefPatty,MeltedCheese,Mayo,Bun},6};
	IngredientList chickenBurg={{Bun,Mayo,ChickenPatty,MeltedCheese,Onion,Bun},6};
	IngredientList porkBurg={{Bun,Mayo,PorkPatty,MeltedCheese,Tomato,Bun},6};
	IngredientList juicyBurg={{Bun,Ketchup,BeefPatty,Tomato,Pickles,SolidCheese,Lettuce,Bun},7};
	IngredientList wrongBurg={{Bun,Mayo,Lettuce,MeltedCheese,Onion,Tomato,Bun},7};
	IngredientList vegBurg={{Bun,Mustard,Lettuce,SolidCheese,Onion,Tomato,Bun},7};

    printf("Enter your choice: ");
    scanf("%d",&choice);

    switch(choice){

		case 1:
			emptyList.listCnt=0;
		    makeBurger(&burg,emptyList);
            printf("\n\nFunction makeBurger terminated");

		break;

		case 2://error because pork
		    makeBurger(&burg,porkBurg);
            printf("\n\nFunction makeBurger terminated");

		break;
		case 3://melted cheese should be on top
		    makeBurger(&burg,wrongBurg);
		    strcpy(nameBurg,"Veg Burger with no Cheese");
		    display(burg,nameBurg);

		break;
		case 4://multiple condiments are ok
		    makeBurger(&burg,moistBurg);
		    strcpy(nameBurg,"Double Mayo Burger");
		    display(burg,nameBurg);

		break;
		case 5://chicken burger is ok
		    makeBurger(&burg,chickenBurg);
		    strcpy(nameBurg,"Bakokger");
		    display(burg,nameBurg);

		break;
		case 6://tomatoes and pickles
		    makeBurger(&burg,juicyBurg);
		    strcpy(nameBurg,"Sour & no Sweet Burger");
		    display(burg,nameBurg);

		break;
		case 7://if all veggies then oke
		    makeBurger(&burg,vegBurg);
		    strcpy(nameBurg,"Veggie Burger");
		    display(burg,nameBurg);

		break;
		case 8://if normal burger then oke
		    makeBurger(&burg,normBurg);
		    strcpy(nameBurg,"Plain Burger");
		    display(burg,nameBurg);

		break;

    	default:
    		printf("\nNot a valid choice");
			break;






	}

    return 0;

}