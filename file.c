#include <stdio.h>
#include "parking.h"
#include "file.h"

void saveData() {
    FILE *fp = fopen("parking.txt", "w");
    int i;
    
    if (fp == NULL) return;

    fprintf(fp, "%d\n", bikeCount);
    for (i = 0; i < bikeCount; i++) {
        fprintf(fp, "%s\n", bikes[i]);
    }

    fprintf(fp, "%d\n", carCount);
    for (i = 0; i < carCount; i++) {
        fprintf(fp, "%s\n", cars[i]);
    }

    fprintf(fp, "%d\n", busCount);
    for (i = 0; i < busCount; i++) {
        fprintf(fp, "%s\n", buses[i]);
    }

    fclose(fp);
}

void loadData() {
    FILE *fp = fopen("parking.txt", "r");
    int i;
    
    if (fp == NULL) return;

    fscanf(fp, "%d", &bikeCount);
    for (i = 0; i < bikeCount; i++) {
        fscanf(fp, "%s", bikes[i]);
    }

    fscanf(fp, "%d", &carCount);
    for (i = 0; i < carCount; i++) {
        fscanf(fp, "%s", cars[i]);
    }

    fscanf(fp, "%d", &busCount);
    for (i = 0; i < busCount; i++) {
        fscanf(fp, "%s", buses[i]);
    }

    fclose(fp);
}
