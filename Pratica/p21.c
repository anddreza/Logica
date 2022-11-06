#include <stdio.h>

int main (){
	int vet[5] = {0, 0, 0, 0, 0}; 
	int i;	
//	printf("%d %d %d %d %d", vet[0], vet[1], vet[2], vet[3], vet[4]);
//	printf("Conteudo da primeira posicao: %d. \n", vet[0]);
	for (i = 0; i < 5; i++){
		printf("Insira o elemento da posicao %d:", i);
		scanf("%d", &vet[i]);
	}
	for (i =0; i < 5; i++){
		printf("%d ", vet[i]);
	}
		
}

