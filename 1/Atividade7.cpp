#include <stdio.h>
#include <stdlib.h>

int main (void){
	//variáveis 
	float m,c; 
	
	// entrada?
	printf("Digite o valor em metros");
	scanf("%f", &m);
	fflush(stdin);
	
	// processamento
	c=m*100;
	
	//saída
	 printf("O valor em centrimetros e %.1f  ", c);	
		
	
	
	return 0; 
}
