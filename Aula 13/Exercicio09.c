/*
9. Construa  um  algoritmo  que  leia  uma  matriz  quadrada  de  ordem  4.  
Leia  uma constante K, multiplique a diagonal principal por esta constante e 
imprima a matriz multiplicada.
R.:
*/
#include <stdio.h>
#include <stdio.h>

int main (void){
	// variáveis
	int mat[4][4], k, j, i;
	
	// entrada
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			printf("Digite o valor (%i %i): ",i,j);
			scanf("%i",&mat[i][j]);
			fflush(stdin);
		}
	}
	printf("Digite o valor de K: ");
	scanf("%i",&k);
	fflush(stdin);
	
	// processamento
	for(i=0;i<4;i++){
		mat[i][i]*=k;
	}
	
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			printf("%i\t",mat[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}

