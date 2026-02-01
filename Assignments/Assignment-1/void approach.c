#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
	char LName[16];
	char FName[24];
	char Mi;
}Nametype;

typedef struct {
	Nametype name;
	unsigned int ID;
	char course[8];
	int YrLvl;
}Studtype, *studPtr;

typedef struct{
	//Studtype StudArray[size];
	int count;
}StudList, *listPtr;


void deleteSpecificCourseInPlace(Studtype arr[], int *p, char w[]);

int main()
{
    Studtype studList[50] = {
    {{"Doe", "John", 'B'}, 1,  "BSCS", 1},
    {{"Smith", "Anna", 'C'}, 2, "BSIT", 2},
    {{"Brown", "Mike", 'D'}, 3, "BSCS", 3},
    {{"Lee", "Sarah", 'A'}, 4, "BSIS", 4},
    {{"Garcia", "Juan", 'M'}, 5, "BSCS", 1},
    {{"Reyes", "Maria", 'L'}, 6, "BSIT", 2},
    {{"Cruz", "Paolo", 'R'}, 7, "BSCS", 2},
    {{"Santos", "Liza", 'K'}, 8, "BSIS", 4},
    {{"Lim", "Kevin", 'T'}, 9, "BSCS", 1},
    {{"Tan", "Elaine", 'G'}, 10,"BSIT", 2}
    };
    
    int p = 10;
    char w[8] = "BSCS";
    
    deleteSpecificCourseInPlace(studList, &p, w);
    
    for (int i = 0; i < p; ++i) {  // loop only up to new size
        printf("Full Name: %s %c. %s\n", studList[i].name.FName, studList[i].name.Mi, studList[i].name.LName);
        printf("ID: %u\n", studList[i].ID);
        printf("Course: %s\n", studList[i].course);
        printf("Year Level: %d\n\n", studList[i].YrLvl);
    }

	

}




void deleteSpecificCourseInPlace(Studtype arr[], int *p, char w[]) {
    int j = 0; 
    for (int i = 0; i < *p; ++i) {
        if (strcmp(arr[i].course, w) != 0) {
            if (i != j) {
                arr[j] = arr[i];
            }
            j++;
        }
    }
    *p = j; // update size to new count
}



















