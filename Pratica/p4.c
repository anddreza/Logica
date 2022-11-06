/*
Chico tem 1,50 metro e cresce 2 cent�metros por ano, enquanto Z� tem 1,10 metro e cresce 3 cent�metros por ano. 
Construa um algoritmo que calcule e imprima quantos anos ser�o necess�rios para que Z� seja maior que Chico.

*/
#include <stdio.h>
#include <stdlib.h>

int main (void){
	float chico = 1.5, ze = 1.1;
	int i = 0;
	
	while (chico >= ze){
		chico += 0.02;
		ze += 0.03;
		i++;	
	}
	printf("Anos necessarios: %d", i);
}
