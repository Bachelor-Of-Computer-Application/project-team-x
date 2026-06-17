#ifndef PARKING_H
#define PARKING_H

#define MAX 100

// arrays
extern char bikes[MAX][15];
extern char cars[MAX][15];
extern char buses[MAX][15];

// counters
extern int bikeCount;
extern int carCount;
extern int busCount;

extern int totalBikes;
extern int totalCars;
extern int totalBuses;

extern int bikeRate;
extern int carRate;
extern int busRate;

// functions
void addBike();
void addCar();
void addBus();

void removeBike();
void removeCar();
void removeBus();

void showCounts();
void showFareDue();
void showCollected();
void modifyRates();

#endif
