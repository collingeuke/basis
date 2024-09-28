#include <stdio.h>

int fibonacci(int n) {
    int a = 0;
    int b = 1;
    int resultaat = 0;

    if (n == 0) {
        return 0;
    }
    else if (n == 1) {
        return 1;
    }
    else {
        for (int i = 2; i <= n; i++) {
            resultaat = a + b;
            a = b;
            b = resultaat;
        }
        return resultaat;
    }
}

int main() {
    int index;

    printf("Voer een index in: ");
    scanf_s("%d", &index);

    if (index < 0) {
        printf("De index moet een niet-negatief getal zijn.\n");
    }
    else {
        int resultaat = fibonacci(index);
        printf("Het Fibonacci-getal op index %d is: %d\n", index, resultaat);
    }

    return 0;
}