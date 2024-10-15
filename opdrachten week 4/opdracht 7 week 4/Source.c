#include <stdio.h>

int main() {
    int n;
    int a;
    printf_s("Voer een getal in: ");    
    scanf_s("%d", &n);
    a = priem(n);
    if (a == 1) {
        printf_s("het is een priemgetal");
    }
    else
    {
        printf_s("het is geen priemgetal");
    }
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
