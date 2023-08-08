#include <stdio.h>
#include <stdlib.h>

int main(void){
	int v[5], i, soma = 0;
	float multi = 1;

	for (i = 0; i <= 4; i++){
		printf("Digite o %i numero \n", i + 1);
		scanf("%i", &v[i]);
		fflush(stdin);
		soma = soma + v[i];		
		multi = multi * v[i];
	}
	
	printf("Os numeros sao: \n");
	for (i = 0; i < 5; i++){
		printf("%i , ", v[i]);
	}
	
	printf("A soma e: %i \n", soma);
	printf("A multiplicacao e: %.1f \n" , multi);
	return 0;

}
