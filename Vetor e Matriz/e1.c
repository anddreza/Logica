/*
PROBLEMA: Construa um algoritmo que leia 5 numeros reais
e imprime de forma invertida da entrada de dados
*/
#include <stdio.h>
#include <stdlib.h>

int main(void){
	// vari�veis
	float n[5];
	int i;
	
	// entrada
	for(i=0;i<=4;i++){
		printf("Digite %i numero: ",i+1);
		scanf("%f",&n[i]);
		fflush(stdin);
	}
	
	// sa�da
	printf("Os numeros sao: ");
	for(i=4;i>=0;i--){
		printf("%f, ",n[i]);
	}
}

