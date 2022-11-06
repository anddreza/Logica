

#include <stdio.h>
#include <stdlib.h>

int main (void){
	// variaveis
	float n1, n2;
	
	// entrada
	printf("Digite n1: ");
	scanf("%i", &n1);
	fflush(stdin);
	
	printf("Digite n2: ");
	scanf("%f", &n2);
	fflush(stdin);
	
	// processamento
	print("%f + %f = %f\n", n1, n2, n1 + n2 );
	
	return 0;
}
