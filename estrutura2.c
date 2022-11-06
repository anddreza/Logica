#include <stdio.h>
#include <stdlib.h>

int main(void){
	// Variáveis?
	float l, a, m2, latas;
	
	// Entrada
	printf("Digite a largura: ");
	scanf("%f",&l);
	fflush(stdin);
	printf("Digite a altura: ");
	scanf("%f",&a);
	fflush(stdin);
	
	// processamento
	m2=l*a;
	latas=m2*3/3.6;
	if((int)latas!=latas){
		latas=(int)latas+1;
	}
	
	// saída
	printf("A quantidade de latas e %f",latas);
	
	return 0;
}

