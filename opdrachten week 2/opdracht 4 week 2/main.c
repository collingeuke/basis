#include <stdio.h>

int main() {
    char charcter;
    printf("Geef een karakter: ");
    scanf(" %c", &charcter);
    int index = charcter - 'a';
    printf("De index van het karakter is: %d\n", index);
    return 0;
}