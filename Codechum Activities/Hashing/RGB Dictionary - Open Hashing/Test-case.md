### Test Case 1
```
--- Inserting Colors ---
-> Inserted 'Red' (RGB: 255, 0, 0) into bucket [61].
-> Inserted 'Green' (RGB: 0, 255, 0) into bucket [59].
-> Inserted 'Blue' (RGB: 0, 0, 255) into bucket [57].
-> Inserted 'White' (RGB: 255, 255, 255) into bucket [49].
-> Inserted 'Black' (RGB: 0, 0, 0) into bucket [0].
-> Inserted 'Dark Grey' (RGB: 10, 10, 10) into bucket [22].
-> Inserted 'Dark Red' (RGB: 30, 0, 0) into bucket [26].

--- Inserting Colliding Colors ---
-> Inserted 'Light Grey' (RGB: 1, 1, 1) into bucket [15].
-> Inserted 'Slightly Red' (RGB: 5, 0, 0) into bucket [15].

--- Color Dictionary Content ---
Bucket [0]: Black (0,0,0)
Bucket [15]: Slightly Red (5,0,0) -> Light Grey (1,1,1)
Bucket [22]: Dark Grey (10,10,10)
Bucket [26]: Dark Red (30,0,0)
Bucket [49]: White (255,255,255)
Bucket [57]: Blue (0,0,255)
Bucket [59]: Green (0,255,0)
Bucket [61]: Red (255,0,0)
--------------------------------

--- Search Results ---
Searching for RGB (255, 0, 0) in bucket [61]...
SUCCESS: Found Color: Red
Searching for RGB (5, 0, 0) in bucket [15]...
SUCCESS: Found Color: Slightly Red
Searching for RGB (255, 165, 0) in bucket [54]...
FAILURE: Color not found.
```