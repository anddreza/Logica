/*
Escreva  um  algoritmo  em  Scilab  que  imprima  todos  os  números  pares  do  intervalo fechado de 1 a 100
*/
#include <stdio.h>
#include <stdlib.h>

int main (void){
	int i;
	
	for (i = 1; i  < 101; i++){
		if (i % 2 == 0){
		
		printf("No %i \n", i);
		}
	} 
}
