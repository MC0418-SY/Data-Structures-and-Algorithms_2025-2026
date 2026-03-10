#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include "functions.h"

//typedef struct{
//    char FName[50];
//    char MName;
//    char LName[50];
//} Name;
//
//typedef struct{
//    Name name;
//    int age;
//    int id;
//    char sex;
//} Person, *PersonPtr;
//
//typedef struct{
//    Person peeps[MAX];
//    int count;
//} People, *PeoplePtr;

int main()
{
    printf("Initializing People structure with 5 persons.\n\n");

    People P;
    P = initialize(P);

	display(P);

    printf("Setting up list...\n");
    Person person1 = createPerson(namePerson("Alice", 'S', "Smith"), 28, 101, 'F');
    Person person2 = createPerson(namePerson("Bob", 'J', "Johnson"), 34, 102, 'M');
    Person person3 = createPerson(namePerson("Charlie", 'B', "Brown"), 45, 103, 'M');
    Person person4 = createPerson(namePerson("Diana", 'R', "Prince"), 30, 105, 'F');
    Person person5 = createPerson(namePerson("Ethan", 'H', "Hunt"), 41, 106, 'M');
    Person person6 = createPerson(namePerson("Taylor", 'S', "Swift"), 29, 107, 'F');

	P = insertRear(P, person1);
    P = insertRear(P, person2);
    P = insertRear(P, person3);
    P = insertRear(P, person4);
    P = insertRear(P, person5);
    P = insertRear(P, person6);

    display(P);

    printf("Inserting at position [6]...\n\n");
    Person person7 = createPerson(namePerson("Kyle", 'G', "Hernandez"), 20, 108, 'M');
	P = insertAt(P, person7, 5);
	display(P);

	printf("Sorting insert...\n\n");
	Person person8 = createPerson(namePerson("Keith", 'G', "Alunan"), 22, 104, 'M');
	P = insertSorted(P, person8);
	display(P);
	printf("Successfully inserted Keith Alunan!\n\n");

	printf("Deleting at Position [5]\n\n");
	P = deleteAt(P, 5);
	display(P);

	int loc;
	printf("Locating ID: 109\n");
	loc = locate(P, 109);
	if(loc == -1){
		printf("Person was not found. Are you sure they exist?\n\n");
	} else {
		printf("Person is at Position[%d]\n\n", loc);
	}

	printf("Locating ID: 103\n");
	loc = locate(P, 105);
	if(loc == -1){
		printf("Person was not found. Are you sure they exist?\n\n");
	} else {
		printf("Person is at Index[%d].\n\n", loc);
	}


    return 0;
}
