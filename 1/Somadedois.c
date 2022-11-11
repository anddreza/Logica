#include <stdio.h>
#include <stdlib.h>

int main (void){
	float a, b;
	
	printf("Digite a: ");
	scanf("%f", &a);
	fflush(stdin);
	
	printf("Digite b:  ");
	scanf("%f", &b);
	fflush(stdin);
	
	printf("%.2f + %.2f = %.2f\n", a, b, a + b);
	
	return 0;
		
}
