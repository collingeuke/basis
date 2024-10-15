#include <stdio.h>

int main() {
    int n;
    int a;
    printf_s("Voer een getal in: ");
    scanf_s("%d", &n);

    a = priem(n);
    printf_s("%d", a);
}


int priem(int n)
{
    int c = 0;
    int som = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            c++;
            if( c )
        }
        else
        {
            continue;
        }
        c % 2 == 0)
        
            som += i;
        
    }
  
    
    return som;

}
