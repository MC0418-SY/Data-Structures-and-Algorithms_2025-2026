# [E2] - Janie's Earring Organizer - LIST by Janie Lane Sabado

*This is a bonus question*<br>
*You will need to get all test cases to get the full points*

 

## Background
 

Ms Janie has a habit of tossing her earrings into the upper drawer regardless of size. Please help ms Janie reorganize her earring box.

 

## Objectives
 

- Create the organizeEarringsBox function which will redistribute earrings across the drawers of an EarringsBox based on the following rules:
    - TopDrawer rule: Earrings go into TopDrawer if they are:
        - Stud with Small size
        - Dangle with Small size
        - Cuff with Small size
    - MiddleTopDrawer rule: Earrings go into MiddleTopDrawer if they are:
        - Stud with Big size
        - Cuff with Big size
    - Everything else gets shoved into the BottomDrawer
 

## Function Definitions
 

1. The function **sortEarringsBox** will do the following:

    - Accept the parameter EarringsBox *box.
    - Reset all drawer counters (topCnt, mtCnt, mbCnt, bCnt) and totalCnt before redistribution.
    - Iterate through all earrings currently in TopDrawer (including misplaced ones).
    - For each earring:
        - If it matches the TopDrawer rule, insert into TopDrawer.
        - If it matches the MiddleTopDrawer rule, insert into MiddleTopDrawer.
        - Anything else is inserted into BottomDrawer.
- After successful redistribution, recalculate totalCnt as the sum of all drawer counts.
- Ensure bounds are respected (SMASIZE, AVGSIZE, BIGSIZE) to avoid overflow.
 

 
---

### Sample Output 1
```

Before Organizing

===============================================================================================
Drawer       | Material     | Category   | Color    | Length | Size   | Weight
===============================================================================================
TopDrawer    | Silver       | Stud       | Red      | Short  | Small  | 3.50
TopDrawer    | Acrylic      | Dangle     | Blue     | Short  | Small  | 4.20
TopDrawer    | Brass        | Cuff       | Green    | Short  | Small  | 5.00
TopDrawer    | Silver       | Stud       | Violet   | Short  | Big    | 6.50
TopDrawer    | Acrylic      | Dangle     | Yellow   | Long   | Small  | 8.00
TopDrawer    | Brass        | Hoops      | Red      | Short  | Big    | 12.00
--------------------------------------------------------------------------------------------
TopDrawer total: 6 earrings
--------------------------------------------------------------------------------------------
MidTopDrawer | Brass        | Cuff       | Orange   | Long   | Big    | 7.00
MidTopDrawer | Silver       | Stud       | Blue     | Short  | Big    | 6.00
--------------------------------------------------------------------------------------------
MidTopDrawer total: 2 earrings
--------------------------------------------------------------------------------------------
BottomDrawer | Silver       | Dangle     | Blue     | Long   | Big    | 9.50
BottomDrawer | Silver       | Hoops      | Green    | Long   | Small  | 11.00
BottomDrawer | Acrylic      | Hoops      | Violet   | Short  | Big    | 15.00
--------------------------------------------------------------------------------------------
BottomDrawer total: 3 earrings
===============================================================================================
Total earrings in box: 11
===============================================================================================

After Organizing

===============================================================================================
Drawer       | Material     | Category   | Color    | Length | Size   | Weight
===============================================================================================
TopDrawer    | Silver       | Stud       | Red      | Short  | Small  | 3.50
TopDrawer    | Acrylic      | Dangle     | Blue     | Short  | Small  | 4.20
TopDrawer    | Brass        | Cuff       | Green    | Short  | Small  | 5.00
TopDrawer    | Acrylic      | Dangle     | Yellow   | Long   | Small  | 8.00
--------------------------------------------------------------------------------------------
TopDrawer total: 4 earrings
--------------------------------------------------------------------------------------------
MidTopDrawer | Brass        | Cuff       | Orange   | Long   | Big    | 7.00
MidTopDrawer | Silver       | Stud       | Blue     | Short  | Big    | 6.00
MidTopDrawer | Silver       | Stud       | Violet   | Short  | Big    | 6.50
--------------------------------------------------------------------------------------------
MidTopDrawer total: 3 earrings
--------------------------------------------------------------------------------------------
BottomDrawer | Silver       | Dangle     | Blue     | Long   | Big    | 9.50
BottomDrawer | Silver       | Hoops      | Green    | Long   | Small  | 11.00
BottomDrawer | Acrylic      | Hoops      | Violet   | Short  | Big    | 15.00
BottomDrawer | Brass        | Hoops      | Red      | Short  | Big    | 12.00
--------------------------------------------------------------------------------------------
BottomDrawer total: 4 earrings
===============================================================================================
Total earrings in box: 11
=========================================
```