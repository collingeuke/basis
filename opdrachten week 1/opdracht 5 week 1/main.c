#include <stdio.h>	

main()
{
	int a;	
	int b;

	printf_s("geef een getal\n");	
		scanf_s("%d,", &a);	
	printf_s("geef een getal\n");
	scanf_s("%d,", &b);	

	if (a == b) {
		printf_s("de getallen zijn gelijk");
	}
	else {
		printf_s("de getallen zijn niet gelijk");
	}


}
