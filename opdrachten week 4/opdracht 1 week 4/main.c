#include <stdio.h>

double gemiddeld(int a, int b, int c, int d) {
    return (a + b + c + d) / 4.0;
}

int main() {
    int a, b, c, d;
    printf_s("Enter four integers: ");
    scanf_s("%d %d %d %d", &a, &b, &c, &d);
    double result = gemiddeld(a, b, c, d);
    printf("The average is: %f\n", result);
    return 0;
}