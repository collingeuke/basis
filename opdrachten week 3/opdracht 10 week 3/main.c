#include <stdio.h>

main()
{

	int getal;

	printf_s("geef een getal: ");
	scanf_s("%d",&getal);

	int is_prime = 1;

	if  (getal <= 1) {
		is_prime = 0;	
	}
	else {
		for (int i = 2; i * i <= getal; i++) {
			if (getal % i == 0) {
				is_prime = 0;
				break;

			}
		}
	}

	if (is_prime) {
		printf_s("priemgetal");
	}
	else {
		printf("geen priem");
	}
	
}