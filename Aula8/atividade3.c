#include <stdio.h>
#include <stdlib.h>

int main (void){

	int numero = 0; 
	int m;
	int maior = - 11111;
	int menor = 99999; 
	int i=1;
	
	while (i < 10 ){
		
		printf("Digite um valor: ");
		scanf("%d",  &numero);
		
	//	numero = numero + 1;
		
		if(numero > 0){
			if (maior < numero)	maior = numero;
			if (menor > numero) menor = numero;
			}	
		
		 m = maior + menor;
	i++;
	}
	printf("Maior numero: %i \n", maior);
	printf("Menor numero: %i \n", menor);
	printf("A soma do maior com o menor numero e: %i \n" , m);
	
	return 0;

}
