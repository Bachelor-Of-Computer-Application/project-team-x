#include <stdio.h>
#include <string.h>
#include "auth.h"

int login() {
    char user[20], pass[20];

    printf("=== LOGIN SYSTEM ===\n");

    printf("Username: ");
    scanf("%s", user);

    printf("Password: ");
    scanf("%s", pass);

    if (strcmp(user, "admin") == 0 && strcmp(pass, "Hellothere123") == 0) {
        printf("Login successful!\n");
        return 1;
    }

    printf("Invalid login!\n");
    return 0;
}
