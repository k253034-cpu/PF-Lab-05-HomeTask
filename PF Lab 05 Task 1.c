#include <stdio.h>

int main() {
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age < 5) {
        printf("You have got a Free Ticket\n");
    } else if (age >= 65) {
        printf("You have availed the discount.\n");
    } else {
        printf("You have to pay Standard Price.\n");
    }

    return 0;
}

