#include <stdio.h>
#include "parking.h"

char bikes[MAX][15];
char cars[MAX][15];
char buses[MAX][15];

int bikeCount = 0, carCount = 0, busCount = 0;
int totalBikes = 0, totalCars = 0, totalBuses = 0;
int bikeRate = 20, carRate = 40, busRate = 60;

void addBike() {
    printf("Enter bike number: ");
    scanf("%s", bikes[bikeCount]);
    bikeCount++;
    totalBikes++;
    printf("Bike added successfully.\n");
}

void removeBike() {
    if (bikeCount == 0) {
        printf("No bikes parked.\n");
        return;
    }
    bikeCount--;
    printf("Bike removed. Collect %d rupees.\n", bikeRate);
}

void addCar() {
    printf("Enter car number: ");
    scanf("%s", cars[carCount]);
    carCount++;
    totalCars++;
    printf("Car added successfully.\n");
}

void removeCar() {
    if (carCount == 0) {
        printf("No cars parked.\n");
        return;
    }
    carCount--;
    printf("Car removed. Collect %d rupees.\n", carRate);
}

void addBus() {
    printf("Enter bus number: ");
    scanf("%s", buses[busCount]);
    busCount++;
    totalBuses++;
    printf("Bus added successfully.\n");
}

void removeBus() {
    if (busCount == 0) {
        printf("No buses parked.\n");
        return;
    }
    busCount--;
    printf("Bus removed. Collect %d rupees.\n", busRate);
}
