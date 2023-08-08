#include <stdio.h>
#include <stdlib.h>

int main(void){
	int v[10], i, par[10], imp[10];

	for (i = 0; i < 10; i++){
		printf("Digite o %i numero \n", i + 1);
		scanf("%i", &v[i]);
		fflush(stdin);

	if (v[i] % 2 == 0){	
		par[i] = v[i];
		imp[i] = 0;
	} else {
		imp[i] = v[i];
	}
}
	
	printf("Impares serao : ");
	for (i = 0; i < 10; i++){
		printf("%i ,", imp[i]);
	}
	
	printf("Pares serao : ");
	for (i = 0; i < 10; i++){
		printf("%i ,", par[i]);
	}
}

