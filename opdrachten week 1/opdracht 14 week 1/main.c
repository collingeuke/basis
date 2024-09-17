#include <stdio.h>
#include <math.h>

int main()
{
    int choice;
    int number;

    printf_s("Kies een optie:\n");
    printf_s("1. Kwadrateren\n");
    printf_s("2. 3emachtsheffen\n");
    scanf_s("%d", &choice);

    printf_s("Geef een integer: ");
    scanf_s("%d", &number);

    if (choice == 1) {
        int square = number * number;
        printf("%d kwadrateren is %d\n", number, square);
    }
    else if (choice == 2) {
        int cube = number * number * number;
        printf("%d 3emachtsheffen is %d\n", number, cube);
    }
    else {
        printf("Ongeldige optie\n");
    }

    return 0;
}