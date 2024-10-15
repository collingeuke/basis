#include <stdio.h>

int main() {
    int n;
    int som = 0;
    printf_s("Voer een getal in: ");
    scanf_s("%d", &n);
    for (int i = 2; i <= n; i++)
    {
        if (priem(i))
        {
            som += i;
        }
    }
    printf_s("%d", som);
    return 0;
}



int priem(int n)
{
    int c = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            c++;
        }
        else
        {
            continue;
        }

    }
    if (c == 2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
