# Max Heap Operations by CodeChum Admin

An initial code is already defined in the code editor. Implement the following operations of max heap

- heapify() - creates a Max heap
- delete() - deletes the chosen element by swapping it with the last element; after swapping, delete that element and heapify() the tree
- peek() - returns the maximum element of the max heap without destroying the node
- removeMax() - returns the maximum element of the max heap and remove it from the max heap

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

40 20 25 10 12 15 18
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
Enter element to delete: 40

25 20 18 10 12 15

Enter operation: 0

25 20 18 10 12 15
```
### Sample Output 3
```
Enter operation: 1
Enter element to add: 10

Enter operation: 1
Enter element to add: 20

Enter operation: 1
Enter element to add: 10

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
Enter element to delete: 40

25 18 20 15 12 10 10

Enter operation: 2
Maximum element is: 25

Enter operation: 25

Enter operation: 0

25 18 20 15 12 10 10
```