/*
3. Desenvolver um algoritmo que leia a altura de 15 pessoas. Este programa deverá calcular e
mostrar :
a. A menor altura do grupo;
b. A maior altura do grupo; 
*/
#include <stdio.h>
#include <stdlib.h>
int main (void){
	// variáveis?
	float numero, maior, menor, i;	
	for(i=1;i<=5;i++){
		printf("Digite um numero: ");
		scanf("%f",&numero);
		fflush(stdin);
		
		if(i==1){
			maior=numero;
			menor=numero;
		}else{
			if(maior<numero){
				maior=numero;
			}
			if(menor>numero){
				menor=numero;
			}
		}
	}
	printf("Maior altura: %f \n", maior);
	printf ("Menor altura: %f \n", menor);
	return 0;			
	
}
