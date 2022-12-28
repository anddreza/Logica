/*
8. Construa um algoritmo que leia uma matriz quadrada de ordem 3. 
Leia uma constante K, diminui a diagonal principal por esta constante
e imprima a matriz diminuida.
R.:
*/
#include <stdio.h>
#include <stdlib.h>

#define TAM 3

int main(void){
	// variáveis
	int m[TAM][TAM], k, i, j;
	
	// entrada
	for(i=0;i<TAM;i++){
		for(j=0;j<TAM;j++){
			printf("Digite numero [%i][%i]: ",i,j);
			scanf("%i",&m[i][j]);
		}
	}
	printf("Digite o valor para k: ");
	scanf("%i",&k);
	
	// processamento
	for(i=0;i<TAM;i++){
		m[i][i]-=k;
	}
	
	// saída
	for(i=0;i<TAM;i++){
		for(j=0;j<TAM;j++){
			printf("%i\t",m[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
