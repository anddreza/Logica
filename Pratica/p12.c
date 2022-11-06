/*Escreva  um  algoritmo  em  Scilab  que  imprima  todos  os  números  múltiplos  de  5,  no intervalo fechado de 1 a 500. */

#include <stdio.h>
#include <stdlib.h>

int main (void){
	int i;
	
	for (i = 1; i  < 501; i++){
		if (i % 3 == 0){
		
		printf("No %i \n", i);
		}
	} 
}
