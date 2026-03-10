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
void initialize(PeoplePtr P);
void insertPos(PeoplePtr P, Person per, int position);
void deletePos(PeoplePtr P, int position);
int locate(PeoplePtr P, int id);
Person retrieve(PeoplePtr P, int position);
void insertSorted(PeoplePtr P, Person per);
void display(PeoplePtr);
void resize(PeoplePtr P);
void makeNULL(PeoplePtr P);

#endif // FUNCTIONS_H_INCLUDED
