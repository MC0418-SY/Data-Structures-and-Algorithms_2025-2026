# [E1] - Mary Rose's Gym - LIST by Janie Lane Sabado

## Background
 

 Thinking about her health journey, Ms. Mary Rose has decided to open up a new gym. It is very famous, especially among gym instructors that Ms. Mary Rose is having trouble with many instructors wanting to teach in her gym. So she has asked Ms. Janie if she could create a Gym Sched AI Assistant that would help in scheduling the gym classes while Ms. Mary Rose focuses on the making the perfect gym environment. Ms. Janie was more than willing to help and so she decided to code this Gym Sched AI Assistant not just because Ms. Mary Rose is her friend but also because Ms. Mary Rose offered her a free membership plan.

 

HOWEVER! Ms. Janie was suddenly whisked away to a surprise holiday getaway with her boyfriend! And so she had to leave immediately, the program left unfinished as Ms. Janie ponders if her boyfriend will propose on this trip. It is now up to you to help, finish the program not just to help Ms. Mary Rose in her gym but also to help relieve Ms. Janie as she feels bad for leaving the program unfinished.

 

## Objectives
 

- Create the **insertClass** function which will insert a new gymClass into the schedule based on the following rules:
    - **Day rule:** The gymClass day must be a weekday, not a weekend
the helper function getDay is used for this condition
    - **Capacity constraint:** Each day can hold a maximum of 6 classes.
    - **Duplicate rule:** A class with the same name cannot be inserted on the same day.
    - **Duration rule:** A class cannot exceed 1 hour in duration.
    - **Instructor rule:** The instructor field must not be empty.
    - **Minimum size rule:** The class must meet the minimum size requirement.
 

## Function Definitions
 

- Accept the parameters gymSchedule *G, gymClass
 

    - The function **insertClass** will do the following:
        1. Accept the parameters gymSchedule *G, gymClass newGC, and String Day.
        2. If the day is not a weekday, print:<br>
           &emsp; `"Error: Invalid day.\n"` <br>and terminate the function.
        3. If the specified day already has 6 classes, print: <br>
&emsp;`"Error: Max classes reached for the day.\n"` <br> and terminate the function.
        4. If the instructor field is empty, print:<br>
&emsp;`"Error: Instructor cannot be empty.\n"`<br> and terminate the function.
        5. If the minimum size is less than MIN, print:<br>
&emsp;`"Error: Minimum size not enough.\n"`<br> and terminate the function.
        6. If the duration is more than 1 hour, print:<br>
&emsp;`"Error: Duration exceeds 1 hour.\n"`<br> and terminate the function.
        7. If a class with the same name already exists on that day, print:<br>
&emsp;`"Error: Duplicate class name on %s.\n"`<br> and terminate the function.
        8. If all conditions are satisfied, insert the new class into the day’s linked list at the end of the list.
        9. After successful insertion, increment the day’s count and the schedule’s total count, and print:
 

## Note:
The getDay function will return -1 if the day provided is not a weekday

---

### Sample Output 1
```
Enter your choice: 1

Inserting new class Core on Saturday:
Error: Invalid day.
```
### Sample Output 2
```
Enter your choice: 2

Inserting new class in gymsched J (full) :
Error: Max classes reached for the day.
```
### Sample Output 3
```
Enter your choice: 3

Inserting new class without an instructor :
Error: Instructor cannot be empty.
```