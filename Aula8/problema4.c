/*
Problema: Como imprimir de 10 até 1 em tela? 
*/
#include <stdio.h>
#include <stdlib.h>

int main (void){
	int i;
	i = 1;	
	do{
		printf("%i\n", i);
		i++;
	} while(i <= 10);
	
	return 0;
}
