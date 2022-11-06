
/**/

#include <stdio.h>
#include <stdlib.h>

int main (void){
	
	float p;
	
	printf("Digite um numero: ");
	scanf("%f", &p);
	
	if (p %2 == 0){
		printf("Se o numero e par tem que virar impar %f", p + 1);
	} else {
		printf("Se o numero e impar tem que virar par %f", p - 1);
	}
	
	return 0;
} 
