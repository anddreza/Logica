/*
9.	Fa�a um programa que calcule e mostre a soma dos n�meros
pares entre 100 e 200 (inclusive). O usu�rio deve ter a op��o 
de repetir quantas vezes quiser esta opera��o.
*/
#include <stdio.h>
#include <stdlib.h>

int main(void){
	// vari�veis?
	char opcao;
	int i, soma=0;
	
	// c�digo
	do{
		for(i=100;i<=200;i++){
			if(i%2==0) soma+=i;
		}
		printf("A soma e %i\n",soma);
		printf("\nDeseja sair (s/n):");
		scanf("%c",&opcao);
		fflush(stdin);
	}while(opcao=='s');
	
	return 0;
}
