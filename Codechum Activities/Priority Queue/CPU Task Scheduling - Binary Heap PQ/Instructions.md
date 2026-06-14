# CPU Task Scheduling - Binary Heap P.Q. by Edwin Bartlett

## Introduction
A **priority queue** is a practical data structure in many real-life situations where items need to be processed or retrieved based on their priority rather than their arrival order (like in a standard queue) or the order they were added (like in a stack). One scenario where a priority queue is highly practical is task/process scheduling in operating systems.

 

In a **multitasking operating system**, numerous processes or tasks are often ready to run. The OS must decide which one gets the CPU next.

- **Scenario:** The OS scheduler needs to manage active processes.
- **Priority:** Processes are assigned a priority (e.g., high for interactive tasks, low for background jobs).
- **Priority Queue Use:** The priority queue stores all ready processes. The process with the highest priority is always dequeued first. This ensures critical or time-sensitive tasks get preference.

## Program Specifications
This program defines a PriorityQueue using a Max Heap array, where insertProcess handles the enqueue operation and extractMax simulates the OS scheduler dispatching the task with the highest priority. The output clearly shows how the process with priority 10 gets scheduled ahead of processes with priority 5 and 3, demonstrating the core priority queue logic.

## Function Specifications
- `void initQueue(PriorityQueue *pq)`

    - Initializes the priority queue structure.
    - **Param pq** - Pointer to the PriorityQueue structure.

- `void heapifyDown(PriorityQueue *pq, int index)`

    - Restores the Max Heap property by sifting a node down.
    - Called after removing the root (highest priority element).
    - **param pq** - Pointer to the PriorityQueue.
    - **param index** - Index of the node to start sifting down from.

- `void insertProcess(PriorityQueue *pq, Process newProcess)`

    - Adds a new process to the queue and maintains the Max Heap property.
    - **param pq** - Pointer to the PriorityQueue.
    - **param newProcess** - The Process structure to insert.

- `Process extractMax(PriorityQueue *pq)`

    - Extracts the process with the highest priority (the root of the Max Heap).
    - This simulates the OS scheduler picking the next task.
    - **param pq** - Pointer to the PriorityQueue.
    - returns - The highest priority Process. Returns a dummy process if the queue is empty.
 


 
## Blue's Clues
Read below only if you are having a difficult time.

- `initQueue`

    - Set the queue's size to 0 and capacity to MAX_PROCESSES.

- `heapifyDown`

    - Check the left and right child for which is larger. If the largest is not the current node, swap and continue heapifying down.

- `insertProcess`

    1. Insert the new process at the end of the heap
    2. Restore Max Heap property by sifting up

- `extractMax`

    1. Replace the root with the last element
    2. Restore the Max Heap property by sifting down the new root

---

### Sample Output 1
```
=============== OS SCHEDULER PRIORITY QUEUE MENU ===============
Select a Test Scenario to Run:
1. Enqueue Test (Demonstrates Max Heap build on insertion)
2. Dequeue Test (Demonstrates Max Heap extraction/scheduling)
3. Full Combination Test (Dynamic OS Scheduling Scenario)
==================================================================
Enter your choice (1, 2, or 3): 1

--- Scheduler Queue initialized with capacity 10. ---

--- Test 1: ENQUEUE (Process Arrival) ---
Inserting processes in various priority orders:
-> ENQUEUED: Process ID 10 (Priority: 5)
-> ENQUEUED: Process ID 20 (Priority: 8)
-> ENQUEUED: Process ID 30 (Priority: 3)
-> ENQUEUED: Process ID 40 (Priority: 9)
-> ENQUEUED: Process ID 50 (Priority: 7)

--- Current Ready Queue (Heap Order: Priority, PID) ---
| P40 (Pri:9) | P20 (Pri:8) | P30 (Pri:3) | P10 (Pri:5) | P50 (Pri:7) |
------------------------------------------------------
NOTE: The highest priority process (PID 40, Pri 9) is at the top of the heap (first in the list).

Program finished execution.
```
### Sample Output 2
```
=============== OS SCHEDULER PRIORITY QUEUE MENU ===============
Select a Test Scenario to Run:
1. Enqueue Test (Demonstrates Max Heap build on insertion)
2. Dequeue Test (Demonstrates Max Heap extraction/scheduling)
3. Full Combination Test (Dynamic OS Scheduling Scenario)
==================================================================
Enter your choice (1, 2, or 3): 2

--- Scheduler Queue initialized with capacity 10. ---

--- Test 2: DEQUEUE (Scheduling Dispatch) ---
Pre-loading 5 processes for scheduling...
-> ENQUEUED: Process ID 100 (Priority: 4)
-> ENQUEUED: Process ID 200 (Priority: 1)
-> ENQUEUED: Process ID 300 (Priority: 6)
-> ENQUEUED: Process ID 400 (Priority: 3)
-> ENQUEUED: Process ID 500 (Priority: 5)

Ready Queue before dispatch:

--- Current Ready Queue (Heap Order: Priority, PID) ---
| P300 (Pri:6) | P500 (Pri:5) | P100 (Pri:4) | P200 (Pri:1) | P400 (Pri:3) |
------------------------------------------------------

Dispatching processes in order of priority (Max Heap extraction):
<- DEQUEUED: SCHEDULING Process ID 300 (Priority: 6)

--- Current Ready Queue (Heap Order: Priority, PID) ---
| P500 (Pri:5) | P400 (Pri:3) | P100 (Pri:4) | P200 (Pri:1) |
------------------------------------------------------
<- DEQUEUED: SCHEDULING Process ID 500 (Priority: 5)

--- Current Ready Queue (Heap Order: Priority, PID) ---
| P100 (Pri:4) | P400 (Pri:3) | P200 (Pri:1) |
------------------------------------------------------
<- DEQUEUED: SCHEDULING Process ID 100 (Priority: 4)

--- Current Ready Queue (Heap Order: Priority, PID) ---
| P400 (Pri:3) | P200 (Pri:1) |
------------------------------------------------------
<- DEQUEUED: SCHEDULING Process ID 400 (Priority: 3)

--- Current Ready Queue (Heap Order: Priority, PID) ---
| P200 (Pri:1) |
------------------------------------------------------
<- DEQUEUED: SCHEDULING Process ID 200 (Priority: 1)
Current Ready Queue: [Empty]

Queue is now empty.

Program finished execution.
```
### Sample Output 3
```
=============== OS SCHEDULER PRIORITY QUEUE MENU ===============
Select a Test Scenario to Run:
1. Enqueue Test (Demonstrates Max Heap build on insertion)
2. Dequeue Test (Demonstrates Max Heap extraction/scheduling)
3. Full Combination Test (Dynamic OS Scheduling Scenario)
==================================================================
Enter your choice (1, 2, or 3): 3

--- Scheduler Queue initialized with capacity 10. ---

--- Test 3: COMBINATION (Dynamic OS Scheduling) ---

--- STEP 1: Process Arrival (Enqueuing Tasks) ---
-> ENQUEUED: Process ID 101 (Priority: 9)
-> ENQUEUED: Process ID 205 (Priority: 3)
-> ENQUEUED: Process ID 312 (Priority: 5)
-> ENQUEUED: Process ID 400 (Priority: 2)

--- Current Ready Queue (Heap Order: Priority, PID) ---
| P101 (Pri:9) | P205 (Pri:3) | P312 (Pri:5) | P400 (Pri:2) |
------------------------------------------------------

--- STEP 2: Scheduler Dispatch (Dequeuing Highest Priority) ---
<- DEQUEUED: SCHEDULING Process ID 101 (Priority: 9)

New critical process arrives:
-> ENQUEUED: Process ID 550 (Priority: 10)

--- Current Ready Queue (Heap Order: Priority, PID) ---
| P550 (Pri:10) | P312 (Pri:5) | P400 (Pri:2) | P205 (Pri:3) |
------------------------------------------------------
<- DEQUEUED: SCHEDULING Process ID 550 (Priority: 10)

--- STEP 3: Scheduling Remaining Tasks ---
<- DEQUEUED: SCHEDULING Process ID 312 (Priority: 5)
<- DEQUEUED: SCHEDULING Process ID 205 (Priority: 3)
<- DEQUEUED: SCHEDULING Process ID 400 (Priority: 2)

All processes have been scheduled and executed in priority order.

Program finished execution.
```