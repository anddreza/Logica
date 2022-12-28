/*
2. Construa um algoritmo que leia um vetor de 5 números
reais e mostre a soma, a multiplicação e os números.
R.:
*/
#include <stdio.h>
#include <stdlib.h>

#define TAM 5

int main(void){
	// variáveis
	float n[TAM], s=0, m=1;
	int i;
	
	// entrada
	for(i=0;i<TAM;i++){
		printf("Digite %i numero: ",i+1);
		scanf("%f",&n[i]);
	}
	
	// processamento
	for(i=0;i<TAM;i++){
		s+=n[i];
		m*=n[i];
	}
	
	// saída
	printf("A soma e %f\n",s);
	printf("A multiplicacao e %f\n",m);
	printf("Os numero sao: ");
	for(i=0;i<TAM;i++){
		printf("%f, ",n[i]);
	}
	
	return 0;
}

