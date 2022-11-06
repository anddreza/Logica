#include <stdio.h>
#include <stdlib.h>
int main (void){
	int soma, c;
	
	soma = 0;
	
	for (c = 1; c < 100; c++){
		printf("%i \n"c);
		soma = soma + c;
		
	}
	printf("Soma e %i \n", soma);
	
	return 0;
}
