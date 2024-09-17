#include <stdio.h>

main()
{
	int a, b, c;


	printf_s("geef een getal\n");
	scanf_s("%d,", &a);
	printf_s("geef een getal\n");
	scanf_s("%d,", &b);
	printf_s("geef een getal\n");
	scanf_s("%d,", &c);
	if (a >= b && a>=c) {
		printf("The largest value is: %d\n", a);
	}
	else if (b >= a && b >= c) {
		printf("The largest value is: %d\n", b);
	}
	else {
		printf("The largest value is: %d\n", c);	
	}

	return 0;
}