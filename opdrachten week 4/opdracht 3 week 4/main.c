#include <stdio.h>

void Swap(int* a, int* b) {
	int temp = *a;
	*a = *b;	
	*b = temp;	

	
}

main()
{
	int a = 1;
	int b = 10;
	int resultaat[2];

		Swap(&a, &b);	


		printf_s("a = %d, b = %d", a, b);

	 


}

