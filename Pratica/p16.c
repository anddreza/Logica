/*
Escreva  um  algoritmo  em  Scilab  que  receba  dez  n�meros  do  usu�rio  e  imprima  a metade de cada n�mero.
*/
#include <stdio.h>
#include <stdlib.h>

int main (void){
	float i = 1, r, a;
	
	for (i = 1; i < 11; i++){
		
	printf("Digite um numero: ");
	scanf("%f", &a);
	fflush(stdin);
	
	r = a / 2; 
		
		printf("A metade do numero e: %.2f \n", r);
	}

}
	
