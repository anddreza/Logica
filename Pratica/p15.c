/*
Escreva  um  algoritmo  em  Scilab  que  imprima  o  quadrado  dos  números no  intervalo fechado de 1 a 20. 
*/

#include <stdio.h>
#include <stdlib.h>

int main (void){
	int i, r;
	
		for (i = 1; i  < 21; i++){
			r = i * i;
			printf("O quadrado e: %i \n", r);
		}
		return 0;
	}
			
