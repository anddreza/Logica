#include <stdio.h>
#include <math.h>

int main(void){
int i, j, vetor[10], matriz[10][10];
	
	for (i=0;i<10;i++){
		for (j=0;j<10;j++){
			matriz[i][j]=i+j*10+1;
		}
		vetor[i]=i+1;
	}
		
		for (i=0;i<10;i++){
			for (j=0;j<10;j++){
				printf("%i\t",matriz[i][j]);
			}
			printf("\n");
		}   
		printf("\n");
	
	for (i=0;i<10;i++){
		printf("%i\t",vetor[i]);
		}
		return 0;
	}
	
