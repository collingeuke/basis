#include <stdio.h>


int CijferSwap(int n)
{
    int resultaat = 0;
    while (n > 0)
    {
        resultaat = resultaat * 10 + n % 10;
        n /= 10;
    }
    return resultaat;
}
int main()
{
    int getal = 123;
    int omgedraaidGetal = CijferSwap(getal);
    printf("%d\n", getal);
    printf("%d\n", omgedraaidGetal); // Output: 321
    return 0;
}