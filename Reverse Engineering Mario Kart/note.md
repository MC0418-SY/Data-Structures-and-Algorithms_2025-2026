
- The inventory is a circular queue backed by Player.inventory[INV_SIZE]. INV_SIZE = MAX_INVENTORY + 1 = 4 (3 usable slots + 1 sacrificial slot).

- front and rear are not stored — they are derived from inventoryCount:
 - front = 0 (conceptually always at index 0; items dequeue from here)
 - rear  = inventoryCount % INV_SIZE (next write position)

- When the queue is full and a new item arrives, the oldest item is
overwritten (Mario Kart behaviour: picking up bumps the held item).




The key things to notice as you click around:
enqueue always adds to the rear (the right). Items fill slots [0], [1], [2] in order — the REAR pointer tracks where the next item will land.
dequeue always removes from the front (slot [0]), and every remaining item shifts left by one. The FRONT pointer is always fixed at [0] because your implementation uses a linear array, not a circular one.
Displacement — this is the Mario Kart behaviour. When the inventory is full and you pick up a new item, the oldest item (slot [0]) gets bumped out and the new one takes the rear. Try adding 4 items in a row to see the orange flash.
isEmpty / isFull update live — these map directly to isInventoryEmpty() and isInventoryFull() in your queue.c.

## How to Clone a Specific Directory from a Github Repository
```
git clone --filter=blob:none --no-checkout https://github.com/MC0418-SY/Data-Structures-and-Algorithms_2025-2026.git
cd Data-Structures-and-Algorithms_2025-2026
git sparse-checkout init --cone
git sparse-checkout set "Reverse Engineering Mario Kart"
git checkout
```
