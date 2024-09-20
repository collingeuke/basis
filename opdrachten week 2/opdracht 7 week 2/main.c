#include <stdio.h>

main()
{

	int a, b;
	printf_s("geef een interger\n");
	scanf_s("%d", &a);
	printf_s("geef een interger\n");	
	scanf_s("%d", &b);
	if (a % b) {
		printf_s("waar");
	}
	else {
		printf_s("niet waar");
	}
	



}