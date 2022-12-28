/*
2. Construa um algoritmo que leia um vetor de 5 números reais e mostre a soma, 
a multiplicação e os números.
R.:
*/
#include <stdio.h>
#include <stdlib.h>

int main(void){
	// Variáveis?
	float numeros[5], soma = 0, multiplicacao = 1;
	int i;
	
	// entrada e processamento
	for(i=0;i<5;i++){
		// Entrada dos dados
		printf("Digite o numero %i: ",i+1);
		scanf("%f",&numeros[i]);
		fflush(stdin);
		
		// processamento matemático
		soma+=numeros[i];
		multiplicacao*=numeros[i];
	}
	
	// Saída dos dados
	printf("\nA soma e %f\n",soma);
	printf("A multiplicacao e %f\n",multiplicacao);
	printf("Os numero sao: ");
	for(i=0;i<5;i++){
		printf("%f, ",numeros[i]);
	}
	
	return 0;
}
