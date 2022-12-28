/*
7. Construa  um  algoritmo  que  leia  duas  matrizes  5x5
e  gere  uma  terceira  matriz com a subtra��o dos elementos correspondentes de a e b.
R.:
*/
#include <stdio.h>
#include <stdio.h>

int main (void){
	// vari�veis
	int a[5][5], b[5][5], r[5][5], i, j;
	
	// entrada
	printf("Dados da matriz A: \n\n");
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			printf("Digite o valor (%i, %i): ",i,j);
			scanf("%i",&a[i][j]);
			fflush(stdin);
		}
	}

	printf("\nDados da matriz B: \n\n");
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			printf("Digite o valor (%i, %i): ",i,j);
			scanf("%i",&b[i][j]);
			fflush(stdin);
		}
	}
	
	// processamento
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			r[i][j]=a[i][j]-b[i][j];
		}
	}
	
	// sa�da
	printf("\nDados da matriz R: \n\n");
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			printf("%i\t",r[i][j]);
		}
		printf("\n");
	}

	return 0;
}
