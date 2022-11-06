/*
5. Construir um algoritmo que calcule a média aritmética de vários valores inteiros positivos, lidos externamente. 
O final da leitura acontecerá quando for lido um valor negativo.
*/

#include <stdio.h>
#include <stdlib.h>

int main (void){
	float numero = 0, somatorio = 0; 
	int contador = 0;
	float media;
	
	while (numero >= 0){
		printf("Digite um numero: ");
		scanf("%f", &numero);
		fflush(stdin);			
	
	if (numero >= 0){
		somatorio = somatorio + numero;
		contador = contador + 1;
		}
}
	media = somatorio / contador;
	printf("A media dos valores digitados foi %.2f", media);
	
	return 0;
}
