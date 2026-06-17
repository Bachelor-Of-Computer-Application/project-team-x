#include <stdio.h>
#include "parking.h"
#include "auth.h"
#include "file.h"

int main() {
    int choice;

    if (!login()) {
        return 0;
    }

    loadData();

    while (1) {
        printf("\n===== PARKING SYSTEM =====\n");
        printf("1. Add Bike\n");
        printf("2. Add Car\n");
        printf("3. Add Bus\n");
        printf("4. Remove Bike\n");
        printf("5. Remove Car\n");
        printf("6. Remove Bus\n");
        printf("7. Show Counts\n");
        printf("8. Fare Due\n");
        printf("9. Fare Collected\n");
        printf("10. Modify Rates\n");
        printf("11. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: addBike(); saveData(); break;
            case 2: addCar(); saveData(); break;
            case 3: addBus(); saveData(); break;
            case 4: removeBike(); saveData(); break;
            case 5: removeCar(); saveData(); break;
            case 6: removeBus(); saveData(); break;
            case 7: showCounts(); break;
            case 8: showFareDue(); break;
            case 9: showCollected(); break;
            case 10: modifyRates(); break;
            case 11:
                printf("Exiting...\n");
                return 0;
            default:
                printf("Invalid choice.\n");
        }
    }
}
