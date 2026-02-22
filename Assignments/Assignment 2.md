---
course-code: CIS 2101
course-description: Data Structures and Algorithms
date created: Monday, February 23rd 2026, 12:52:44 am
date modified: Monday, February 23rd 2026, 3:08:50 am
aliases:
tags: CIS-2101
cover: _images/Covers/Cover_DSA.jpeg
banner: https://media.licdn.com/dms/image/v2/C5612AQEz0hpmCQQ9xA/article-cover_image-shrink_600_2000/article-cover_image-shrink_600_2000/0/1645599766887?e=2147483647&v=beta&t=zkzDgA7-o0uyq9xkEfagdHk7INMTQ5iFX8uKigLRjX0
banner_y: 50.5%
---
---

## Structure Definitions

```
#define size 50;
typedef struct{
	char LName[16];
	char FName[24];
	char Mi;
}Nametype;

typedef struct{
	Nametype name;
	unsigned int ID;
	char Course[8];
	int YrLvl;
}Studtype;

typedef struct{
	Studtype StudArray[size];
	int count;
}StudList,*StudListPtr;

typedef struct node{
	Studtype student;
	struct node *next;
}nodetype,*LIST;

typedef struct node{
	Studtype *studentList;
	int count
	int max
}List,*ListPtr;

```

## 1. Initialization of an ADT List

### a. StudListPtr Initialization

```
typedef struct{
	Studtype StudArray[size];
	int count;
}StudList,*StudListPtr;

//Write the code block for the function that initializes a StudListPtr.

void initialize(StudListPtr slp){
		slp->count = 0;
}
```

### b. StudList Initialization

```
typedef struct{
	Studtype StudArray[size];
	int count;
}StudList,*StudListPtr;

//Write the code block for the function that returns and initializes a StudList

StudList initialize(StudList slp){
	slp.count = 0;
	return slp;
}


```

### c. ListPtr Initialization

```
typedef struct node{
	Studtype *studentList;
	int count
	int max
}List,*ListPtr;

// Write the code block for the function that initializes a ListPtr.

void initialize (ListPtr *slp){
	*slp = (ListPtr)malloc(sizeof(List));
	if(*slp != NULL){
		(*slp)->studentList = (Studtype*)malloc(sizeof(Studtype) * size);
		(*slp)->max = size;
		(*slp)->count = 0;
	}
}

```

### d. List Initialization

```
typedef struct node{
	Studtype *studentList;
	int count
	int max
} List,*ListPtr;

// Write the code block for the function that returns and initializes a List.

List initialize(List slp){
	slp.studentList = (Studtype*)malloc(sizeof(Studtype)*size);
	slp.count = 0;
	slp.max = size;
	return slp;
}
```

### e. LIST Initialization

```
typedef struct node{
	Studtype student;
	struct node *next;
}nodetype,*LIST;

// Write the code block for the function that initializes a LIST.

void initialize(LIST *slp){
	*slp = NULL;
}

```

## 2. InsertAt(Varation 1 ADT List)

```
typedef struct{
	Studtype StudArray[size];
	int count;
}StudList,*StudListPtr;

typedef struct{
	Nametype name;
	unsigned int ID;
	char Course[8];
	int YrLvl;
}Studtype;

// Given a StudList L, a Studtype S, and a position p, the function will insert S in its position p and return L to the calling function. (variation 1 ADT List

StudList insertAt (StudList L, Studtype S, int position){
	if(position >= 0 && position <= L.count && L.count < size) {
		for (int i = L.count; i > position; --i){
			L.StudArray[i] = L.StudArray[i-1];
		}
		
		L.StudArray[position] = S;
		L.count++;
	}
	return L;
}

```

## 3. InsertAt(Varation 3 ADT List)

```
typedef struct node{
	Studtype *studentList;
	int count;
	int max;
} List,*ListPtr;

// Given a List L, and an id key, the function will delete based on the key and return L to the calling function. (variation 3 ADT List)

List deleteAtKey(List L, int id) {
    int pos;
    if (L.count > 0) {
        for (pos = 0; pos < L.count && L.studentList[pos].ID != id; pos++) {}
        
        if (pos < L.count) {
            for (int i = pos; i < L.count - 1; i++) {
                L.studentList[i] = L.studentList[i + 1];
            }
            L.count--;
        }
    }
    return L; 
}
```

## 4. InsertSorted (Variation 2 ADT List)

```
typedef struct{
	Studtype StudArray[size];
	int count;
}StudList,*StudListPtr;

typedef struct{
	Nametype name;
	unsigned int ID;
	char Course[8];
	int YrLvl;
}Studtype;

typedef struct{
	char LName[16];
	char FName[24];
	char Mi;
}Nametype;

Given a sorted StudListPtr L, and a Studtype S, the function will insert S in its proper position
(variation 2 ADT List)

void insertSorted (StudListPtr L, Studtype S){
	if(L->count < size){
		int i;
		for(i = L->count - 1; i >= 0 &&  L->StudArray[i].ID > S.ID; --i){
			L->StudArray[i+1] = L->StudArray[i];
		}
		
		L->StudArray[i+1] = S; 
		L->count++;
	}
}
```

## 5. deleteByLName (Linked List ADT List)

```
typedef struct node{
	Studtype student;
	struct node *next;
}nodetype,*LIST;

typedef struct{
	Nametype name;
	unsigned int ID;
	char Course[8];
	int YrLvl;
}Studtype;

typedef struct{
	char LName[16];
	char FName[24];
	char Mi;
}Nametype;

Given a LIST L, and a string LName, the function will delete based on the LName. (Linked List
ADT List)

void deleteByLName(LIST L, char LName[]){
    LIST temp, prev = NULL, trav = L;
    
    for(; trav != NULL && strcmp(trav->student.name.LName, LName) != 0; prev = trav, trav = trav->next){}
        
    
    if(trav == NULL) return; // not found
    
    if(prev == NULL) return; // cannot delete head with LIST L
    
    temp = trav;
    prev->next = temp->next;
    free(temp);
}

```

---

## insertUnique (Array Queue V2)

### Variation 2

- Queue is a static array with front, rear, and a sacrificial space.
- Sacrificial space will always be the space before front. [ (front - 1 + MAX) % MAX ]
- Structure:
```
typedef struct{
	int items[MAX];
	int front;
	int rear;
} Queue;
```

### Array Queue V2 Operations

| Operations                            | Definition                                                                                                                                                                       |
| ------------------------------------- | -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| Queue* initialize();                  | Allocate memory for the Queue<br>structure<br>Initialize front to 1 and rear to 0                                                                                                |
| bool isEmpty(Queue* q);               | front == (rear + 1) % MAX                                                                                                                                                        |
| bool isFull(Queue* q);                | front == (rear + 2) % MAX                                                                                                                                                        |
| void enqueue(Queue* q, int<br>value); | Check if the queue is full<br>Increment the rear pointer circularly<br>(rear = (rear + 1) % MAX)<br>Insert the new element at the new rear<br>position                           |
| int dequeue(Queue* q);                | Check if the queue is empty<br>Get the element at the front of the queue<br>Increment the front pointer circularly<br>(front = (front + 1) % MAX)<br>Return the dequeued element |
| int front(Queue* q);                  | Check if the queue is empty<br>Return the element at the current front<br>position                                                                                               |
| void display(Queue* q);               | Check if the queue is empty<br>Loop through the queue from front to<br>rear and print each element                                                                               |

### Assignment

```
/* 
Create a function for an array queue of variation that allows a variable to be inserted uniquely. If it is not unique, then it is not inserted and no changes are made.
*/

void insertUnique(Queue *q, int value){
    if(!isFull(q)){
	    int i, isUnique = 0;
	    for(i = q->front; i != (q->rear + 1) % MAX && q->items[i] != value; i = (i + 1) % MAX){
	        if(q->items[i] == value) return; // not unique, do not insert
	    }
	    
	    
	    enqueue(q, value);
    }
}
```