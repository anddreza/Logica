/*
5. Construa um algoritmo que leia um vetor de 15 palavras e 
mostre-os na ordem inversa.
R.:
*/
#include <stdio.h>
#include <stdlib.h>

#define TAM 15

int main (void){
	// vari�veis
	char p[TAM][50]; // char nome[50]
	int i;
	
	// entrada
	for(i=0;i<TAM;i++){
		printf("Digite %i palavra: ",i+1);
		gets(p[i]);
		fflush(stdin);
	}
	
	// sa�da
	for(i=TAM-1;i>=0;i--){
		printf("%s\n",p[i]);
	}
	
	return 0;
}
