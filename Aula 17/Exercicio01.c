/*
1. Fa�a um programa que leia um n�mero, passe este n�mero como 
par�metro para uma fun��o que retorne 0 se o n�mero for par ou 
1 se o n�mero for �mpar.
R.:
*/
#include <stdio.h>
#include <stdlib.h>

// prototipo da fun��o
int valida(int n);

int main (void){
	// vari�veis
	int numero;
	
	// entrada
	printf("Digite o numero: ");
	scanf("%i",&numero);
	
	// processamento / sa�da
	if(valida(numero)){
		printf("Impar\n");
	}else{
		printf("Par\n");
	}
	
	return 0;
}

// fun��o valida
int valida(int n){
	if(n%2==0){
		return 0;
	}else{
		return 1;
	}
}
