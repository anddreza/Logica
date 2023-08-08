/*
PROBLEMA: Como criar uma matriz de ordem 3 de float?
*/
#include <stdio.h>
#include <stdlib.h>

int main(void){
	// variáveis
	float m[3][3];
	int l, c;
	
	// entrada
	for(l=0;l<3;l++){
		for(c=0;c<3;c++){
			printf("Digite [%i][%i]: ",l,c);
			scanf("%f",&m[l][c]);
			fflush(stdin);
		}
	}
	
	// saída
	for(l=0;l<3;l++){
		for(c=0;c<3;c++){
			printf("%.1f\t",m[l][c]);
		}
		printf("\n");
	}
	return 0;
}

