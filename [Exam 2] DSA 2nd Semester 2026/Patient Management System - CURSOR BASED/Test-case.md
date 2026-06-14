## Note
- Some of the original test cases from codechum contained errors. It is up to you to repair those errors as the author of this document cannot be bothered to.
---
### Test Case 1
```
========== PATIENT MANAGEMENT MENU ==========
1. Add Patient
2. Delete Patient
3. Transfer Patient
4. Display All
5. Exit
Choice: 4

Cardiovascular Department:
Empty

Neurology Department:
Empty

========== PATIENT MANAGEMENT MENU ==========
1. Add Patient
2. Delete Patient
3. Transfer Patient
4. Display All
5. Exit
Choice: 5
```
### Test Case 2
```
========== PATIENT MANAGEMENT MENU ==========
1. Add Patient
2. Delete Patient
3. Transfer Patient
4. Display All
5. Exit
Choice: 1
ID: 201
Name: Ana
Age: 40
Diagnosis: Stroke
Department (1-Cardiovascular, 2-Neurology): 2

========== PATIENT MANAGEMENT MENU ==========
1. Add Patient
2. Delete Patient
3. Transfer Patient
4. Display All
5. Exit
Choice: 4

Cardiovascular Department:
Empty

Neurology Department:
ID:201 Name:Ana Age:40 Diagnosis:Stroke

========== PATIENT MANAGEMENT MENU ==========
1. Add Patient
2. Delete Patient
3. Transfer Patient
4. Display All
5. Exit
Choice: 5
```
### Test Case 3
```
========== PATIENT MANAGEMENT MENU ==========
1. Add Patient
2. Delete Patient
3. Transfer Patient
4. Display All
5. Exit
Choice: 1
ID: 101
Name: Juan
Age: 30
Diagnosis: Flu
Department (1-Cardiovascular, 2-Neurology): 1

========== PATIENT MANAGEMENT MENU ==========
1. Add Patient
2. Delete Patient
3. Transfer Patient
4. Display All
5. Exit
Choice: 4

Cardiovascular Department:
ID:101 Name:Juan Age:30 Diagnosis:Flu

Neurology Department:
Empty

========== PATIENT MANAGEMENT MENU ==========
1. Add Patient
2. Delete Patient
3. Transfer Patient
4. Display All
5. Exit
Choice: 5
```
### Test Case 4
```
========== PATIENT MANAGEMENT MENU ==========
1. Add Patient
2. Delete Patient
3. Transfer Patient
4. Display All
5. Exit
Choice: 1
ID: 101
Name: Juan
Age: 20
Diagnosis: Flu
Department (1-Cardiovascular, 2-Neurology): 1

========== PATIENT MANAGEMENT MENU ==========
1. Add Patient
2. Delete Patient
3. Transfer Patient
4. Display All
5. Exit
Choice: 1
ID: 102
Name: Ana
Age: 22
Diagnosis: Cold
Department (1-Cardiovascular, 2-Neurology): 1

========== PATIENT MANAGEMENT MENU ==========
1. Add Patient
2. Delete Patient
3. Transfer Patient
4. Display All
5. Exit
Choice: 1
ID: 103
Name: John
Age: 23
Diagnosis: Fever
Department (1-Cardiovascular, 2-Neurology): 1

========== PATIENT MANAGEMENT MENU ==========
1. Add Patient
2. Delete Patient
3. Transfer Patient
4. Display All
5. Exit
Choice: 4

Cardiovascular Department:
ID:101 Name:Juan Age:20 Diagnosis:Flu
ID:102 Name:Ana Age:22 Diagnosis:Cold
ID:103 Name:John Age:23 Diagnosis:Fever

Neurology Department:
Empty

========== PATIENT MANAGEMENT MENU ==========
1. Add Patient
2. Delete Patient
3. Transfer Patient
4. Display All
5. Exit
Choice: 2
ID: 102
Deleted successfully.

========== PATIENT MANAGEMENT MENU ==========
1. Add Patient
2. Delete Patient
3. Transfer Patient
4. Display All
5. Exit
Choice: 4

Cardiovascular Department:
ID:101 Name:Juan Age:20 Diagnosis:Flu
ID:103 Name:John Age:23 Diagnosis:Fever

Neurology Department:
Empty

========== PATIENT MANAGEMENT MENU ==========
1. Add Patient
2. Delete Patient
3. Transfer Patient
4. Display All
5. Exit
Choice: 5
```
### Test Case 5
```
========== PATIENT MANAGEMENT MENU ==========
1. Add Patient
2. Delete Patient
3. Transfer Patient
4. Display All
5. Exit
Choice: 1
ID: 101
Name: Juan
Age: 20
Diagnosis: Flu
Department (1-Cardiovascular, 2-Neurology): 1

========== PATIENT MANAGEMENT MENU ==========
1. Add Patient
2. Delete Patient
3. Transfer Patient
4. Display All
5. Exit
Choice: 1
ID: 102
Name: Ana
Age: 22
Diagnosis: Cold
Department (1-Cardiovascular, 2-Neurology): 1

========== PATIENT MANAGEMENT MENU ==========
1. Add Patient
2. Delete Patient
3. Transfer Patient
4. Display All
5. Exit
Choice: 1
ID: 103
Name: John
Age: 23
Diagnosis: Fever
Department (1-Cardiovascular, 2-Neurology): 1

========== PATIENT MANAGEMENT MENU ==========
1. Add Patient
2. Delete Patient
3. Transfer Patient
4. Display All
5. Exit
Choice: 4

Cardiovascular Department:
ID:101 Name:Juan Age:20 Diagnosis:Flu
ID:102 Name:Ana Age:22 Diagnosis:Cold
ID:103 Name:John Age:23 Diagnosis:Fever

Neurology Department:
Empty

========== PATIENT MANAGEMENT MENU ==========
1. Add Patient
2. Delete Patient
3. Transfer Patient
4. Display All
5. Exit
Choice: 2
ID: 102
Deleted successfully.

========== PATIENT MANAGEMENT MENU ==========
1. Add Patient
2. Delete Patient
3. Transfer Patient
4. Display All
5. Exit
Choice: 4

Cardiovascular Department:
ID:101 Name:Juan Age:20 Diagnosis:Flu
ID:103 Name:John Age:23 Diagnosis:Fever

Neurology Department:
Empty

========== PATIENT MANAGEMENT MENU ==========
1. Add Patient
2. Delete Patient
3. Transfer Patient
4. Display All
5. Exit
Choice: 5
```
### Test Case 6
```
========== PATIENT MANAGEMENT MENU ==========
1. Add Patient
2. Delete Patient
3. Transfer Patient
4. Display All
5. Exit
Choice: 1
ID: 101
Name: Juan
Age: 40
Diagnosis: Stroke
Department (1-Cardiovascular, 2-Neurology): 2

========== PATIENT MANAGEMENT MENU ==========
1. Add Patient
2. Delete Patient
3. Transfer Patient
4. Display All
5. Exit
Choice: 4

Cardiovascular Department:
Empty

Neurology Department:
ID:101 Name:Juan Age:40 Diagnosis:Stroke

========== PATIENT MANAGEMENT MENU ==========
1. Add Patient
2. Delete Patient
3. Transfer Patient
4. Display All
5. Exit
Choice: 3
ID: 101
Move to (1-CV,2-NE): 1
Transfer successful.

========== PATIENT MANAGEMENT MENU ==========
1. Add Patient
2. Delete Patient
3. Transfer Patient
4. Display All
5. Exit
Choice: 4

Cardiovascular Department:
ID:101 Name:Juan Age:40 Diagnosis:Stroke

Neurology Department:
Empty

========== PATIENT MANAGEMENT MENU ==========
1. Add Patient
2. Delete Patient
3. Transfer Patient
4. Display All
5. Exit
Choice: 5
```
### Test Case 7
```
========== PATIENT MANAGEMENT MENU ==========
1. Add Patient
2. Delete Patient
3. Transfer Patient
4. Display All
5. Exit
Choice: 1
ID: 101
Name: Juan
Age: 30
Diagnosis: Fever
Department (1-Cardiovascular, 2-Neurology): 1

========== PATIENT MANAGEMENT MENU ==========
1. Add Patient
2. Delete Patient
3. Transfer Patient
4. Display All
5. Exit
Choice: 4

Cardiovascular Department:
ID:101 Name:Juan Age:30 Diagnosis:Fever

Neurology Department:
Empty

========== PATIENT MANAGEMENT MENU ==========
1. Add Patient
2. Delete Patient
3. Transfer Patient
4. Display All
5. Exit
Choice: 3
ID: 101
Move to (1-CV,2-NE): 2
Transfer successful.

========== PATIENT MANAGEMENT MENU ==========
1. Add Patient
2. Delete Patient
3. Transfer Patient
4. Display All
5. Exit
Choice: 4

Cardiovascular Department:
Empty

Neurology Department:
ID:101 Name:Juan Age:30 Diagnosis:Fever

========== PATIENT MANAGEMENT MENU ==========
1. Add Patient
2. Delete Patient
3. Transfer Patient
4. Display All
5. Exit
Choice: 5
```
### Test Case 8
```
========== PATIENT MANAGEMENT MENU ==========
1. Add Patient
2. Delete Patient
3. Transfer Patient
4. Display All
5. Exit
Choice: 1
ID: 101
Name: Juan
Age: 40
Diagnosis: Fever
Department (1-Cardiovascular, 2-Neurology): 1

========== PATIENT MANAGEMENT MENU ==========
1. Add Patient
2. Delete Patient
3. Transfer Patient
4. Display All
5. Exit
Choice: 3
ID: 999
Move to (1-CV,2-NE): 2
Patient not found.

========== PATIENT MANAGEMENT MENU ==========
1. Add Patient
2. Delete Patient
3. Transfer Patient
4. Display All
5. Exit
Choice: 4

Cardiovascular Department:
ID:101 Name:Juan Age:40 Diagnosis:Fever

Neurology Department:
Empty

========== PATIENT MANAGEMENT MENU ==========
1. Add Patient
2. Delete Patient
3. Transfer Patient
4. Display All
5. Exit
Choice: 5
```
### Test Case 9
```
========== PATIENT MANAGEMENT MENU ==========
1. Add Patient
2. Delete Patient
3. Transfer Patient
4. Display All
5. Exit
Choice: 1
ID: 101
Name: Juan
Age: 55
Diagnosis: Flu
Department (1-Cardiovascular, 2-Neurology): 1

========== PATIENT MANAGEMENT MENU ==========
1. Add Patient
2. Delete Patient
3. Transfer Patient
4. Display All
5. Exit
Choice: 4

Cardiovascular Department:
ID:101 Name:Juan Age:55 Diagnosis:Flu

Neurology Department:
Empty

========== PATIENT MANAGEMENT MENU ==========
1. Add Patient
2. Delete Patient
3. Transfer Patient
4. Display All
5. Exit
Choice: 3
ID: 101
Move to (1-CV,2-NE): 1
Patient not found.

========== PATIENT MANAGEMENT MENU ==========
1. Add Patient
2. Delete Patient
3. Transfer Patient
4. Display All
5. Exit
Choice: 4

Cardiovascular Department:
ID:101 Name:Juan Age:55 Diagnosis:Flu

Neurology Department:
Empty

========== PATIENT MANAGEMENT MENU ==========
1. Add Patient
2. Delete Patient
3. Transfer Patient
4. Display All
5. Exit
Choice: 5
```
### Test Case 10
```
========== PATIENT MANAGEMENT MENU ==========
1. Add Patient
2. Delete Patient
3. Transfer Patient
4. Display All
5. Exit
Choice: 1
ID: 101
Name: Juan
Age: 20
Diagnosis: Flu
Department (1-Cardiovascular, 2-Neurology): 1

========== PATIENT MANAGEMENT MENU ==========
1. Add Patient
2. Delete Patient
3. Transfer Patient
4. Display All
5. Exit
Choice: 4

Cardiovascular Department:
ID:101 Name:Juan Age:20 Diagnosis:Flu

Neurology Department:
Empty

========== PATIENT MANAGEMENT MENU ==========
1. Add Patient
2. Delete Patient
3. Transfer Patient
4. Display All
5. Exit
Choice: 3
ID: 101
Move to (1-CV,2-NE): 2
Transfer successful.

========== PATIENT MANAGEMENT MENU ==========
1. Add Patient
2. Delete Patient
3. Transfer Patient
4. Display All
5. Exit
Choice: 4

Cardiovascular Department:
Empty

Neurology Department:
ID:101 Name:Juan Age:20 Diagnosis:Flu

========== PATIENT MANAGEMENT MENU ==========
1. Add Patient
2. Delete Patient
3. Transfer Patient
4. Display All
5. Exit
Choice: 3
ID: 101
Move to (1-CV,2-NE): 1
Transfer successful.

========== PATIENT MANAGEMENT MENU ==========
1. Add Patient
2. Delete Patient
3. Transfer Patient
4. Display All
5. Exit
Choice: 4

Cardiovascular Department:
ID:101 Name:Juan Age:20 Diagnosis:Flu

Neurology Department:
Empty

========== PATIENT MANAGEMENT MENU ==========
1. Add Patient
2. Delete Patient
3. Transfer Patient
4. Display All
5. Exit
Choice: 5
```
### Test Case 11
```
========== PATIENT MANAGEMENT MENU ==========
1. Add Patient
2. Delete Patient
3. Transfer Patient
4. Display All
5. Exit
Choice: 1
ID: 101
Name: Juan
Age: 20
Diagnosis: Flu
Department (1-Cardiovascular, 2-Neurology): 1

========== PATIENT MANAGEMENT MENU ==========
1. Add Patient
2. Delete Patient
3. Transfer Patient
4. Display All
5. Exit
Choice: 1
ID: 201
Name: Ana
Age: 30
Diagnosis: Stroke
Department (1-Cardiovascular, 2-Neurology): 2

========== PATIENT MANAGEMENT MENU ==========
1. Add Patient
2. Delete Patient
3. Transfer Patient
4. Display All
5. Exit
Choice: 4

Cardiovascular Department:
ID:101 Name:Juan Age:20 Diagnosis:Flu

Neurology Department:
ID:201 Name:Ana Age:30 Diagnosis:Stroke

========== PATIENT MANAGEMENT MENU ==========
1. Add Patient
2. Delete Patient
3. Transfer Patient
4. Display All
5. Exit
Choice: 3
ID: 101
Move to (1-CV,2-NE): 2
Transfer successful.

========== PATIENT MANAGEMENT MENU ==========
1. Add Patient
2. Delete Patient
3. Transfer Patient
4. Display All
5. Exit
Choice: 4

Cardiovascular Department:
Empty

Neurology Department:
ID:201 Name:Ana Age:30 Diagnosis:Stroke
ID:101 Name:Juan Age:20 Diagnosis:Flu

========== PATIENT MANAGEMENT MENU ==========
1. Add Patient
2. Delete Patient
3. Transfer Patient
4. Display All
5. Exit
Choice: 2
ID: 201
Deleted successfully.

========== PATIENT MANAGEMENT MENU ==========
1. Add Patient
2. Delete Patient
3. Transfer Patient
4. Display All
5. Exit
Choice: 4

Cardiovascular Department:
Empty

Neurology Department:
ID:101 Name:Juan Age:20 Diagnosis:Flu

========== PATIENT MANAGEMENT MENU ==========
1. Add Patient
2. Delete Patient
3. Transfer Patient
4. Display All
5. Exit
Choice: 5
```
### Test Case 12
```
========== PATIENT MANAGEMENT MENU ==========
1. Add Patient
2. Delete Patient
3. Transfer Patient
4. Display All
5. Exit
Choice: 1
ID: 101
Name: Juan
Age: 20
Diagnosis: Flu
Department (1-Cardiovascular, 2-Neurology): 1

========== PATIENT MANAGEMENT MENU ==========
1. Add Patient
2. Delete Patient
3. Transfer Patient
4. Display All
5. Exit
Choice: 1
ID: 102
Name: Ana
Age: 21
Diagnosis: Fever
Department (1-Cardiovascular, 2-Neurology): 1

========== PATIENT MANAGEMENT MENU ==========
1. Add Patient
2. Delete Patient
3. Transfer Patient
4. Display All
5. Exit
Choice: 4

Cardiovascular Department:
ID:101 Name:Juan Age:20 Diagnosis:Flu
ID:102 Name:Ana Age:21 Diagnosis:Fever

Neurology Department:
Empty

========== PATIENT MANAGEMENT MENU ==========
1. Add Patient
2. Delete Patient
3. Transfer Patient
4. Display All
5. Exit
Choice: 2
ID: 101
Deleted successfully.

========== PATIENT MANAGEMENT MENU ==========
1. Add Patient
2. Delete Patient
3. Transfer Patient
4. Display All
5. Exit
Choice: 4

Cardiovascular Department:
ID:102 Name:Ana Age:21 Diagnosis:Fever

Neurology Department:
Empty

========== PATIENT MANAGEMENT MENU ==========
1. Add Patient
2. Delete Patient
3. Transfer Patient
4. Display All
5. Exit
Choice: 2
ID: 102
Deleted successfully.

========== PATIENT MANAGEMENT MENU ==========
1. Add Patient
2. Delete Patient
3. Transfer Patient
4. Display All
5. Exit
Choice: 4

Cardiovascular Department:
Empty

Neurology Department:
Empty

========== PATIENT MANAGEMENT MENU ==========
1. Add Patient
2. Delete Patient
3. Transfer Patient
4. Display All
5. Exit
Choice: 5
```
### Test Case 13
```
========== PATIENT MANAGEMENT MENU ==========
1. Add Patient
2. Delete Patient
3. Transfer Patient
4. Display All
5. Exit
Choice: 1
ID: 101
Name: Juan
Age: 45
Diagnosis: Hypertension
Department (1-Cardiovascular, 2-Neurology): 1

========== PATIENT MANAGEMENT MENU ==========
1. Add Patient
2. Delete Patient
3. Transfer Patient
4. Display All
5. Exit
Choice: 1
ID: 103
Name: Pedro
Age: 60
Diagnosis: Arrhythmia
Department (1-Cardiovascular, 2-Neurology): 1

========== PATIENT MANAGEMENT MENU ==========
1. Add Patient
2. Delete Patient
3. Transfer Patient
4. Display All
5. Exit
Choice: 1
ID: 106
Name: Liza
Age: 47
Diagnosis: Angina
Department (1-Cardiovascular, 2-Neurology): 1

========== PATIENT MANAGEMENT MENU ==========
1. Add Patient
2. Delete Patient
3. Transfer Patient
4. Display All
5. Exit
Choice: 1
ID: 108
Name: Carla
Age: 42
Diagnosis: Hypertension
Department (1-Cardiovascular, 2-Neurology): 1

========== PATIENT MANAGEMENT MENU ==========
1. Add Patient
2. Delete Patient
3. Transfer Patient
4. Display All
5. Exit
Choice: 1
ID: 110
Name: Sofia
Age: 36
Diagnosis: Tachycardia
Department (1-Cardiovascular, 2-Neurology): 1

========== PATIENT MANAGEMENT MENU ==========
1. Add Patient
2. Delete Patient
3. Transfer Patient
4. Display All
5. Exit
Choice: 1
ID: 102
Name: MAria
Age: Hypertension
Diagnosis: Department (1-Cardiovascular, 2-Neurology): 1

========== PATIENT MANAGEMENT MENU ==========
1. Add Patient
2. Delete Patient
3. Transfer Patient
4. Display All
5. Exit
Choice: 1
ID: 201
Name: Luis
Age: 44
Diagnosis: Migraine
Department (1-Cardiovascular, 2-Neurology): 2

========== PATIENT MANAGEMENT MENU ==========
1. Add Patient
2. Delete Patient
3. Transfer Patient
4. Display All
5. Exit
Choice: 1
ID: 202
Name: elena
Age: 50
Diagnosis: Epilepsy
Department (1-Cardiovascular, 2-Neurology): 2

========== PATIENT MANAGEMENT MENU ==========
1. Add Patient
2. Delete Patient
3. Transfer Patient
4. Display All
5. Exit
Choice: 1
ID: 203
Name: Mark
Age: 39
Diagnosis: Stroke
Department (1-Cardiovascular, 2-Neurology): 2

========== PATIENT MANAGEMENT MENU ==========
1. Add Patient
2. Delete Patient
3. Transfer Patient
4. Display All
5. Exit
Choice: 1
ID: 204
Name: Anna
Age: 46
Diagnosis: Parkinson's
Department (1-Cardiovascular, 2-Neurology): 2

========== PATIENT MANAGEMENT MENU ==========
1. Add Patient
2. Delete Patient
3. Transfer Patient
4. Display All
5. Exit
Choice: 1
ID: 205
Name: John
Age: 60
Diagnosis: Alzheimer's
Department (1-Cardiovascular, 2-Neurology): 2
Memory Full!

========== PATIENT MANAGEMENT MENU ==========
1. Add Patient
2. Delete Patient
3. Transfer Patient
4. Display All
5. Exit
Choice: 4

Cardiovascular Department:
ID:101 Name:Juan Age:45 Diagnosis:Hypertension
ID:103 Name:Pedro Age:60 Diagnosis:Arrhythmia
ID:106 Name:Liza Age:47 Diagnosis:Angina
ID:108 Name:Carla Age:42 Diagnosis:Hypertension
ID:110 Name:Sofia Age:36 Diagnosis:Tachycardia
ID:102 Name:MAria Age:36 Diagnosis:Hypertension

Neurology Department:
ID:201 Name:Luis Age:44 Diagnosis:Migraine
ID:202 Name:elena Age:50 Diagnosis:Epilepsy
ID:203 Name:Mark Age:39 Diagnosis:Stroke
ID:204 Name:Anna Age:46 Diagnosis:Parkinson's

========== PATIENT MANAGEMENT MENU ==========
1. Add Patient
2. Delete Patient
3. Transfer Patient
4. Display All
5. Exit
Choice: 3
ID: 102
Move to (1-CV,2-NE): 2
Transfer successful.

========== PATIENT MANAGEMENT MENU ==========
1. Add Patient
2. Delete Patient
3. Transfer Patient
4. Display All
5. Exit
Choice: 4

Cardiovascular Department:
ID:101 Name:Juan Age:45 Diagnosis:Hypertension
ID:103 Name:Pedro Age:60 Diagnosis:Arrhythmia
ID:106 Name:Liza Age:47 Diagnosis:Angina
ID:108 Name:Carla Age:42 Diagnosis:Hypertension
ID:110 Name:Sofia Age:36 Diagnosis:Tachycardia

Neurology Department:
ID:201 Name:Luis Age:44 Diagnosis:Migraine
ID:202 Name:elena Age:50 Diagnosis:Epilepsy
ID:203 Name:Mark Age:39 Diagnosis:Stroke
ID:204 Name:Anna Age:46 Diagnosis:Parkinson's
ID:102 Name:MAria Age:36 Diagnosis:Hypertension

========== PATIENT MANAGEMENT MENU ==========
1. Add Patient
2. Delete Patient
3. Transfer Patient
4. Display All
5. Exit
Choice: 2
ID: 204
Deleted successfully.

========== PATIENT MANAGEMENT MENU ==========
1. Add Patient
2. Delete Patient
3. Transfer Patient
4. Display All
5. Exit
Choice: 4

Cardiovascular Department:
ID:101 Name:Juan Age:45 Diagnosis:Hypertension
ID:103 Name:Pedro Age:60 Diagnosis:Arrhythmia
ID:106 Name:Liza Age:47 Diagnosis:Angina
ID:108 Name:Carla Age:42 Diagnosis:Hypertension
ID:110 Name:Sofia Age:36 Diagnosis:Tachycardia

Neurology Department:
ID:201 Name:Luis Age:44 Diagnosis:Migraine
ID:202 Name:elena Age:50 Diagnosis:Epilepsy
ID:203 Name:Mark Age:39 Diagnosis:Stroke
ID:102 Name:MAria Age:36 Diagnosis:Hypertension

========== PATIENT MANAGEMENT MENU ==========
1. Add Patient
2. Delete Patient
3. Transfer Patient
4. Display All
5. Exit
Choice: 1
ID: 104
Name: Ana
Age: 38
Diagnosis: Angina
Department (1-Cardiovascular, 2-Neurology): 1

========== PATIENT MANAGEMENT MENU ==========
1. Add Patient
2. Delete Patient
3. Transfer Patient
4. Display All
5. Exit
Choice: 4

Cardiovascular Department:
ID:101 Name:Juan Age:45 Diagnosis:Hypertension
ID:103 Name:Pedro Age:60 Diagnosis:Arrhythmia
ID:106 Name:Liza Age:47 Diagnosis:Angina
ID:108 Name:Carla Age:42 Diagnosis:Hypertension
ID:110 Name:Sofia Age:36 Diagnosis:Tachycardia
ID:104 Name:Ana Age:38 Diagnosis:Angina

Neurology Department:
ID:201 Name:Luis Age:44 Diagnosis:Migraine
ID:202 Name:elena Age:50 Diagnosis:Epilepsy
ID:203 Name:Mark Age:39 Diagnosis:Stroke
ID:102 Name:MAria Age:36 Diagnosis:Hypertension

========== PATIENT MANAGEMENT MENU ==========
1. Add Patient
2. Delete Patient
3. Transfer Patient
4. Display All
5. Exit
Choice: 3
ID: 201
Move to (1-CV,2-NE): 1
Transfer successful.

========== PATIENT MANAGEMENT MENU ==========
1. Add Patient
2. Delete Patient
3. Transfer Patient
4. Display All
5. Exit
Choice: 4

Cardiovascular Department:
ID:101 Name:Juan Age:45 Diagnosis:Hypertension
ID:103 Name:Pedro Age:60 Diagnosis:Arrhythmia
ID:106 Name:Liza Age:47 Diagnosis:Angina
ID:108 Name:Carla Age:42 Diagnosis:Hypertension
ID:110 Name:Sofia Age:36 Diagnosis:Tachycardia
ID:104 Name:Ana Age:38 Diagnosis:Angina
ID:201 Name:Luis Age:44 Diagnosis:Migraine

Neurology Department:
ID:202 Name:elena Age:50 Diagnosis:Epilepsy
ID:203 Name:Mark Age:39 Diagnosis:Stroke
ID:102 Name:MAria Age:36 Diagnosis:Hypertension

========== PATIENT MANAGEMENT MENU ==========
1. Add Patient
2. Delete Patient
3. Transfer Patient
4. Display All
5. Exit
Choice: 5
```



