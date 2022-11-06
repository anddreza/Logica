#include <stdio.h>
#include <stdlib.h>

int main (void){
	
	float a, b, c, d, e;
	
	printf("Nota 1:");
	scanf("%f", &a);	

	printf("Nota 2:");
	scanf("%f", &b);	

	printf("Nota 3:");
	scanf("%f", &c);	

	printf("Nota 4:");
	scanf("%f", &d);	

	e = (a + b + c + d)/4;
	
	printf("A media e %.2f\n", e);
	
	return 0;
}
