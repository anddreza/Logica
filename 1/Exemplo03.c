/*
3.	Fa�a um programa que leia dez n�meros inteiros e calcule 
a diferen�a entre o maior e o menor n�mero do conjunto.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){
	// vari�veis?
	int numero, maior, menor, i, diferenca;
	
	// entrada
	for(i=1;i<=10;i++){
		printf("Digite %i numero: ",i);
		scanf("%i",&numero);
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
	
	// processamento
	diferenca=maior-menor;
	
	// sa�da
	printf("A diferenca e %i\n",diferenca);
	
	return 0;
}
