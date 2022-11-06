/*
7.	Faça um programa que gere a tabuada de 1 a 10 de qualquer 
número. O usuário deve informar de qual número deseja ver a 
tabuada.
*/
#include <stdio.h>
#include <stdlib.h>

int main(void){
	// variáveis?
	int i, tabuada;
	
	// entrada
	printf("Digite a tabuada: ");
	scanf("%i",&tabuada);
	fflush(stdin);
	
	// saída
	for(i=1;i<=10;i++){
		printf("%i x %i = %i\n",tabuada,i,tabuada*i);
	}

	return 0;	
}
