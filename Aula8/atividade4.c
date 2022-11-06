/*
Faça um programa que calcule e mostre  a média  bimestral da turma. O usuário deve informar a quantidade de notas, bem como cada nota.
*/
#include <stdio.h>
#include <stdlib.h>
int main (void){
	int contador = 0;
	float somatorio = 0;
	float numero = 0;
	float media;
		
	while (numero >= 0){
		printf("Digite uma nota: ");
		scanf("%f",  &numero);
		fflush(stdin);
		
		if (numero >= 0){
			somatorio = somatorio + numero;
			contador = contador + 1;
		}
	}
			media = somatorio / contador ; 
	printf("A quantidade de valores lidos foi: %d \n", contador);
	printf("O somatorio foi: %f \n", somatorio);
	printf("A media foi: %f \n", media);
	return 0;
}
