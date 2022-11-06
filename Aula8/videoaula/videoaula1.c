#include <stdio.h>
#include <stdlib.h>

/*
Escreva um programa em C que efetue a leitura sucesssiva de valores numericos
e apresente no final o somatório, a media e a quantidade de valores lidos. O programa
deve continuar lendo os numeros ate que seja fornecido um numero negativo. Esse
numero negativo nao deve entrar os calculos 
*/
int main (int argc, char *argv[]){
int contador = 0;
float somatorio = 0;
float numero = 0;
float media;

	while (numero >= 0){
		printf("Digite um valor: ");
		scanf("%f",  &numero);
		
		if(numero > 0){
			somatorio = somatorio + numero;
			contador = contador + 1;
		}
		
		
	
	}
		media = somatorio / contador ; 
		// somatorio divido pelo numero de elementos 
	printf("A quantidade de valores lidos foi: %d \n", contador);
	printf("O somatorio foi: %f \n", somatorio);
	printf("A media foi: %f \n", media);
	return 0;
}









