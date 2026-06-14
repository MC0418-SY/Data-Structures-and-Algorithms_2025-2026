# Heapy Horay by Gran Sabandal

## Objective
The goal of this task is to implement the heapify function in a **non-recursive** way to maintain the **min-heap** property. You are asked to modify the heap structure so that after each insertion or deletion, the heap property is preserved.

## Problem Breakdown
- **Heap Property:** In a min-heap, for each node i, the value of the node is less than or equal to the values of its children. This property must be maintained during all heap operations.
- The `heapify` function ensures that the subtree rooted at a given node satisfies the min-heap property. If the subtree does not satisfy the property, `heapify` adjusts the tree by swapping nodes until the property is restored.

## Steps to Solve the Problem
- **Understand the Heap Structure:**
    - The heap is a complete binary tree. This means that each level of the tree is fully filled except possibly the last level, which is filled from left to right.
    - For a node at index i:
        - The left child is at index 2*i + 1.
        - The right child is at index 2*i + 2.
    - The parent is at index (i - 1) / 2 (integer division).
- **Non-Recursive Heapify:**
    - The heapify function should restore the min-heap property for a given node i by comparing it with its children and performing swaps if necessary.
    - Instead of using recursion, you will implement the heapify function using a while loop to ensure that the heap property is restored in an iterative manner.
- **Algorithm:**
    - Step 1: Start with the given node i.
    - Step 2: Compare the node with its left and right children.
    - Step 3: Identify the smallest of the three nodes: the node itself, the left child, or the right child.
    - Step 4: If the smallest node is not the current node i, swap the nodes and move the index i to the index of the smallest node.
    - Step 5: Repeat this process until the node at index i satisfies the heap property or the end of the tree is reached.

## Function Signature:
&emsp;`void heapify(MinHeap* pq, int i);`

- Parameters:
    - pq: A pointer to the heap (min-heap).
    - i: The index of the node to be heapified.


## Step-by-Step Instructions:
1. Start with the root node (or any node you want to heapify).
2. Compare the node with its left and right children.
3. Find the left and right children using the formulas:
    - Left child: 2*i + 1
    - Right child: 2*i + 2
    - Check whether the left and right children exist (i.e., their indices are less than the heap size).
4. Find the smallest value among the current node and its children.
    - If the left child exists and is smaller than the current node, update the smallest value.
    - Similarly, if the right child exists and is smaller than the smallest node, update the smallest value.
5. Swap if necessary:
    - If the smallest node is not the current node, swap them.
    - After swapping, move to the index of the smallest node and repeat the process.
5. Repeat until the heap property is satisfied.
 

 

## NOTE
Recursive implementation will automatically be 3.0.

---

### Sample Output 1
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
### Sample Output 2
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