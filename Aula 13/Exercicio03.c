/*
3. Construa um algoritmo que leia um vetor de 10 n�meros reais e mostre-os na ordem inversa.
R.:
*/
#include <stdio.h>
#include <stdlib.h>

int main(void){
	// Vari�veis?
	float numeros[10];
	int i;
	
	// Entrada de dados
	for(i=0;i<10;i++){
		printf("Digite o numero %i: ",i+1);
		scanf("%f",&numeros[i]);
		fflush(stdin);
	}
	
	// Sa�da de dados
	printf("\nOs numeros sao: ");
	for(i=9;i>=0;i--){
		printf("%f, ",numeros[i]);
	}
	
	return 0;
}
