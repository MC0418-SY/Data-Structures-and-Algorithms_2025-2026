#include <stdio.h>
#include <stdlib.h>
#include "functions.h"


Name namePerson(char FName[], char MName, char LName[]){
    Name name;
    strcpy(name.FName, FName);
    name.MName = MName;
    strcpy(name.LName, LName);
    return name;
}

Person createPerson(Name name, int age, int id, char sex){
    Person P;
    P.name = name;
    P.age = age;
    P.id = id;
    P.sex = sex;
    return P;
}

People initialize(People P){
    P.count = 0;
    return P;
}

People insertFront(People P, Person per){
    if(P.count < MAX){
        for(int i = P.count; i > 0; --i){
            P.peeps[i] = P.peeps[i-1];
        }
        P.peeps[0] = per;
        P.count++;
    }
    return P;
}


People insertRear(People P, Person per){
    if(P.count < MAX){
        P.peeps[P.count] = per;
        P.count++;
    }
    return P;
}


People insertAt(People P, Person per, int position){
    if(position >= 0 && position <= P.count && P.count < MAX){
        if(position == 0){
            P = insertFront(P, per);
        } else if (position == P.count){
            P = insertRear(P, per);
        } else {
            int i;
            for(i = P.count; i > position; --i){
                P.peeps[i] = P.peeps[i - 1];
            }
            P.peeps[position] = per;
            P.count++;
        }
    }
    return P;
}

People insertSorted(People P, Person per){
    if(P.count < MAX) {
        int i = 0;
        while (i < P.count && P.peeps[i].id < per.id) {
            i++;
        }
        P = insertAt(P, per, i);
    }
    return P;
}


People deleteFront(People P){
    if(P.count > 0){
        for(int i= 0; i < P.count - 1; ++i){
            P.peeps[i] = P.peeps[i + 1];
        }
        P.count--;
    }
    return P;
}


People deleteRear(People P){
    if(P.count > 0){
        P.count--;
    }
    return P;
}


People deleteAt(People P, int position){
    if(position >= 0 && position < P.count){
        if(position == 0){
            P = deleteFront(P);
        } else if (position == P.count - 1){
            P = deleteRear(P);
        } else {
            int i;
            for(i = position; i < P.count - 1; ++i){
                P.peeps[i] = P.peeps[i + 1];
            }
            P.count--;
        }
    }
    return P;
}

int locate(People P, int id){
	int i;
    for(i = 0; i < P.count && P.peeps[i].id != id; ++i){}
    return (i < P.count) ? i : -1;
}


void display(People P){
    if(P.count == 0){
        printf("The list is empty bruh.\n\n");
        return;
    }
    printf("--- People List (Count: %d) ---\n", P.count);
    for(int i = 0; i < P.count; ++i){
         printf("ID: %-d \tName: %s %c. %-10s \tAge: %d \tSex: %c\n", P.peeps[i].id, P.peeps[i].name.FName,
																P.peeps[i].name.MName, P.peeps[i].name.LName,
																P.peeps[i].age, P.peeps[i].sex);
    }
    printf("\n");
}
