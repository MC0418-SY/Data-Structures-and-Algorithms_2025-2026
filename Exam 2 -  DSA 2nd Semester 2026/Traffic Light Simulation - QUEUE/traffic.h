#ifndef TRAFFIC_H
#define TRAFFIC_H

#include <stdio.h>
#include <string.h>

#define SIZE 5
#define PASS_LIMIT 2

// Vehicle Structure
typedef struct {
    int id;
    char type[10];
} Vehicle;

// Road Structure
typedef struct {
    Vehicle queue[SIZE];
    int lead, tail;
} Road;

// Helper Functions
void init(Road *r);
int isRoadEmpty(Road *r);
int isRoadFull(Road *r);
void display(Road *r, char road_name[]);
void addVehicle(Road *r, Vehicle v);

// Core Functions
Vehicle removeVehicle(Road *r);
void process(Road *r, char road_name[]);

#endif