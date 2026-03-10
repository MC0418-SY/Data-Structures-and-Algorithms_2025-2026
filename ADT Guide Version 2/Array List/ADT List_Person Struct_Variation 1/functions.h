#ifndef FUNCTIONS_H_INCLUDED
#define FUNCTIONS_H_INCLUDED

#define MAX 10

typedef struct{
    char FName[50];
    char MName;
    char LName[50];
} Name;

typedef struct{
    Name name;
    int age;
    int id;
    char sex;
} Person, *PersonPtr;

typedef struct{
    Person peeps[MAX];
    int count;
} People, *PeoplePtr; // Corrected to be a pointer type for consistency

// Function Prototypes
Name namePerson(char FName[], char MName, char LName[]);
Person createPerson(Name name, int age, int id, char sex);
People initialize(People P);
People insertFront(People P, Person per);
People insertRear(People P, Person per);
People insertAt(People P, Person per, int position);
People insertSorted(People P, Person per);
People deleteFront(People P);
People deleteRear(People P);
People deleteAt(People P, int position);
int locate(People P, int id);
void display(People P);

#endif // FUNCTIONS_H_INCLUDED
