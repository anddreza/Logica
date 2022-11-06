
#include <stdio.h>
#include <stdlib.h>

int main (void){
	
	int n1, n2;
	
	printf("Digite um numero: ");
	scanf("%d \n", &n1);
	fflush(stdin);
	
	printf("Digite outro numero: ");
	scanf("%d \n", &n2);
	fflush(stdin);
	
	for (n1 = 1; n1 < n2; n1++){
		if (n1 %2 == 0){
			printf("%d \n", n1);
		}
	}	
	return 0;
}
