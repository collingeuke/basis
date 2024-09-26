#include <stdio.h>
#include <math.h>

main()
{

	int x;
	int n;

	printf_s("geef een getal:");
		scanf_s("%d", &x);
	printf_s("geef een getal:");
		scanf_s("%d", &n);	

		int resultaat = pow((int)x, (int)n);
		printf_s("de waarde van %d, tot de macht %d is: %d", x, n, resultaat);
	 

}