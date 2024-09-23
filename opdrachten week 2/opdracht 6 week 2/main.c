#include <stdio.h>

int main() {
    int i = 0;

    while (1) {
        i++;

        // Check for overflow
        if (i < 0) {
            break;
        }
    }

    return 0;
}