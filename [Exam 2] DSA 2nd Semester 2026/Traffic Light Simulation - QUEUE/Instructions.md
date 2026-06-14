# [E2] Traffic Light Simulation - QUEUE by Edrian Guanzon
## Background
This program simulates a basic traffic light system using a circular queue. Vehicles are added to two separate road queues (Road A and Road B), where each vehicle has an ID and type. When a road gets a green signal, a limited number of vehicles are allowed to pass. The system also prevents overflow using a fixed queue size.

 

## Objectives

- Create removeVehicle function which will remove a vehicle from a road.
- Create process function that will simulate a go signal for a specific road.
 

## Function Definitions

1. removeVehicle()
    - Accepts a parameter Road *r
    - Remove the vehicle from the road queue
    - If the road queue is empty, road lead and road tail will have a value of -1
    - If the road queue is not empty, road lead will move to the next vehicle in the queue
    - Return the vehicle that was removed. If there is no vehicle removed, return a Vehicle with an id of -1
2. process()
    - Accepts a parameter Road *r and a char road_name[]
    - Remove vehicles based on the pass limit
    - If there are no more vehicles in the road queue, display "No more vehicles"
    - For every car that will be removed, display the vehicle id type

---
### Sample Output 1
```
========== TRAFFIC SYSTEM MENU ==========
1. Add Vehicle
2. Process Road A (Green Light)
3. Process Road B (Green Light)
4. Display Roads
5. Exit
Enter choice: 1
Enter Vehicle ID: 101
Enter Vehicle Type: Sedan
Enter Road (1 = A, 2 = B): 1
Vehicle 101 added successfully

========== TRAFFIC SYSTEM MENU ==========
1. Add Vehicle
2. Process Road A (Green Light)
3. Process Road B (Green Light)
4. Display Roads
5. Exit
Enter choice: 1
Enter Vehicle ID: 102
Enter Vehicle Type: Pick-up
Enter Road (1 = A, 2 = B): 1
Vehicle 102 added successfully

========== TRAFFIC SYSTEM MENU ==========
1. Add Vehicle
2. Process Road A (Green Light)
3. Process Road B (Green Light)
4. Display Roads
5. Exit
Enter choice: 1
Enter Vehicle ID: 103
Enter Vehicle Type: Van
Enter Road (1 = A, 2 = B): 1
Vehicle 103 added successfully

========== TRAFFIC SYSTEM MENU ==========
1. Add Vehicle
2. Process Road A (Green Light)
3. Process Road B (Green Light)
4. Display Roads
5. Exit
Enter choice: 1
Enter Vehicle ID: 104
Enter Vehicle Type: Van
Enter Road (1 = A, 2 = B): 2
Vehicle 104 added successfully

========== TRAFFIC SYSTEM MENU ==========
1. Add Vehicle
2. Process Road A (Green Light)
3. Process Road B (Green Light)
4. Display Roads
5. Exit
Enter choice: 1
Enter Vehicle ID: 105
Enter Vehicle Type: Sedan
Enter Road (1 = A, 2 = B): 2
Vehicle 105 added successfully

========== TRAFFIC SYSTEM MENU ==========
1. Add Vehicle
2. Process Road A (Green Light)
3. Process Road B (Green Light)
4. Display Roads
5. Exit
Enter choice: 1
Enter Vehicle ID: 106
Enter Vehicle Type: Pick-up
Enter Road (1 = A, 2 = B): 2
Vehicle 106 added successfully

========== TRAFFIC SYSTEM MENU ==========
1. Add Vehicle
2. Process Road A (Green Light)
3. Process Road B (Green Light)
4. Display Roads
5. Exit
Enter choice: 4

--- Road A ---
ID: 101 | Type: Sedan
ID: 102 | Type: Pick-up
ID: 103 | Type: Van

--- Road B ---
ID: 104 | Type: Van
ID: 105 | Type: Sedan
ID: 106 | Type: Pick-up

========== TRAFFIC SYSTEM MENU ==========
1. Add Vehicle
2. Process Road A (Green Light)
3. Process Road B (Green Light)
4. Display Roads
5. Exit
Enter choice: 2

Green Signal: Road A
Vehicle 101 (Sedan) passed
Vehicle 102 (Pick-up) passed

========== TRAFFIC SYSTEM MENU ==========
1. Add Vehicle
2. Process Road A (Green Light)
3. Process Road B (Green Light)
4. Display Roads
5. Exit
Enter choice: 4

--- Road A ---
ID: 103 | Type: Van

--- Road B ---
ID: 104 | Type: Van
ID: 105 | Type: Sedan
ID: 106 | Type: Pick-up

========== TRAFFIC SYSTEM MENU ==========
1. Add Vehicle
2. Process Road A (Green Light)
3. Process Road B (Green Light)
4. Display Roads
5. Exit
Enter choice: 3

Green Signal: Road B
Vehicle 104 (Van) passed
Vehicle 105 (Sedan) passed

========== TRAFFIC SYSTEM MENU ==========
1. Add Vehicle
2. Process Road A (Green Light)
3. Process Road B (Green Light)
4. Display Roads
5. Exit
Enter choice: 4

--- Road A ---
ID: 103 | Type: Van

--- Road B ---
ID: 106 | Type: Pick-up

========== TRAFFIC SYSTEM MENU ==========
1. Add Vehicle
2. Process Road A (Green Light)
3. Process Road B (Green Light)
4. Display Roads
5. Exit
Enter choice: 5
Exiting system...
```
### Sample Output 2
```
========== TRAFFIC SYSTEM MENU ==========
1. Add Vehicle
2. Process Road A (Green Light)
3. Process Road B (Green Light)
4. Display Roads
5. Exit
Enter choice: 4

--- Road A ---
No vehicles waiting

--- Road B ---
No vehicles waiting

========== TRAFFIC SYSTEM MENU ==========
1. Add Vehicle
2. Process Road A (Green Light)
3. Process Road B (Green Light)
4. Display Roads
5. Exit
Enter choice: 2

Green Signal: Road A
No more vehicles

========== TRAFFIC SYSTEM MENU ==========
1. Add Vehicle
2. Process Road A (Green Light)
3. Process Road B (Green Light)
4. Display Roads
5. Exit
Enter choice: 3

Green Signal: Road B
No more vehicles

========== TRAFFIC SYSTEM MENU ==========
1. Add Vehicle
2. Process Road A (Green Light)
3. Process Road B (Green Light)
4. Display Roads
5. Exit
Enter choice: 4

--- Road A ---
No vehicles waiting

--- Road B ---
No vehicles waiting

========== TRAFFIC SYSTEM MENU ==========
1. Add Vehicle
2. Process Road A (Green Light)
3. Process Road B (Green Light)
4. Display Roads
5. Exit
Enter choice: 5
Exiting system...
```
### Sample Output 3
```
========== TRAFFIC SYSTEM MENU ==========
1. Add Vehicle
2. Process Road A (Green Light)
3. Process Road B (Green Light)
4. Display Roads
5. Exit
Enter choice: 1
Enter Vehicle ID: 101
Enter Vehicle Type: Sedan
Enter Road (1 = A, 2 = B): 1
Vehicle 101 added successfully

========== TRAFFIC SYSTEM MENU ==========
1. Add Vehicle
2. Process Road A (Green Light)
3. Process Road B (Green Light)
4. Display Roads
5. Exit
Enter choice: 1
Enter Vehicle ID: 102
Enter Vehicle Type: Pick-up
Enter Road (1 = A, 2 = B): 2
Vehicle 102 added successfully

========== TRAFFIC SYSTEM MENU ==========
1. Add Vehicle
2. Process Road A (Green Light)
3. Process Road B (Green Light)
4. Display Roads
5. Exit
Enter choice: 4

--- Road A ---
ID: 101 | Type: Sedan

--- Road B ---
ID: 102 | Type: Pick-up

========== TRAFFIC SYSTEM MENU ==========
1. Add Vehicle
2. Process Road A (Green Light)
3. Process Road B (Green Light)
4. Display Roads
5. Exit
Enter choice: 2

Green Signal: Road A
Vehicle 101 (Sedan) passed
No more vehicles

========== TRAFFIC SYSTEM MENU ==========
1. Add Vehicle
2. Process Road A (Green Light)
3. Process Road B (Green Light)
4. Display Roads
5. Exit
Enter choice: 4

--- Road A ---
No vehicles waiting

--- Road B ---
ID: 102 | Type: Pick-up

========== TRAFFIC SYSTEM MENU ==========
1. Add Vehicle
2. Process Road A (Green Light)
3. Process Road B (Green Light)
4. Display Roads
5. Exit
Enter choice: 3

Green Signal: Road B
Vehicle 102 (Pick-up) passed
No more vehicles

========== TRAFFIC SYSTEM MENU ==========
1. Add Vehicle
2. Process Road A (Green Light)
3. Process Road B (Green Light)
4. Display Roads
5. Exit
Enter choice: 4

--- Road A ---
No vehicles waiting

--- Road B ---
No vehicles waiting

========== TRAFFIC SYSTEM MENU ==========
1. Add Vehicle
2. Process Road A (Green Light)
3. Process Road B (Green Light)
4. Display Roads
5. Exit
Enter choice: 5
Exiting system...
```