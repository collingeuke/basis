#include <stdio.h>

int main() {
    int I = 1, V = 5, X = 10, L = 50, C = 100, D = 500, M = 1000;
    int getal;

    printf_s("geef getal: ");
    scanf_s("%d", &getal);

    int duizenden = getal / 1000;
    int honderden = (getal % 1000) / 100;
    int tientallen = (getal % 100) / 10;
    int enkelen = getal % 10;

    printf_s("Het Romeinse getal is: ");

    // Duizenden
    for (int i = 0; i < duizenden; i++) {
        printf_s("M");
    }

    // Honderden
    if (honderden == 9) {
        printf_s("CM");
    }
    else if (honderden >= 5) {
        printf_s("D");
        for (int i = 0; i < honderden - 5; i++) {
            printf_s("C");
        }
    }
    else if (honderden == 4) {
        printf_s("CD");
    }
    else {
        for (int i = 0; i < honderden; i++) {
            printf_s("C");
        }
    }

    // Tientallen
    if (tientallen == 9) {
        printf_s("XC");
    }
    else if (tientallen >= 5) {
        printf_s("L");
        for (int i = 0; i < tientallen - 5; i++) {
            printf_s("X");
        }
    }
    else if (tientallen == 4) {
        printf_s("XL");
    }
    else {
        for (int i = 0; i < tientallen; i++) {
            printf_s("X");
        }
    }

    // Enkelen
    if (enkelen == 9) {
        printf_s("IX");
    }
    else if (enkelen >= 5) {
        printf_s("V");
        for (int i = 0; i < enkelen - 5; i++) {
            printf_s("I");
        }
    }
    else if (enkelen == 4) {
        printf_s("IV");
    }
    else {
        for (int i = 0; i < enkelen; i++) {
            printf_s("I");
        }
    }

    printf_s("\n");

    return 0;
}