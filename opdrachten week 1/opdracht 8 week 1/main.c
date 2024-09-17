#include <stdio.h>

main()
{
	float BTW;
	float PRIJS;
	printf_s("Geef een prijs excl.\n");

	scanf_s("%f", &BTW);	

	PRIJS = BTW * 21 / 100 + BTW;

	printf_s("De prijs met btw is %f", PRIJS);




}