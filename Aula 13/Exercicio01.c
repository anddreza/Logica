/*
1. Construa um algoritmo que leia um vetor de 10 n�meros inteiros e mostre a soma dos n�meros.
R.:
*/
#include <stdio.h>
#include <stdlib.h>

int main(void){
	// Vari�veis?
	int numeros[10], soma=0, i;
	
	// Entrada de dados?
	for(i=0;i<10;i++){
		printf("Digite o numero %i: ",i+1);
		scanf("%i",&numeros[i]);
		fflush(stdin);
	}
	
	// Processamento?
	for(i=0;i<10;i++){
		soma+=numeros[i];
	}
	
	// Sa�da?
	printf("A soma e %i\n",soma);
	
	return 0;
}
