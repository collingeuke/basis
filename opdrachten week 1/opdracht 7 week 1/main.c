#include <stdio.h>
#define M_PI 3.14159265358979323846

main()
{
	float radius;

	printf_s("geef de radius van een cirkel\n");
	scanf_s("%f,", &radius);
	float omtrek;	
	omtrek = radius * 2 * M_PI; 
	float oppervlakte;	
	oppervlakte = (radius * radius) * M_PI;
	
	printf_s("de omtrek van een cirkel met de radius: %f is %f en de oppervlakte is %f", radius, omtrek, oppervlakte);		


}