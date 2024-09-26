#include <stdio.h>

int main() {
    int number = 0; 

    while (number <= 200) { 
        if (number % 2 != 0) { 
            number++; 
            continue; 
        }
        printf("%d\n", number); 
        number++; 
    }

    return 0;
}