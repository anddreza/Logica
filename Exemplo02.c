/*
2.	Fa�a um programa que pe�a dois n�meros inteiros e gere os 
n�meros pares que est�o no intervalo entre eles.
*/
#include <stdio.h>
#include <stdlib.h>

int main(void){
	// vari�veis?
	int n1, n2, i;
	
	// entrada?
	printf("Digite um numero: ");
	scanf("%i",&n1);
	fflush(stdin);
	printf("Digite outro numero: ");
	scanf("%i",&n2);
	fflush(stdin);
	
	// processamento e sa�da
	if(n1<n2){
		for(i=n1+1;i<n2;i++){
			if(i%2 == 0){
				printf("%i, ",i);
			}
		}
	}else if(n2<n1){
		for(i=n1-1;i>n2;i--){
			if(i%2 == 0){
				printf("%i, ",i);
			}
		}
	}else{
		printf("Nao tem intervalo\n");
	}
	
	return 0;
}
