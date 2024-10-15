#include <stdio.h>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int kleinsteSomDeler(int n) {
    int result = 1;
    for (int i = 2; i <= n; i++) {
        result = lcm(result, i);
    }
    return result;
}

int main() {
    int n;
    printf("Voer een getal in: ");
    scanf_s("%d", &n);

    int result = kleinsteSomDeler(n);
    printf("Het kleinste getal dat deelbaar is door alle getallen van 1 t/m %d is: %d\n", n, result);

    return result;
}
