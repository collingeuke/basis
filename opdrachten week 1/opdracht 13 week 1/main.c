#include <stdio.h>
#include <math.h>

int main()
{
	int kwadraat;
	int a;
	printf_s("geef een getal\n");
		scanf_s("%d", &a);

		kwadraat = a * a;

	printf_s("het kwadraat is %d", kwadraat);	

}