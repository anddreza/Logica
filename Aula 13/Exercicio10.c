/*
10. Construa  um  algoritmo  que  leia  um  vetor  de  20  elementos  e  
coloque-os  em ordem crescente.
R.:
*/

#include <stdio.h>
#include <stdio.h>

#define TAM 6

int main (void){
	// variáveis
	int vet[TAM], i;
	
	// entrada de dados
	for(i=0;i<TAM;i++){
		printf("Digite o %i numero : ",i+1);
		scanf("%i",&vet[i]);
		fflush(stdin);
	}
	
	// processameto
	int aux, j;
	
	for(i=1;i<TAM;i++){
		for(j=0;j<TAM-i;j++){
			if(vet[j]>vet[j+1]){
				aux=vet[j];
				vet[j]=vet[j+1];
				vet[j+1]=aux;
			}
		}
	}
	
	/*
	for(i=0;i<TAM;i++){
		for(j=0;j<TAM;j++){
			if(vet[i]<vet[j]){
				aux=vet[i];
				vet[i]=vet[j];
				vet[j]=aux;
			}
		}
	}
	*/
	// saída
	for(i=0;i<TAM;i++){
		printf("%i, ",vet[i]);
	}
	
	return 0;
}
