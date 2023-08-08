/*Escrever um programa que incremente uma variável iniciando em 0 e terminando em 200. A cada passagem pela variável, se o valor for par, este deverá ser acumulado em uma variável e, se for impar, acumulado em outra.*/
#include <stdio.h>
#include <stdlib.h>

int main(){
	int a, b = 0, c = 0, i;
	for (i = 0; i < 201; i++){
		if (i%2 == 0){
			//printf("%i \n", i);
			b += 1;
		} else {
			//printf("%i \n", i);
			c += 1; 
		}
	}
	printf("Par: %i \n", b);
	printf("Impar: %i", c);
}