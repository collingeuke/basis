#include <stdio.h>

main()
{

	int n;
	int i = 1;

	printf_s("geef een getal\n");
		scanf_s("%d", &n);

		int som = 0;
		for (int i = 1; i <= n; i++) {
			som += i;	
		}

		printf("De som van 1 t/m %d is: %d\n", n, som);
		return 0;

}	