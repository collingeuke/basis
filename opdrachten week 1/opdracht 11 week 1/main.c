#include <stdio.h>
#include <math.h>

main()
{

	int a;
	int b;

	printf_s("geef 2 intergers om de volgende anier te deen 'a / b': ");
	scanf_s("%d %d", &a, &b);
	float ggd = (a) / b;
	float over = a % b;	

	printf_s("\n De grootste gemene deler is. %.0f of en het rest is %.0f", ggd, over);	




}