#define <stdio.h>
#define <stdlib.h>
#define <conio.h>
/*
Construa um algoritmo que leia duas matrizes 3x3 e gere uma terceira matriz
com a soma dos elementos correspondentes de a e b.
*/

int main (void){
	int matriz[3][3], i, j;
	
	printf("\n Digite valor para os elementos da matriz \n\n")
	for (i = 0; i < 3; i++)
			for (j = 0; j < 3; j++){
				printf("Elementos [%d] [%d] = ", i, j);
				scanf("%d " &matriz [i][j]);
			}
	
	for (i = 0; i < 3; i++)
		for(j = 0; j <3; j++){
			printf("\n Elemento [%d][%d] = %d \n", i, j, matriz[i][j]);
		}
	 return 0;	
}
