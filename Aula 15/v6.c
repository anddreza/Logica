/*
6. Construa um algoritmo que leia duas matrizes 3x3 e gere uma 
terceira matriz com a soma dos elementos correspondentes de a e b.
R.:
*/
#include <stdio.h>
#include <stdlib.h>

int main(void){
	// variáveis
	int a[3][3], b[3][3], s[3][3], i, j;
	
	// entrada
	printf("Dados da matriz A:\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("Digite numero [%i][%i]: ",i,j);
			scanf("%i",&a[i][j]);
		}
	}
	printf("\nDados da matriz B:\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("Digite numero [%i][%i]: ",i,j);
			scanf("%i",&b[i][j]);
		}
	}
	
	// processamento
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			s[i][j]=a[i][j]+b[i][j];
		}
	}
	
	// saída
	printf("\nA matriz soma e :\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%i\t",s[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}


