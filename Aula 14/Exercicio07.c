/*
7. Construa um algoritmo que leia duas matrizes 5x5 e gere uma
terceira matriz com a subtração dos elementos correspondentes
de a e b.
R.:
*/
#include <stdio.h>
#include <stdlib.h>

#define TAM 5

int main(void){
	// variáveis
	int a[TAM][TAM], b[TAM][TAM], s[TAM][TAM], i, j;
	
	// entrada
	printf("Dados da matriz A:\n");
	for(i=0;i<TAM;i++){
		for(j=0;j<TAM;j++){
			printf("Digite numero [%i][%i]: ",i,j);
			scanf("%i",&a[i][j]);
		}
	}
	printf("\nDados da matriz B:\n");
	for(i=0;i<TAM;i++){
		for(j=0;j<TAM;j++){
			printf("Digite numero [%i][%i]: ",i,j);
			scanf("%i",&b[i][j]);
		}
	}
	
	// processamento
	for(i=0;i<TAM;i++){
		for(j=0;j<TAM;j++){
			s[i][j]=a[i][j]-b[i][j];
		}
	}
	
	// saída
	printf("\nA matriz subtracao e :\n");
	for(i=0;i<TAM;i++){
		for(j=0;j<TAM;j++){
			printf("%i\t",s[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}

