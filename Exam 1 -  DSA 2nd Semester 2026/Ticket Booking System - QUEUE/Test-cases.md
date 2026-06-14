### Test Case 1
```
Enter total tickets: 5

===== TICKET SYSTEM =====
1. Add Customer
2. Serve Customer
3. Display Queue
4. Exit
Choose: 1
Enter name: Alice
Tickets requested: 2
Alice added to queue

===== TICKET SYSTEM =====
1. Add Customer
2. Serve Customer
3. Display Queue
4. Exit
Choose: 1
Enter name: Bob
Tickets requested: 3
Bob added to queue

===== TICKET SYSTEM =====
1. Add Customer
2. Serve Customer
3. Display Queue
4. Exit
Choose: 3

Current Queue:
1. Alice (2 tickets)
2. Bob (3 tickets)


===== TICKET SYSTEM =====
1. Add Customer
2. Serve Customer
3. Display Queue
4. Exit
Choose: 2
Serving Alice...
Booked 2 tickets for Alice
Remaining tickets: 3


===== TICKET SYSTEM =====
1. Add Customer
2. Serve Customer
3. Display Queue
4. Exit
Choose: 3

Current Queue:
1. Bob (3 tickets)


===== TICKET SYSTEM =====
1. Add Customer
2. Serve Customer
3. Display Queue
4. Exit
Choose: 2
Serving Bob...
Booked 3 tickets for Bob
Remaining tickets: 0


===== TICKET SYSTEM =====
1. Add Customer
2. Serve Customer
3. Display Queue
4. Exit
Choose: 3
Queue is empty

===== TICKET SYSTEM =====
1. Add Customer
2. Serve Customer
3. Display Queue
4. Exit
Choose: 4
Exiting system...
```

### Test Case 2
```
Enter total tickets: 5

===== TICKET SYSTEM =====
1. Add Customer
2. Serve Customer
3. Display Queue
4. Exit
Choose: 1
Enter name: Alice
Tickets requested: 6
Alice added to queue

===== TICKET SYSTEM =====
1. Add Customer
2. Serve Customer
3. Display Queue
4. Exit
Choose: 3

Current Queue:
1. Alice (6 tickets)


===== TICKET SYSTEM =====
1. Add Customer
2. Serve Customer
3. Display Queue
4. Exit
Choose: 2
Serving Alice...
Only 5 tickets left. Partial booking for Alice
Remaining tickets: 0


===== TICKET SYSTEM =====
1. Add Customer
2. Serve Customer
3. Display Queue
4. Exit
Choose: 4
Exiting system...
```

### Test Case 3
```
Enter total tickets: 5

===== TICKET SYSTEM =====
1. Add Customer
2. Serve Customer
3. Display Queue
4. Exit
Choose: 1
Enter name: Alice
Tickets requested: 2
Alice added to queue

===== TICKET SYSTEM =====
1. Add Customer
2. Serve Customer
3. Display Queue
4. Exit
Choose: 1
Enter name: Bob
Tickets requested: 3
Bob added to queue

===== TICKET SYSTEM =====
1. Add Customer
2. Serve Customer
3. Display Queue
4. Exit
Choose: 1
Enter name: Dave
Tickets requested: 2
Dave added to queue

===== TICKET SYSTEM =====
1. Add Customer
2. Serve Customer
3. Display Queue
4. Exit
Choose: 3

Current Queue:
1. Alice (2 tickets)
2. Bob (3 tickets)
3. Dave (2 tickets)


===== TICKET SYSTEM =====
1. Add Customer
2. Serve Customer
3. Display Queue
4. Exit
Choose: 2
Serving Alice...
Booked 2 tickets for Alice
Remaining tickets: 3


===== TICKET SYSTEM =====
1. Add Customer
2. Serve Customer
3. Display Queue
4. Exit
Choose: 3

Current Queue:
1. Bob (3 tickets)
2. Dave (2 tickets)


===== TICKET SYSTEM =====
1. Add Customer
2. Serve Customer
3. Display Queue
4. Exit
Choose: 2
Serving Bob...
Booked 3 tickets for Bob
Remaining tickets: 0


===== TICKET SYSTEM =====
1. Add Customer
2. Serve Customer
3. Display Queue
4. Exit
Choose: 3

Current Queue:
1. Dave (2 tickets)


===== TICKET SYSTEM =====
1. Add Customer
2. Serve Customer
3. Display Queue
4. Exit
Choose: 2
Serving Dave...
No tickets left for Dave
Remaining tickets: 0


===== TICKET SYSTEM =====
1. Add Customer
2. Serve Customer
3. Display Queue
4. Exit
Choose: 3
Queue is empty

===== TICKET SYSTEM =====
1. Add Customer
2. Serve Customer
3. Display Queue
4. Exit
Choose: 4
Exiting system...
```
### Test Case 4, 5, and 6
- The remaining test cases were hidden