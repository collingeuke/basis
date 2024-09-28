#include <stdio.h>

int main() {
    int n;

    // Ask the user for the value of n
    printf("Enter the value of n: ");
    scanf_s("%d", &n);

    // Print the pattern
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}