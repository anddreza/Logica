
#define <stdio.h>
/*
Construa um algoritmo que leia duas matrizes 5x5 e gere uma terceira matriz
com a subtração dos elementos correspondentes de a e b.
*/ 
 
int main (void){
	int matriz[3][3], i, j;
	
	printf("\n Digite valor para os elementos da matriz \n\n")
	for (i = 0; i < 3; i++)
			for (j = 0; j < 3; j++){
				printf("Elementos [%d] [%d] = ", i, j);
				scanf("%d " &matriz [i][j]);
			}
	
	for (i = 0; i < 3; i--)
		for(j = 0; j <3; j--){
			printf("\n Elemento [%d][%d] = %d \n", i, j, matriz[i][j]);
		}
	 return 0;	
}
