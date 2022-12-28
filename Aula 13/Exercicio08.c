/*
8. Construa  um  algoritmo  que  leia  uma  matriz quadrada  de  ordem  3.  
Leia  uma constante  K, diminuia  diagonal  principal  por  esta  constante  e  
imprima  a  matriz resultado.
R.:
*/
#include <stdio.h>
#include <stdio.h>

int main (void){
	// variáveis
	int mat[3][3], k, i, j;
	
	// entrada 
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("Digite o valor (%i %i): ",i,j);
			scanf("%i",&mat[i][j]);
			fflush(stdin);
		}
	}
	printf("Digite o valor de k: ");
	scanf("%i",&k);
	fflush(stdin);
	
	// processamento
	// 1 opcao
	for(i=0;i<3;i++){
		mat[i][i]-=k; // mat[i][i]=mat[i][i]-k;
	}
	
	/*
	// 2 opcao
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(i==j){
				mat[i][i]-=k;
			}
		}
	}
	*/
	
	// saída
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%i\t",mat[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}

