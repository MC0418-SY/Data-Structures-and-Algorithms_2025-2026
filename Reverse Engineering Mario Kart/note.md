/*
 * The inventory is a circular queue backed by Player.inventory[INV_SIZE].
 * INV_SIZE = MAX_INVENTORY + 1 = 4 (3 usable slots + 1 sacrificial slot).
 *
 * front and rear are not stored — they are derived from inventoryCount:
 *   front = 0 (conceptually always at index 0; items dequeue from here)
 *   rear  = inventoryCount % INV_SIZE (next write position)
 *
 * When the queue is full and a new item arrives, the oldest item is
 * overwritten (Mario Kart behaviour: picking up bumps the held item).
 */
