# Min Heap Operations by CodeChum Admin

An initial code is already defined in the code editor.

 

Implement the following operations of min heap:

- **heapify()** - creates a min heap
- **delete()** - deletes the chosen element by swapping it with the last element; after swapping, delete that element and heapify() the tree
- **peek()** - returns the minimum element of the min heap without destroying the node
- **removeMin()** - returns the minimum element of the min heap and remove it from the min heap

---

### Sample Output 1
```
Enter operation: 1
Enter element to add: 10

Enter operation: 1
Enter element to add: 20

Enter operation: 1
Enter element to add: 15

Enter operation: 1
Enter element to add: 12

Enter operation: 1
Enter element to add: 40

Enter operation: 1
Enter element to add: 25

Enter operation: 1
Enter element to add: 18

Enter operation: 0

10 12 15 20 40 25 18
```
### Sample Output 2
```

Enter operation: 1
Enter element to add: 10

Enter operation: 1
Enter element to add: 20

Enter operation: 1
Enter element to add: 15

Enter operation: 1
Enter element to add: 12

Enter operation: 1
Enter element to add: 40

Enter operation: 1
Enter element to add: 25

Enter operation: 1
Enter element to add: 18

Enter operation: 3
Enter element to delete: 10

12 18 15 20 40 25

Enter operation: 0

12 18 15 20 40 25
```
### Sample Output 3
```
Enter operation: 1
Enter element to add: 10

Enter operation: 1
Enter element to add: 20

Enter operation: 1
Enter element to add: 15

Enter operation: 1
Enter element to add: 12

Enter operation: 1
Enter element to add: 40

Enter operation: 1
Enter element to add: 25

Enter operation: 1
Enter element to add: 18

Enter operation: 2
Minimum element is: 10

Enter operation: 3
Enter element to delete: 10

12 18 15 20 40 25

Enter operation: 2
Minimum element is: 12

Enter operation: 0

12 18 15 20 40 25
```