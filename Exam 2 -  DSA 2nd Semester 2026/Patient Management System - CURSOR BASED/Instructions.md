# [E2] Patient Management System - CURSOR BASED by Edrian Guanzon
## Background
This application simulates a hospital patient management system. It manages patient records across two departments—Cardiovascular and Neurology. The system supports adding patients, deleting records, transferring patients between departments, and displaying all department records.

 

## Objective

1. Create **deleteByID** function which will remove a patient record from all department list based on the patient ID. It adjusts the links of neighboring nodes and deallocates the removed node back to the VHeap.
2. **transfer** function will move a patient record from one department to another. The function directly manipulates node links: it detaches the node from the source list and reconnects it into the destination list, updating all pointers accordingly. It operates within the VHeap for memory management. NOTE: No helper functions can be used.
 

## Function Definition:

- **deleteById()**
    - Accept parameters VHeap *VH, List *head, and int id
    - Remove the patient record from a department list
    - Search for the patient based on the patient id
- **transfer()**
    - Accept parameters VHeap *VH, List *from, List *to, int id
    - Transfer the record of patient from List*from to List *to
    - The function will insert the transferred patient to the end of the list
    - Function calls to allocSpace(), deallocSpace(), insertEnd(), and deleteById() are NOT ALLOWED
    - Manipulate the next of the nodes
---
### Sample Output 1
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

### Sample Output 2
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
### Sample Output 3
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