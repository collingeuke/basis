#include <stdio.h>

int AantalKeer(int n) {
    int count = 0;
    for (int i = 1; i <= n; i++) {
        count++;
    }
    return count;
}

int main() {
    int n;
    printf_s("Geef een getal: ");
    scanf_s("%d", &n);
    int result = AantalKeer(n);
    printf_s("het wordt %d keer herhaalt.\n", result);
    return 0;
}