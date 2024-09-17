#include <stdio.h>

int main()
{
	int leeftijd;
	printf_s("Wat is je leeftijd?\n");
	scanf_s("%d", &leeftijd);
	leeftijd = 12 * leeftijd;
	printf_s("je leeftijd in maanden is %d", leeftijd);

}