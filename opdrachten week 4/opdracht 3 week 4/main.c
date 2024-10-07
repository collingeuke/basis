#include <stdio.h>

void Swap(int* a, int* b) {
	int temp = a;
	a = b;	
	b = a;	

	
}

main()
{
	int a = 1;
	int b = 10;
	int resultaat[2];

		Swap(a, b, resultaat);	

		a = resultaat[0];
		b = resultaat[1];

		printf_s("%d, %d", a, b);

	 


}

