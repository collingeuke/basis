#include <stdio.h>
#include <math.h>

main()
{
	int ohm;
	int spanning;
	int stroom;

	printf_s("geef een weerstandswaarde\n");
		scanf_s("%d", &ohm);
	printf_s("geef een spanningswaarde\n");
		scanf_s("%d", &spanning);

		stroom = ohm * spanning;
			printf("de stroom is %d Ampere", stroom);




}