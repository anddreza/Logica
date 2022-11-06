/* Faca um programa que peça um numero e imprima se e o numero e par ou impar */

#include <stdio.h>
#include <stdlib.h>

int main (void){
	int p;
	
	printf("Digite um numero: ");
	scanf("%i", &p);
	fflush(stdin);
	
	if (p %2 == 0) {
		printf("Par\n");
	} else {
		printf("Impar\n");
	}
	
	return 0;
}
