---
course-code: CIS 2101
course-description: Data Structures and Algorithms
date created: Tuesday, February 17th 2026, 11:17:42 pm
date modified: Tuesday, February 17th 2026, 11:59:16 pm
aliases:
  - stack-operation
  - insertUnique
tags:
  - CIS-2101
  - assignment
cover: _images/Covers/Cover_DSA.jpeg
banner: https://media.licdn.com/dms/image/v2/C5612AQEz0hpmCQQ9xA/article-cover_image-shrink_600_2000/article-cover_image-shrink_600_2000/0/1645599766887?e=2147483647&v=beta&t=zkzDgA7-o0uyq9xkEfagdHk7INMTQ5iFX8uKigLRjX0
banner_y: 50.5%
---
---

# STACK OPERATION

## insertUnique Function

### Function Header:

	- `void insertUnique(Stack *S, char data);`

### Function Call:

	- `insertUnique(S, data);`

### Function Code:

```
void insertUnique(Stack *S, char data){
	int isUnique = 0;
	Stack *temp = initialize();
	
	while(!isEmpty(S)){
		char value = peek(S);
		
		if(value == data){
			isUnique = 1;
		}
		
		push(temp, value);
		pop(S);
	}
	
	while(!isEmpty(temp)){
	    char value = peek(temp); 
	    push(S, value);
	    pop(temp);
	}
	
	if(isUnique == 0){
		push(S, data);
	} else {
		printf("You are not Unique");
	}

}
```

### Function Definitions

#### Stack Structure

```
#define MAX 10
typedef  struct {
	char items[MAX];
	int top;
} Stack;
```

#### Initialization

```
Stack *initialize(){
	Stack *s = (Stack*)malloc(sizeof(Stack));
	s->top = -1;
	return s;
}
```

#### Push

```
void push(Stack *S, char data){
	S->top++;
	S->items[S->top] = data;
}
```

#### Peek

```
char peek(Stack *S){
	if(!isEmpty(S)){
		return S->items[S->top];
	} else {
		return '\0';
	}
}
```

#### Pop

```
void pop(Stack *S){
	S->top--;
}
```

#### isEmpty

```
bool isEmpty(Stack *S){
	return S->top == - 1;
}
```

#### isFull

```
bool isFull(Stack *S){
	return S->top == MAX - 1;
}
```

