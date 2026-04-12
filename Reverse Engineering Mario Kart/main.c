#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "cursor.h"
#include "queue.h"

int main() {
    printf("=== Reverse Engineered Mario Kart 8 Deluxe ===\n\n");
    VirtualList V;
    initialize(&V);
    int raceList = -1;

    /* --- insertLast -------------------------------------------------- */
    printf(">> Adding four racers using insertLast...\n");
    insertLast(&raceList, &V, createPlayer("Bowser_King",  "BK01", "Bowser",  "Biddybuggy",    80));
    insertLast(&raceList, &V, createPlayer("PeachFan99",   "PF99", "Peach",   "Wild Wiggler",  55));
    insertLast(&raceList, &V, createPlayer("ToadSpeed",    "TS42", "Toad",    "Mr. Scooty",    90));
    insertLast(&raceList, &V, createPlayer("MarioMaster",  "MM77", "Mario",   "Standard Kart", 70));
    display(raceList, V);

    /* --- insertFirst ------------------------------------------------- */
    printf(">> Adding Waluigi using insertFirst...\n");
    insertFirst(&raceList, &V, createPlayer("Waluigi_WAH", "WW00", "Waluigi", "Pipe Frame",    40));
    display(raceList, V);

    /* --- insertSorted ------------------------------------------------ */
    printf(">> Building a coin-ranked leaderboard using insertSorted...\n");
    int sortedList = -1;
    insertSorted(&sortedList, &V, createPlayer("Bowser_King",  "BK01", "Bowser",  "Biddybuggy",    80));
    insertSorted(&sortedList, &V, createPlayer("PeachFan99",   "PF99", "Peach",   "Wild Wiggler",  55));
    insertSorted(&sortedList, &V, createPlayer("ToadSpeed",    "TS42", "Toad",    "Mr. Scooty",    90));
    insertSorted(&sortedList, &V, createPlayer("MarioMaster",  "MM77", "Mario",   "Standard Kart", 70));
    insertSorted(&sortedList, &V, createPlayer("Waluigi_WAH",  "WW00", "Waluigi", "Pipe Frame",    40));
    insertSorted(&sortedList, &V, createPlayer("LuigiGhost",   "LG11", "Luigi",   "Pipe Frame",    70));
    display(sortedList, V);

    /* --- delete (first occurrence) ----------------------------------- */
    printf(">> Removing MarioMaster from the leaderboard...\n");
    delete(&sortedList, &V, createPlayer("MarioMaster", "MM77", "Mario", "", 0));
    display(sortedList, V);

    /* --- deleteAllOccurrence ---------------------------------------- */
    printf(">> Adding a duplicate 'PeachFan99' entry...\n");
    insertLast(&sortedList, &V, createPlayer("PeachFan99", "PF99", "Peach", "Wild Wiggler", 55));
    display(sortedList, V);
    printf(">> Removing every 'PeachFan99' node...\n");
    deleteAllOccurrence(&sortedList, &V, createPlayer("PeachFan99", "PF99", "Peach", "", 0));
    display(sortedList, V);

    /* --- edge case: delete a non-existent racer --------------------- */
    printf(">> Attempting to remove a racer that does not exist...\n");
    delete(&sortedList, &V, createPlayer("DK_Rider", "DK99", "DK", "", 0));



    /* --- queue: makeItem / enqueue / displayInventory --------------- */
    printf("\n>> ToadSpeed picks up three items...\n");
    int cur;
    for (cur = sortedList; cur != -1; cur = V.R[cur].next) {
        if (strcmp(V.R[cur].racer.handle.accountName, "ToadSpeed") == 0) {
            enqueue(&V.R[cur].racer, makeItem("Mushroom",   "Short speed boost"));
            enqueue(&V.R[cur].racer, makeItem("Red Shell",  "Homes in on racer ahead"));
            enqueue(&V.R[cur].racer, makeItem("Super Star", "Temporary invincibility"));
            displayInventory(&V.R[cur].racer);
            break;
        }
    }

    /* --- isInventoryFull -------------------------------------------- */
    printf(">> Checking if ToadSpeed's inventory is full...\n");
    for (cur = sortedList; cur != -1; cur = V.R[cur].next) {
        if (strcmp(V.R[cur].racer.handle.accountName, "ToadSpeed") == 0) {
            printf("   isFull: %s\n\n", isInventoryFull(&V.R[cur].racer) ? "Yes" : "No");
            break;
        }
    }

    /* --- peek ------------------------------------------------------- */
    printf(">> Peeking at ToadSpeed's next item...\n");
    for (cur = sortedList; cur != -1; cur = V.R[cur].next) {
        if (strcmp(V.R[cur].racer.handle.accountName, "ToadSpeed") == 0) {
            printf("   peek: '%s'\n\n", peek(&V.R[cur].racer).itemName);
            break;
        }
    }

    /* --- dequeue ---------------------------------------------------- */
    printf(">> ToadSpeed uses their front item...\n");
    for (cur = sortedList; cur != -1; cur = V.R[cur].next) {
        if (strcmp(V.R[cur].racer.handle.accountName, "ToadSpeed") == 0) {
            Item used = dequeue(&V.R[cur].racer);
            printf("   Used: %s - %s\n\n", used.itemName, used.description);
            displayInventory(&V.R[cur].racer);
            break;
        }
    }

    /* --- enqueue over a full inventory (oldest displaced) ----------- */
    printf("\n>> ToadSpeed picks up a Blue Shell but inventory is full...\n");
    for (cur = sortedList; cur != -1; cur = V.R[cur].next) {
        if (strcmp(V.R[cur].racer.handle.accountName, "ToadSpeed") == 0) {
            enqueue(&V.R[cur].racer, makeItem("Mushroom",    "Short speed boost"));
            enqueue(&V.R[cur].racer, makeItem("Blue Shell",  "Targets the racer in 1st place"));
            displayInventory(&V.R[cur].racer);
            break;
        }
    }

    /* --- isInventoryEmpty ------------------------------------------- */
    printf("\n>> Bowser_King has not picked up any items yet...\n");
    for (cur = sortedList; cur != -1; cur = V.R[cur].next) {
        if (strcmp(V.R[cur].racer.handle.accountName, "Bowser_King") == 0) {
            printf("   isEmpty: %s\n\n", isInventoryEmpty(&V.R[cur].racer) ? "Yes" : "No");
            break;
        }
    }

    /* --- edge case: peek / dequeue on empty inventory --------------- */
    printf(">> Bowser_King tries to use an item with an empty inventory...\n");
    for (cur = sortedList; cur != -1; cur = V.R[cur].next) {
        if (strcmp(V.R[cur].racer.handle.accountName, "Bowser_King") == 0) {
            peek(&V.R[cur].racer);
            dequeue(&V.R[cur].racer);
            break;
        }
    }

    printf("\nBruh.\n");
    return 0;
}
