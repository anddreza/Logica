/* Receba números do usuário enquanto eles forem positivos e ao fim o algoritmo deve imprimir a média dos números digitados.*/
#include <stdio.h>
#include <stdlib.h>
int main (void){
	int i = 1, a, b = 0, c = 0;
	float m;
	
	for (i = 1; i > 1; i++){
	printf("Digite um numero: ");
	scanf("%i", &a);
	fflush(stdin);
	
	if(a > 1){
		b++;
	} else if( a < 1 ){
		printf("Nao");
	}
	
	m = b / i;
	printf("A media dos numeros e: %f", m);
	
	}
	return 0;
}
