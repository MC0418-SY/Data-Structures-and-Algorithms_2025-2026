#ifndef CURSOR_H_INCLUDED
#define CURSOR_H_INCLUDED

#define MAX 15

typedef char String[50];

typedef struct {
	float speed;
	float acceleration;
	float weight;
	float handling;
	float traction;
} Stat;

typedef struct {
	String accountName;
	String id;
} IGN;

typedef struct {
	String name;
	Stat body;
	Stat wheel;
	Stat chute;
	Stat total;
} Car;

typedef struct {
	String charName;
	float weight;
} Character;

typedef struct {
	String itemName;
	String description;
} Item;

#define MAX_INVENTORY 3
#define INV_SIZE (MAX_INVENTORY + 1)

typedef struct {
	IGN handle;
	Character selected;
	Car chosen;
	Item inventory[INV_SIZE];
	int inventoryCount;
	int coins;
} Player;

typedef struct {
	Player racer;
	int next;
} racerNode;

typedef struct {
	racerNode R[MAX];
	int available;
} VirtualList;

typedef struct {
	int LIST;
	int count;
} RaceList;

Player createPlayer(const char *account, const char *id, const char *charName, const char *carName, int coins);
void initialize(VirtualList *V);
int allocSpace(VirtualList *V);
void deallocSpace(VirtualList *V, int index);
void insertFirst(int *L, VirtualList *V, Player racer);
void insertLast(int *L, VirtualList *V, Player racer);
void insertSorted(int *L, VirtualList *V, Player racer);
void delete(int *L, VirtualList *V, Player racer);
void deleteAllOccurrence(int *L, VirtualList *V, Player racer);
void display(int L, VirtualList V);

#endif // CURSOR_H_INCLUDED
