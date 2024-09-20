#include <stdio.h>

int main() {
    int teller = 0;
    while (1) {
        teller = teller + 1;
        printf("%d\n", teller);
        if (teller < 0) {
            break;
        }
    }
    return 0;
}