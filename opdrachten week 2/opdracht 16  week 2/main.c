#include <stdio.h>

int binaire_naar_decimaal(char* binaire) {
    int decimaal = 0;
    int macht = 0;

    for (int i = strlen(binaire) - 1; i >= 0; i--) {
        if (binaire[i] == '1') {
            decimaal += 1 << macht;
        }
        macht++;
    }

    return decimaal;
}

int main() {
    char binaire[100];

    printf("Voer een binaire reeks in: ");
    scanf_s("%99s", binaire, 100);

    int decimaal = binaire_naar_decimaal(binaire);

    printf("Het decimale equivalent is: %d\n", decimaal);

    return 0;
}