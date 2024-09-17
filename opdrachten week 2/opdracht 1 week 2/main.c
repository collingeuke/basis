#include <stdio.h>

main()
{
	printf("berekening van de grootte van enkele fundamentele typen.\n\n");
	printf("                 char:%3d byte \n", (int)sizeof(char));
	printf("                 short:%3d bytes\n", (int)sizeof(short));
	printf("                 int:%3d bytes\n", (int)sizeof(int));
	printf("                 long:%3d bytes\n", (int)sizeof(long));
	printf("                 unsigned:%3d bytes\n", (int)sizeof(unsigned));
	printf("                 float:%3d bytes\n", (int)sizeof(float));
	printf("                 double:%3d bytes\n", (int)sizeof(double));
	printf("                 long double:%3d bytes\n", (int)sizeof(long double));	
	

}