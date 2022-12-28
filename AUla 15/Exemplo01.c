/*
10. Construa um algoritmo que leia um vetor de 20 elementos e 
coloque-os em ordem crescente.
R.
*/
#include <stdio.h>
#include <stdlib.h>

#define TAM 5

// prototipo de função
void entrada(void);
void processamento(void);
void saida(void);

int v[TAM]; // variável global

int main(void){
	entrada();
	processamento();
	saida();
	
	return 0;
}

// função entrada
void entrada(void){
	// variáveis locais
	int i;
	
	// entrada
	for (i=0;i<TAM;i++){
		printf("Digite o %i numero: ",i+1);
		scanf("%i",&v[i]);
	}
	
}

// funcão processamento
void processamento(void){
	// variáveis locais
	int i, j, aux;
	
	// processamento
	for(i=0;i<TAM;i++){
		for(j=0;j<TAM;j++){
			if(v[i]<v[j]){
				aux=v[i];
				v[i]=v[j];
				v[j]=aux;
			}
		}
	}
}

// função saída
void saida(void){
	// variáveis locais
	int i;
	
	// saída
	printf("Os numeros sao: ");
	for(i=0;i<TAM;i++){
		printf("%i, ",v[i]);
	}
}
