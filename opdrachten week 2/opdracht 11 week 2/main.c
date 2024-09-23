#include <stdio.h>
#include <math.h>

int main() {
    int n;

    printf_s("Geef een positief getal: ");
    scanf_s("%d", &n);

    for (int i = 0; i <= n; i++) {
        double sqrt_i = sqrt((double)i);
        int int_sqrt_i = (int)sqrt_i;
        printf_s("De vierkantswortel van %d is %f\n", i, sqrt_i);
    }

    return 0;
}