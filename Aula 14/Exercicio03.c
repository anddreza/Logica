/*
3. Construa um algoritmo que leia um vetor de 10 números reais e 
mostre-os na ordem inversa.
R.:
*/
#include <stdio.h>
#include <stdlib.h>

int main (void){
	// variáveis
	float n[10];
	int i;
	
	// entrada
	for(i=0;i<10;i++){
		printf("Digite %i numero: ",i+1);
		scanf("%f",&n[i]);
	}
	
	// saída
	printf("\nOs numeros sao: \n");
	for(i=9;i>=0;i--){
		printf("%f\n",n[i]);
	}
	
	return 0;
}

