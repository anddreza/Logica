/*
4. Construa um algoritmo que leia um vetor de 10 caracteres, e
diga quantas consoantes foram lidas. Imprima as consoantes.
R.:
*/
#include <stdio.h>
#include <stdlib.h>

int main(void){
	// variáveis
	char v[10], c[10];
	int qtd=0, i;
	
	// entrada
	for(i=0;i<10;i++){
		printf("Digite %i caracter: ",i+1);
		scanf("%c",&v[i]);
		fflush(stdin);
	}
	
	// processamento
	for(i=0;i<10;i++){
		if(v[i]>='a' && v[i] <='z' ||  v[i]>='A' && v[i]<='Z'){
			switch(v[i]){
				case 'a': case 'e': case 'i': case 'o': case 'u':
				case 'A': case 'E': case 'I': case 'O': case 'U':
					
					break;
				default:
					c[qtd]=v[i];
					qtd++;
			}
		}
	}
	// saída
	printf("A quantidade de consoante e: %i\n",qtd);
	printf("A consoantes sao: ");
	for(i=0;i<qtd;i++){
		printf("%c, ",c[i]);
	}
	
	return 0;
}
