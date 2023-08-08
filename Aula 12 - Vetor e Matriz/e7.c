#include <stdio.h>
#include <stdlib.h>

int main(void){
	int v[5], i, par[5], imp[5];

	for (i = 0; i < 5; i++){
		printf("Digite o %i numero \n", i + 1);
		scanf("%i", &v[i]);
		fflush(stdin);

	if (v[i] % 2 == 0){
		//	printf("Par %i\n", num[i]);	
		// 1 par++;
		 //2 par = par + v[i];	
		par[i] = v[i];
		imp[i] = 0;
		} else {
		//	 printf("Impar %i\n", num[i]);
		//	imp += v[i];
			imp[i] = v[i];
		}
	}
	
	printf("Impares serao : ");
	for (i = 0; i < 5; i++){
		printf("%i ,", imp[i]);
	}
	
}

