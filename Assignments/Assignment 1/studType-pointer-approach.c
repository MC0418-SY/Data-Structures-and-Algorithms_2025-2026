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

Studtype *deleteSpecificCourse(Studtype arr[], int *p, char w[]);

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
    
    char w[8] = "BSIT";
    int p = 10;
    
    Studtype *removedCourseArray = deleteSpecificCourse(studList, &p, w);
    
    for (int i = 0; i < p; ++i){
		printf("Full Name: %s %c. %s\n",removedCourseArray[i].name.FName, removedCourseArray[i].name.Mi, removedCourseArray[i].name.LName);
		printf("ID: %u\n", removedCourseArray[i].ID);
		printf("Course: %s\n", removedCourseArray[i].course);
		printf("Year Level: %d\n\n", removedCourseArray[i].YrLvl);
	}
	
	free(removedCourseArray);
}

Studtype *deleteSpecificCourse(Studtype arr[], int *p, char w[]){
    int courseToDelete = 0;
    
    Studtype *newArr = malloc(sizeof(Studtype) * (*p));
    
    if(newArr == NULL) return NULL;
    
    for(int i = 0; i < *p; ++i){
        if(strcmp(arr[i].course, w) != 0){
            newArr[courseToDelete++] = arr[i]; 
        }
    }
    
    newArr = (Studtype*)realloc(newArr, sizeof(Studtype)*courseToDelete);
    
    if (newArr == NULL) {
        *p = 0;
    return NULL;
    }
    *p = courseToDelete;
    
    return newArr;

}
