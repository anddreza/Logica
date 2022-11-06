/*
Faça um programa que calcule e mostre a soma dos números pares entre 100 e
200 (inclusive). O usuário deve ter a opção de repetir quantas vezes quiser esta
operação.
*/

#include <stdio.h>
#include <stdlib.h>

int main (void){
	int i, soma=0;
	char opcao;
	
	do{
		for(i=100; i <= 200; i++){
			if(i % 2 == 0) soma += 1;
			}
			printf("A soma e %i \n", soma); 
			printf("\n Deseja sair? (s/n): ");
			scanf("%c", &opcao);
			fflush(stdin);
		} while (opcao == 's');
	return 0;
}
