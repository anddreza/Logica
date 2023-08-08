/*
10. Construa um algoritmo que leia um vetor de 20 elementos e 
coloque-os em ordem crescente.
R.
*/
#include <stdio.h>
#include <stdlib.h>

#define TAM 20

int main(void){
	// variáveis
	int v[TAM], i, j, aux;
	
	// entrada
	for (i=0;i<TAM;i++){
		printf("Digite o %i numero: ",i+1);
		scanf("%i",&v[i]);
	}
	
	// processamento
	for(i=0;i<TAM;i++){
		for(j=0;j<TAM;j++){
		//	printf("%i x %i\n",v[i],v[j]);
			if(v[i]<v[j]){
				aux=v[i];
				v[i]=v[j];
				v[j]=aux;
		//		printf("Trocou\n");
			}
		}
	}
	
	// saída
	printf("Os numeros sao: ");
	for(i=0;i<TAM;i++){
		printf("%i, ",v[i]);
	}
	return 0;
}
