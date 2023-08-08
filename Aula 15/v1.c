/*
Construa um algoritmo que leia um vetor de 10 números inteiros e mostre a
soma dos números.
*/
#include <stdio.h>
#include <stdlib.h>

int main(void){
	int j[5], i, soma = 0;
	
	for (i = 0; i <= 4; i++){
		printf("Digite um numero");
		scanf("%i", &j[i]);
		fflush(stdin);
		soma += j[i];
	}
	
	printf("A soma dos numeros e %i", soma);
	return 0;
}
