#include <stdio.h>
#include "model.h"

int login();
void addVehicle();
void dailyReport(Vehicle v[], int n);

extern Vehicle db[];
extern int count;

int main() {
    if (!login()) return 0;

    int ch;

    while (1) {
        printf("\n===== PARKING SYSTEM =====\n");
        printf("1. Add Vehicle Entry\n");
        printf("2. Exit Vehicle\n");
        printf("3. Daily Report\n");
        printf("4. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &ch);

        switch (ch) {
            case 1: addVehicle(); break;
            case 2: printf("Exit module (to be linked)\n"); break;
            case 3: dailyReport(db, count); break;
            case 4: return 0;
        }
    }
}