#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, x1, x2;

    // Vraag de gebruiker om de waarden van a, b en c in te voeren
    printf_s("Voer de waarde van a in: ");
    scanf_s("%lf", &a);
    printf_s("Voer de waarde van b in: ");
    scanf_s("%lf", &b);
    printf_s("Voer de waarde van c in: ");
    scanf_s("%lf", &c);

    // Bereken de twee oplossingen van x
    double discriminant = b * b - 4 * a * c;
    if (discriminant >= 0) {
        x1 = (-b + sqrt(discriminant)) / (2 * a);
        x2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("De twee oplossingen van x zijn: x1 = %f, x2 = %f\n", x1, x2);
    }
    else {
        printf("Er zijn geen reële oplossingen voor x.\n");
    }

    return 0;
}