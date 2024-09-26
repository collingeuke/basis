#include <stdio.h>

main()
{

	float a, b, c, d, e, f, g;		


	printf_s("geef een cijfer\n");
	 scanf_s("%f", &a);
	printf_s("geef een cijfer\n");	
	 scanf_s("%f", &b);
	printf_s("geef een cijfer\n");	
	 scanf_s("%f", &c);
	printf_s("geef een cijfer\n");	
	 scanf_s("%f", &d);
	printf_s("geef een cijfer\n");	
	 scanf_s("%f", &e);
	printf_s("geef een cijfer\n");	
	 scanf_s("%f", &f);

	 g = (a + b + c + d + e + f) / 6; 

	 if (g >= 5.5) {
		 printf_s("het gemiddelde is %f, het is voldoende", g);	
	 }
	 else 
	 {
		 printf_s("onvoldoende het gemiddelde was %f", g);		
	 }

}