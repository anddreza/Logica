/*
5. Construa um algoritmo que leia um vetor de 15 palavras e mostre-os na ordem inversa.
R.:
*/
#include <stdio.h>
#include <stdlib.h>

int main (void){
	// Variáveis?
	char palavras[15][50];
	int i;
	
	// Entrada de dados?
	for(i=0;i<15;i++){
		printf("Digite %i\xA6 palavra: ",i+1);
		gets(palavras[i]);
		fflush(stdin);
	}
	
	for(i=14;i>=0;i--){
		printf("%i\xA6 = %s\n",i+1,palavras[i]);
	}
	return 0;
}

