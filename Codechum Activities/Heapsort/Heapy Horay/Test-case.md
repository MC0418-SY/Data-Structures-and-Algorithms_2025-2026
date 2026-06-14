### Test Case 1
```
Enter the number of tasks: 3
Enter task 1 name: Laba
Enter duration for task 1 (in minutes): 20
Enter task 2 name: Ligo
Enter duration for task 2 (in minutes): 5
Enter task 3 name: Kaon
Enter duration for task 3 (in minutes): 8

Priority Queue after insertions:
Task: Ligo, Duration: 5
Task: Laba, Duration: 20
Task: Kaon, Duration: 8

Extracting tasks in order of priority:
Extracted Task: Ligo, Duration: 5

Priority Queue after removal:
Task: Kaon, Duration: 8
Task: Laba, Duration: 20
Extracted Task: Kaon, Duration: 8

Priority Queue after removal:
Task: Laba, Duration: 20
Extracted Task: Laba, Duration: 20

Priority Queue after removal:
Priority Queue is empty!

Priority Queue is now empty.
```
### Test Case 2
```
Enter the number of tasks: 5
Enter task 1 name: Shopping
Enter duration for task 1 (in minutes): 30
Enter task 2 name: Study
Enter duration for task 2 (in minutes): 45
Enter task 3 name: Play
Enter duration for task 3 (in minutes): 10
Enter task 4 name: Talk
Enter duration for task 4 (in minutes): 14
Enter task 5 name: Relax
Enter duration for task 5 (in minutes): 5

Priority Queue after insertions:
Task: Relax, Duration: 5
Task: Play, Duration: 10
Task: Shopping, Duration: 30
Task: Study, Duration: 45
Task: Talk, Duration: 14

Extracting tasks in order of priority:
Extracted Task: Relax, Duration: 5

Priority Queue after removal:
Task: Play, Duration: 10
Task: Talk, Duration: 14
Task: Shopping, Duration: 30
Task: Study, Duration: 45
Extracted Task: Play, Duration: 10

Priority Queue after removal:
Task: Talk, Duration: 14
Task: Study, Duration: 45
Task: Shopping, Duration: 30
Extracted Task: Talk, Duration: 14

Priority Queue after removal:
Task: Shopping, Duration: 30
Task: Study, Duration: 45
Extracted Task: Shopping, Duration: 30

Priority Queue after removal:
Task: Study, Duration: 45
Extracted Task: Study, Duration: 45

Priority Queue after removal:
Priority Queue is empty!

Priority Queue is now empty.
```