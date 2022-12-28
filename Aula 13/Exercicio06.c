/*
6. Construa um algoritmo que leia duas matrizes 3x3 e gere uma terceira matriz com a 
soma dos elementos correspondentes de a e b.
R.:
*/

#include <stdio.h>
#include <stdlib.h>

int main (void){
	// Variáveis?
	int a[3][3], b[3][3], c[3][3], linha, coluna;
	
	// Entrada de dados?
	printf("Dados da matriz A:\n\n");
	for(linha=0;linha<=2;linha++){
		for(coluna=0;coluna<=2;coluna++){
			printf("Digite (%i,%i): ",linha,coluna);
			scanf("%i",&a[linha][coluna]);
			fflush(stdin);
		}
	}
	
	printf("\nDados da matriz B:\n\n");
	for(linha=0;linha<=2;linha++){
		for(coluna=0;coluna<=2;coluna++){
			printf("Digite (%i,%i): ",linha,coluna);
			scanf("%i",&b[linha][coluna]);
			fflush(stdin);
		}
	}
	
	// Processamento
	for(linha=0;linha<=2;linha++){
		for(coluna=0;coluna<3;coluna++){
			c[linha][coluna] = a[linha][coluna] + b[linha][coluna];
		}
	}
	
	// Saída de dados
	printf("\n");
	for(linha=0;linha<=2;linha++){
		for(coluna=0;coluna<=2;coluna++){
			printf("%i\t",a[linha][coluna]);
		}
		printf("\n");
	}
	printf("\n+\n\n");
	for(linha=0;linha<=2;linha++){
		for(coluna=0;coluna<=2;coluna++){
			printf("%i\t",b[linha][coluna]);
		}
		printf("\n");
	}
	printf("\n=\n\n");
	for(linha=0;linha<=2;linha++){
		for(coluna=0;coluna<=2;coluna++){
			printf("%i\t",c[linha][coluna]);
		}
		printf("\n");
	}
	
	return 0;
}

