/*
10. Construa um algoritmo que leia um vetor de 20 elementos e 
coloque-os em ordem crescente.
R.
*/
#include <stdio.h>
#include <stdlib.h>

#define TAM 5

// prototipo de fun��o
void entrada(void);
void processamento(void);
void saida(void);

int v[TAM]; // vari�vel global

int main(void){
	entrada();
	processamento();
	saida();
	
	return 0;
}

// fun��o entrada
void entrada(void){
	// vari�veis locais
	int i;
	
	// entrada
	for (i=0;i<TAM;i++){
		printf("Digite o %i numero: ",i+1);
		scanf("%i",&v[i]);
	}
	
}

// func�o processamento
void processamento(void){
	// vari�veis locais
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

// fun��o sa�da
void saida(void){
	// vari�veis locais
	int i;
	
	// sa�da
	printf("Os numeros sao: ");
	for(i=0;i<TAM;i++){
		printf("%i, ",v[i]);
	}
}
