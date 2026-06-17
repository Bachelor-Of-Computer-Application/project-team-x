#include <stdio.h>
#include <stdlib.h>

int n_bus_truck = 0;
int n_car_jeep = 0;
int n_rikshaw = 0;
int n_bike = 0;
int total_amount = 0;
int total_count = 0;

void truck(void)
{ 
    printf("\nEntry Successful\n");
    n_bus_truck++;
    total_amount += 200;
    total_count++;
}

void car(void)
{
    printf("\nEntry Successful\n");
    n_car_jeep++;
    total_amount += 100;
    total_count++;
}

void rikshaw(void)
{
    printf("\nEntry Successful\n");
    n_rikshaw++;
    total_amount += 70;
    total_count++;
}

void bike(void)
{
    printf("\nEntry Successful\n");
    n_bike++;
    total_amount += 50;
    total_count++;
}

void status(void)
{
    printf("\nNumber of Bus/Truck = %d\n", n_bus_truck);
    printf("Number of Car/Jeep = %d\n", n_car_jeep);
    printf("Number of Rikshaw = %d\n", n_rikshaw);
    printf("Number of Bike = %d\n", n_bike);
    printf("Total number of Vehicles = %d\n", total_count);
    printf("Total amount = %d\n", total_amount);
}

void reset_data(void)
{
    n_bus_truck = 0;
    n_car_jeep = 0;
    n_rikshaw = 0;
    n_bike = 0;
    total_amount = 0;
    total_count = 0;
    printf("\nData cleared successfully\n");
}

int menu(void)
{
    int ch;
    printf("\n\n\n 1. Enter bus/truck\n");
    printf(" 2. Enter car/jeep\n");
    printf(" 3. Enter rikshaw\n");
    printf(" 4. Enter bike\n");
    printf(" 5. Check status\n");
    printf(" 6. Clear data\n");
    printf(" 7. Exit\n");
    printf(" Enter your choice: ");
    if (scanf("%d", &ch) != 1) {
        ch = 0;
        int c;
        while ((c = getchar()) != '\n' && c != EOF) {
        }
    }
    return ch;
}

int main(void)
{
    while (1) {
        switch (menu()) {
            case 1:
                truck();
                break;
            case 2:
                car();
                break;
            case 3:
                rikshaw();
                break;
            case 4:
                bike();
                break;
            case 5:
                status();
                break;
            case 6:
                reset_data();
                break;
            case 7:
                printf("\nExiting program.\n");
                return 0;
            default:
                printf("\nEnter a correct option\n");
        }
    }

    return 0;
}
