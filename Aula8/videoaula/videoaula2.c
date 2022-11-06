/*
Escreva um programa em C que efetue a leitura sucessiva de valores numericos e apresente
no final o maior e o menos numero que foram fornecidos. O programa deve continuar lendo os
numeros ate que seja fornecido um numero negativo, que por sua vez não 
deve ser apresentado como menor numero  

*/

#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]){
	int contador = 0;
	int numero = 0;
	int maior = - 11111;
	int menor = 99999; 
	
	while (numero >= 0 ){
		
		printf("Digite um valor: ");
		scanf("%d",  &numero);
		
		if(numero > 0){

			if (maior < numero)
				maior = numero;
			if (menor > numero) 
				menor = numero;
			}	
			contador = contador + 1;		
			}
		
		}
				
	printf("Maior numero: %f \n", maior);
	printf("Menor numero: %f \n", menor);

	return 0;
}
