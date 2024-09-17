#include <stdio.h>

int main()
{
	int a;
	int b;
	int c;

	printf_s("geef 3 intergers\n");
	scanf_s("%d %d %d", &a, &b, &c);
	int avarage = (a + b + c) / 3;

	printf_s("de gemiddelde waarde is van die drie is: %d\n", avarage);


}