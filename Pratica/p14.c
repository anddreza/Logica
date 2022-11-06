/*
Escreva um algoritmo em Scilab que imprima os 100 primeiros números ímpares. 
*/

#include <stdio.h>
#include <stdlib.h>

int main (void){
	int i;
	
	for (i = 0; i  < 102; i++){
		if (i % 2 == 1){
		
		printf("No %i \n", i);
		}
	} 
}
