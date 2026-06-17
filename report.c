#include <stdio.h>
#include "parking.h"

/* ---------------- REPORTS ---------------- */

void showCounts() {
    printf("\n--- VEHICLE COUNT ---\n");
    printf("Bikes: %d\n", bikeCount);
    printf("Cars : %d\n", carCount);
    printf("Buses: %d\n", busCount);
    printf("Total: %d\n", bikeCount + carCount + busCount);
}

void showFareDue() {
    printf("\n--- FARE DUE ---\n");
    printf("Bikes: %d x %d = %d\n", bikeCount, bikeRate, bikeCount * bikeRate);
    printf("Cars : %d x %d = %d\n", carCount, carRate, carCount * carRate);
    printf("Buses: %d x %d = %d\n", busCount, busRate, busCount * busRate);

    printf("TOTAL: %d\n",
        (bikeCount * bikeRate) +
        (carCount * carRate) +
        (busCount * busRate)
    );
}

void showCollected() {
    printf("\n--- COLLECTED (APPROX) ---\n");

    printf("Bikes: %d x %d = %d\n",
        totalBikes, bikeRate, totalBikes * bikeRate);

    printf("Cars : %d x %d = %d\n",
        totalCars, carRate, totalCars * carRate);

    printf("Buses: %d x %d = %d\n",
        totalBuses, busRate, totalBuses * busRate);

    printf("TOTAL: %d\n",
        (totalBikes * bikeRate) +
        (totalCars * carRate) +
        (totalBuses * busRate)
    );
}

void modifyRates() {
    int choice;

    printf("\n--- MODIFY RATES ---\n");
    printf("1. Bike\n2. Car\n3. Bus\nChoice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("New bike rate: ");
        scanf("%d", &bikeRate);
    }
    else if (choice == 2) {
        printf("New car rate: ");
        scanf("%d", &carRate);
    }
    else if (choice == 3) {
        printf("New bus rate: ");
        scanf("%d", &busRate);
    }
    else {
        printf("Invalid choice.\n");
    }
}
