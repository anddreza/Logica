/*
1. Construa um algoritmo que leia um vetor de 10 n�meros
inteiros e mostre a soma dos n�meros.
R.:
*/
#include <stdio.h>
#include <stdlib.h>

int main(void){
	// vari�veis
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
	
	// sa�da
	printf("Soma e %i\n",s);
	
	return 0;
}
