#include <stdio.h>

int main()
{
	int a = 214783647;
	int getal1;	
	int getal2;
	long long samen;

	printf_s("geef een positief getal\n");
	scanf_s("%d", &getal1);
	printf_s("geef een positief getal\n");
	scanf_s("%d", &getal2);	

	samen = (long long)getal1 * getal2;

	if (samen >= a)
		printf_s("overflow");	
	else 
		printf_s("%lld", samen);	
		
}