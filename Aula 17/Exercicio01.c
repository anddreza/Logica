/*
1. Faça um programa que leia um número, passe este número como 
parâmetro para uma função que retorne 0 se o número for par ou 
1 se o número for ímpar.
R.:
*/
#include <stdio.h>
#include <stdlib.h>

// prototipo da função
int valida(int n);

int main (void){
	// variáveis
	int numero;
	
	// entrada
	printf("Digite o numero: ");
	scanf("%i",&numero);
	
	// processamento / saída
	if(valida(numero)){
		printf("Impar\n");
	}else{
		printf("Par\n");
	}
	
	return 0;
}

// função valida
int valida(int n){
	if(n%2==0){
		return 0;
	}else{
		return 1;
	}
}
