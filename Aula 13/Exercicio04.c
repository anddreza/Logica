/*
4. Construa um algoritmo que leia um vetor de 10 caracteres, e diga quantas consoantes 
foram lidas. Imprima as consoantes.
R.:
*/
#include <stdio.h>
#include <stdlib.h>

int main(void){
	// Variáveis?
	char c[10];
	int i, cont=0;
	
	// Entrada de dados
	for(i=0;i<10;i++){
		printf("Digite o %i caracter: ",i+1);
		scanf("%c",&c[i]);
		fflush(stdin);
	}
	
	// Processamento e Saída e dados
	printf("\nA consoantes sao: ");
	for(i=0;i<10;i++){
		if(c[i]>='A' && c[i]<='Z'){
			c[i]+=32;
		}
		if(c[i]>= 'a' && c[i]<='z'){
			if(c[i]=='a' || c[i]=='e' || c[i]=='i' || c[i]=='o' || c[i]=='u'){
			}else{
				printf("%c, ",c[i]);
				cont++;
			}
		}
	}
	printf("\nA quantidade de consoantes e %i\n",cont);
	
	return 0;
}
