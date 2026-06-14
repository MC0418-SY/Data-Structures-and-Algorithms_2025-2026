
### **Test Case 1**
```
Enter your choice: 1

Inserting new class Core on Saturday:
Error: Invalid day.
```
### **Test Case 2**
```
Enter your choice: 2

Inserting new class in gymsched J (full) :
Error: Max classes reached for the day.
```
###  **Test Case 3**
```
Enter your choice: 3

Inserting new class without an instructor :
Error: Instructor cannot be empty.
```    
###  **Test Case 4**
```
Enter your choice: 4

Inserting new class that is more than an hour :
Error: Duration exceeds 1 hour.
```
###  **Test Case 5**
```
Enter your choice: 5

Inserting new class that doesn't reach minimum size:
Error: Minimum size not enough.
```
###  **Test Case 6**
```
Enter your choice: 6

Inserting new class Core that is already in Tuesday:
Error: Duplicate class name on Tuesday.
```    
###  **Test Case 7**
```
Enter your choice: 7
Class inserted successfully on Monday.

====================================================================================================================
Day/Slot    | 1                    | 2                    | 3                    | 4                    | 5
====================================================================================================================
Monday      | name: Yoga           | name: Pilates        | name: Zumba          | name: Core
            | instructor: Roble    | instructor: Roca     | instructor: Cunado   | instructor: Menchavez
            | duration: 1 hr       | duration: 1 hr       | duration: 1 hr       | duration: 1 hr
            | size: 15             | size: 18             | size: 20             | size: 11
--------------------------------------------------------------------------------------------------------------------
Tuesday     | name: HIIT           | name: Core           | name: Zumba
            | instructor: Arquiza  | instructor: Rosello  | instructor: Lequigan
            | duration: 1 hr       | duration: 1 hr       | duration: 1 hr
            | size: 15             | size: 12             | size: 18
--------------------------------------------------------------------------------------------------------------------
Wednesday   | name: Boxing
            | instructor: Buena
            | duration: 1 hr
            | size: 20
--------------------------------------------------------------------------------------------------------------------
Thursday    | name: Dance          | name: Calisthenics
            | instructor: Diez     | instructor: Walter
            | duration: 1 hr       | duration: 1 hr
            | size: 12             | size: 14
--------------------------------------------------------------------------------------------------------------------
Friday      | name: Muay Thai      | name: Zumba
            | instructor: Samson   | instructor: Geonzon
            | duration: 1 hr       | duration: 1 hr
            | size: 13             | size: 18
--------------------------------------------------------------------------------------------------------------------
====================================================================================================================
```  
###  **Test Case 8**
```
Enter your choice: 8

Not a valid choice
```    