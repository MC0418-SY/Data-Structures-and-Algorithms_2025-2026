#include "traffic.h"

void init(Road *r) {
    r->lead = -1;
    r->tail = -1;
}

int isRoadEmpty(Road *r) {
    return r->lead == -1;
}

int isRoadFull(Road *r) {
    return (r->tail + 1) % SIZE == r->lead;
}

void addVehicle(Road *r, Vehicle v) {
    if (isRoadFull(r)) {
        printf("Road is Full! Vehicle %d cannot enter\n", v.id);
        return;
    }

    if (isRoadEmpty(r)) {
        r->lead = r->tail = 0;
    } else {
        r->tail = (r->tail + 1) % SIZE;
    }

    r->queue[r->tail] = v;
    printf("Vehicle %d added successfully\n", v.id);
}

void display(Road *r, char road_name[]) {
    printf("\n--- %s ---\n", road_name);

    if (isRoadEmpty(r)) {
        printf("No vehicles waiting\n");
        return;
    }

    int i = r->lead;
    while (1) {
        printf("ID: %d | Type: %s\n", r->queue[i].id, r->queue[i].type);
        if (i == r->tail) break;
        i = (i + 1) % SIZE;
    }
}