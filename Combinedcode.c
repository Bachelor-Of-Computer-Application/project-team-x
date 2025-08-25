#include <stdio.h>
#include <string.h>

#define MAX 100

char bikes[MAX][15];
char cars[MAX][15];
char buses[MAX][15];

int bikeCount = 0, carCount = 0, busCount = 0;

/* total ever added, used to work out how many have left */
int totalBikes = 0, totalCars = 0, totalBuses = 0;

int bikeRate = 20, carRate = 40, busRate = 60;

/* ---------------- BIKE FUNCTIONS ---------------- */

void addBike() {
    char num[15];
    printf("Enter bike number: ");
    scanf("%s", num);

    for (int i = 0; i < bikeCount; i++) {
        if (strcmp(bikes[i], num) == 0) {
            printf("This bike is already parked.\n");
            return;
        }
    }
    strcpy(bikes[bikeCount], num);
    bikeCount++;
    totalBikes++;
    printf("Bike added.\n");
}

void removeBike() {
    char num[15];
    printf("Parked bikes:\n");
    for (int i = 0; i < bikeCount; i++) printf("  %s\n", bikes[i]);

    printf("Enter bike number to remove: ");
    scanf("%s", num);

    int found = -1;
    for (int i = 0; i < bikeCount; i++) {
        if (strcmp(bikes[i], num) == 0) { found = i; break; }
    }
    if (found == -1) {
        printf("Bike not found.\n");
        return;
    }
    strcpy(bikes[found], bikes[bikeCount - 1]);
    bikeCount--;
    printf("Bike removed. Collect %d rupees.\n", bikeRate);
}

/* ---------------- CAR FUNCTIONS ---------------- */

void addCar() {
    char num[15];
    printf("Enter car number: ");
    scanf("%s", num);

    for (int i = 0; i < carCount; i++) {
        if (strcmp(cars[i], num) == 0) {
            printf("This car is already parked.\n");
            return;
        }
    }
    strcpy(cars[carCount], num);
    carCount++;
    totalCars++;
    printf("Car added.\n");
}

void removeCar() {
    char num[15];
    printf("Parked cars:\n");
    for (int i = 0; i < carCount; i++) printf("  %s\n", cars[i]);

    printf("Enter car number to remove: ");
    scanf("%s", num);

    int found = -1;
    for (int i = 0; i < carCount; i++) {
        if (strcmp(cars[i], num) == 0) { found = i; break; }
    }
    if (found == -1) {
        printf("Car not found.\n");
        return;
    }
    strcpy(cars[found], cars[carCount - 1]);
    carCount--;
    printf("Car removed. Collect %d rupees.\n", carRate);
}

/* ---------------- BUS FUNCTIONS ---------------- */

void addBus() {
    char num[15];
    printf("Enter bus number: ");
    scanf("%s", num);

    for (int i = 0; i < busCount; i++) {
        if (strcmp(buses[i], num) == 0) {
            printf("This bus is already parked.\n");
            return;
        }
    }
    strcpy(buses[busCount], num);
    busCount++;
    totalBuses++;
    printf("Bus added.\n");
}

void removeBus() {
    char num[15];
    printf("Parked buses:\n");
    for (int i = 0; i < busCount; i++) printf("  %s\n", buses[i]);

    printf("Enter bus number to remove: ");
    scanf("%s", num);

    int found = -1;
    for (int i = 0; i < busCount; i++) {
        if (strcmp(buses[i], num) == 0) { found = i; break; }
    }
    if (found == -1) {
        printf("Bus not found.\n");
        return;
    }
    strcpy(buses[found], buses[busCount - 1]);
    busCount--;
    printf("Bus removed. Collect %d rupees.\n", busRate);
}

/* ---------------- REPORTS ---------------- */

void showCounts() {
    printf("Bikes : %d\n", bikeCount);
    printf("Cars  : %d\n", carCount);
    printf("Buses : %d\n", busCount);
    printf("Total : %d\n", bikeCount + carCount + busCount);
}

void showFareDue() {
    printf("Bikes: %d x %d = %d\n", bikeCount, bikeRate, bikeCount * bikeRate);
    printf("Cars : %d x %d = %d\n", carCount, carRate, carCount * carRate);
    printf("Buses: %d x %d = %d\n", busCount, busRate, busCount * busRate);
    printf("Total: %d\n", bikeCount * bikeRate + carCount * carRate + busCount * busRate);
}

void showCollected() {
    int b = totalBikes - bikeCount;
    int c = totalCars - carCount;
    int u = totalBuses - busCount;
    printf("Bikes: %d x %d = %d\n", b, bikeRate, b * bikeRate);
    printf("Cars : %d x %d = %d\n", c, carRate, c * carRate);
    printf("Buses: %d x %d = %d\n", u, busRate, u * busRate);
    printf("Total: %d\n", b * bikeRate + c * carRate + u * busRate);
}

void modifyRates() {
    int choice;
    printf("Current rates: bike=%d car=%d bus=%d\n", bikeRate, carRate, busRate);
    printf("1. Bike  2. Car  3. Bus\nChoice: ");
    scanf("%d", &choice);

    if (choice == 1) { printf("New bike rate: "); scanf("%d", &bikeRate); }
    else if (choice == 2) { printf("New car rate: "); scanf("%d", &carRate); }
    else if (choice == 3) { printf("New bus rate: "); scanf("%d", &busRate); }
    else printf("Invalid choice.\n");
}

/* ---------------- MAIN MENU ---------------- */

int main() {
    int choice;

    while (1) {
        printf("\n--- PARKING SYSTEM ---\n");
        printf("1. Add bike\n2. Add car\n3. Add bus\n");
        printf("4. Remove bike\n5. Remove car\n6. Remove bus\n");
        printf("7. Show counts\n8. Fare due\n9. Fare collected\n");
        printf("10. Modify rates\n11. Exit\n");
        printf("Choice: ");
        scanf("%d", &choice);

        if (choice == 1) addBike();
        else if (choice == 2) addCar();
        else if (choice == 3) addBus();
        else if (choice == 4) removeBike();
        else if (choice == 5) removeCar();
        else if (choice == 6) removeBus();
        else if (choice == 7) showCounts();
        else if (choice == 8) showFareDue();
        else if (choice == 9) showCollected();
        else if (choice == 10) modifyRates();
        else if (choice == 11) { printf("Exiting...\n"); break; }
        else printf("Invalid choice. Pick 1-11.\n");
    }
    return 0;
}
Commit at 2026-03-02T02:29:37.846741
Commit at 2025-07-05T20:00:35.078248
Commit at 2025-08-25T15:48:32.288490
