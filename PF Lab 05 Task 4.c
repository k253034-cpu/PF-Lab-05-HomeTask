#include <stdio.h>
#include <string.h>

int main() {
    char username[20], password[20];

    printf("Enter username: ");
    scanf("%s", username);

    if (strcmp(username, "admin") == 0) {   // correct username
        printf("Enter password: ");
        scanf("%s", password);

        if (strcmp(password, "12345") == 0) {
            printf("Login successful\n");
        } else {
            printf("Incorrect password\n");
        }
    } else {
        printf("Username not found\n");
    }

    return 0;
}

