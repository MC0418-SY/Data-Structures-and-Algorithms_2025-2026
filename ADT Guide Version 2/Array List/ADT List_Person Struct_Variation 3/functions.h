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
    PersonPtr peeps;
    int count;
    int max;
} People, *PeoplePtr;

Name namePerson(char FName[], char MName, char LName[]);
Person createPerson(Name name, int age, int id, char sex);
People initialize(People P);
People insertAt(People P, Person per, int position);
People deleteAt(People P, int position);
int locate(People P, int id);
Person retrieve(People P, int position);
People insertSorted(People P, Person per);
void display(People P);
People resize(People P);

#endif // FUNCTIONS_H_INCLUDED
