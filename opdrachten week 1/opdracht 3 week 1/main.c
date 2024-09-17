#include <stdio.h>

main()
{
	int a, b;
	

	printf_s("geef twee getallen\n");	
	scanf_s("%d,", &a);
	scanf_s("%d,", &b);	
	if (a >= b) {	
		printf("The largest value is: %d\n", a);	
	}
	else {
		printf("The largest value is: %d\n", b);	
	}
}