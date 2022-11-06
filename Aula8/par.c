#include <stdio.h>
#include <stdlib.h>

int main (void){
	int n1, n2, i;
	
	printf("Digite um numero: ");
	scanf("%i", &n1);
	fflush(stdin);
	
	
	printf("Digite outro numero: ");
	scanf("%i", &n2);
	fflush(stdin);	
	
	for(n1 = 1; n1 < n2; n1++){
		if (n1 % 2 == 0){
			printf("%i \n", n1);
		}
	}
	
	
	return 0;
}
