/*
7.	Fa�a um programa que gere a tabuada de 1 a 10 de qualquer 
n�mero. O usu�rio deve informar de qual n�mero deseja ver a 
tabuada.
*/
#include <stdio.h>
#include <stdlib.h>

int main(void){
	// vari�veis?
	int i, tabuada;
	
	// entrada
	printf("Digite a tabuada: ");
	scanf("%i",&tabuada);
	fflush(stdin);
	
	// sa�da
	for(i=1;i<=10;i++){
		printf("%i x %i = %i\n",tabuada,i,tabuada*i);
	}

	return 0;	
}
