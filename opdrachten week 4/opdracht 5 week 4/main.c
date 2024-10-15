#include <stdio.h>

int Som37(int n) {
    int sum = 0;
    for (int i = 0; i <= n; i++) {
        if (i % 3 == 0 && i % 7 == 0) {
            sum += i;
        }
    }
    return sum;
}

int main() {
    int n = 25; // example input
    int result = Som37(n);
    printf_s("The sum of numbers divisible by 3 and 7 from 0 to %d is %d\n", n, result);
    return 0;
}