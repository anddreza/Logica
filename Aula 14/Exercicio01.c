/*
1. Construa um algoritmo que leia um vetor de 10 números
inteiros e mostre a soma dos números.
R.:
*/
#include <stdio.h>
#include <stdlib.h>

int main(void){
	// variáveis
	int i, v[10], s=0;
	
	// entrada
	for(i=0;i<10;i++){
		printf("Digite %i numero: ",i+1);
		scanf("%i",&v[i]);
	}
	
	// processamento
	for(i=0;i<10;i++){
		s+=v[i];
	}
	
	// saída
	printf("Soma e %i\n",s);
	
	return 0;
}
