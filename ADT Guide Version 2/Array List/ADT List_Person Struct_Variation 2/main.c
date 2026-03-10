#include <stdio.h>
#include <stdlib.h>
#include "functions.h"
int main()
{
    People P;
    initialize(&P);

    printf("Setting up list...\n");
    Person person1 = createPerson(namePerson("Alice", 'S', "Smith"), 28, 101, 'F');
    Person person2 = createPerson(namePerson("Bob", 'J', "Johnson"), 34, 102, 'M');
    Person person3 = createPerson(namePerson("Charlie", 'B', "Brown"), 45, 103, 'M');
    Person person4 = createPerson(namePerson("Diana", 'R', "Prince"), 30, 105, 'F');
    Person person5 = createPerson(namePerson("Ethan", 'H', "Hunt"), 41, 106, 'M');
    Person person6 = createPerson(namePerson("Taylor", 'S', "Swift"), 29, 107, 'F');

	insertAt(&P, person1, 0);
	insertAt(&P, person2, 1);
	insertAt(&P, person3, 2);
	insertAt(&P, person4, 3);
	insertAt(&P, person5, 4);
	insertAt(&P, person6, 5);

	display(&P);

	printf("Inserting at position [6]...\n\n");
    Person person7 = createPerson(namePerson("Kyle", 'G', "Hernandez"), 20, 108, 'M');
	insertAt(&P, person7, 6);
	display(&P);

	printf("Sorting insert...\n\n");
	Person person8 = createPerson(namePerson("Keith", 'G', "Alunan"), 22, 104, 'M');
	insertSorted(&P, person8);
	display(&P);

	printf("Deleting at Position [5]\n\n");
	deleteAt(&P, 5);
	display(&P);

	int loc;
	printf("Locating ID: 109\n");
	loc = locate(&P, 109);
	if(loc == -1){
		printf("Person was not found. Are you sure they exist?\n\n");
	} else {
		printf("Person is at Position[%d]\n\n", loc);
	}

	printf("Locating ID: 103\n");
	loc = locate(&P, 105);
	if(loc == -1){
		printf("Person was not found. Are you sure they exist?\n\n");
	} else {
		printf("Person is at Index[%d].\n\n", loc);
	}

	Person per;
	printf("Retrieving Person at Position 3\n");
	per = retrieve(&P, 3);
	displayPerson(per);

    return 0;
}
