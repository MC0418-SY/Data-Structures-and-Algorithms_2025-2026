#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "functions.h"

Name namePerson(char FName[], char MName, char LName[]) {
    Name name;
    strcpy(name.FName, FName);
    name.MName = MName;
    strcpy(name.LName, LName);
    return name;
}

Person createPerson(Name name, int age, int id, char sex) {
    Person P;
    P.name = name;
    P.age = age;
    P.id = id;
    P.sex = sex;
    return P;
}

People initialize(People P) {
    P.peeps = (PersonPtr)malloc(sizeof(Person) * MAX);
    P.max = MAX;
    P.count = 0;
    return P;
}

People resize(People P) {
    PersonPtr temp = realloc(P.peeps, sizeof(Person) * (P.max * 2));
    if (temp != NULL) {
        P.peeps = temp;
        P.max *= 2;
    } else {
        printf("Memory reallocation failed.\n");
    }
    return P;
}

People insertAt(People P, Person per, int position) {
    if (position >= 0 && position <= P.count) {
        if (P.count == P.max) {
            P = resize(P);
        }
        for (int i = P.count; i > position; --i) {
            P.peeps[i] = P.peeps[i - 1];
        }
        P.peeps[position] = per;
        P.count++;
    }
    return P;
}

People deleteAt(People P, int position) {
    if (position >= 0 && position < P.count) {
        for (int i = position; i < P.count - 1; ++i) {
            P.peeps[i] = P.peeps[i + 1];
        }
        P.count--;
    }
    return P;
}

int locate(People P, int id) {
    int i;
    for (i = 0; i < P.count && P.peeps[i].id != id; ++i) {}
    return (i < P.count) ? i : -1;
}

People insertSorted(People P, Person per) {
    if (P.count == P.max) {
        P = resize(P);
    }
    int i;
    for (i = P.count; i > 0 && P.peeps[i - 1].id > per.id; --i) {
        P.peeps[i] = P.peeps[i - 1];
    }
    P.peeps[i] = per;
    P.count++;
    return P;
}

void display(People P) {
    if (P.count == 0) {
        printf("The list is empty.\n");
        return;
    }
    printf("--- People List (Count: %d) ---\n", P.count);
    for (int i = 0; i < P.count; ++i) {
        printf("ID: %-d \tName: %s %c. %-10s \tAge: %d \tSex: %c\n",
            P.peeps[i].id,
            P.peeps[i].name.FName,
            P.peeps[i].name.MName,
            P.peeps[i].name.LName,
            P.peeps[i].age,
            P.peeps[i].sex);
    }
    printf("\n");
}

