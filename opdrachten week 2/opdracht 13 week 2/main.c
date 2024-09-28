#include <stdio.h>

static int laatste_cijfer_gelijk(int num1, int num2) {
    int laatste_cijfer_num1 = num1 % 10;
    int laatste_cijfer_num2 = num2 % 10;

    if (laatste_cijfer_num1 == laatste_cijfer_num2) {
        return 1;
    }
    else {
        return 0;
    }
}

int main() {
    int num1, num2;

    printf_s("Voer het eerste getal in: ");
    scanf_s("%d", &num1);
    printf_s("Voer het tweede getal in: ");
    scanf_s("%d", &num2);

    if (laatste_cijfer_gelijk(num1, num2)) {
        printf("De getallen %d en %d hebben het laatste cijfer gelijk.\n", num1, num2);
    }
    else {
        printf("De getallen %d en %d hebben het laatste cijfer niet gelijk.\n", num1, num2);
    }

    return 0;
}