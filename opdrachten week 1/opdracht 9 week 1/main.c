#include <stdio.h>


main()
{

	float km;
	double m;
	printf_s("geef een snelheid in km/h\n");
	scanf_s("%f", &km);

	m = km * 1000 / 3600;

	printf_s("de snelheid is %f m/s", m);	


}