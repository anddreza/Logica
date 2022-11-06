#include <stdio.h>
#include <stdlib.h>

int main(void){
	int v[10], i, soma = 0;

	for (i = 0; i <= 9; i++){
		printf("Digite o %i numero ", i + 1);
		scanf("%i", &v[i]);
		fflush(stdin);
		soma = soma + v[i];		
	}
	
//	if (v[i] >= 0){
//		v[i]++;
//	printf("Os numeros sao: ");
//	for (i = 0; i < 5; i++){
//		printf("%i , ", v[i]);
//	}
	printf("A soma e: %i", soma);
	return 0;

}
