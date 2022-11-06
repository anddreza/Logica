#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	int v[10], i;
	
	for (i = 0; i <= 9; i++){
		printf("Digite %i numero: ", i +1);
		scanf("%i", &v[i]);
		fflush(stdin);
	}
	printf("Os numeros sao: ");
	for(i = 9; i >= 0; i--){
		printf("%i \n", v[i]);
	}
	
	return 0;
}
