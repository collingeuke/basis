#include <stdio.h>
#include <math.h>
float a = 8.2;


int main() {
	a = sqrt(a);	
	for (int i = 0; i < 10000; i++) {
		printf("%f\n"), sqrt(i);
	}	
}