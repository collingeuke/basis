#include <stdio.h>

main()
{
	char a;
	printf_s("geef een letter\n");
	scanf_s("%c", &a);
	if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u') {
		printf_s("het is een klinker");	
	}
	else {
		printf_s("het is een medeklinker");	
	}



}