#include <stdio.h>
#include <stdlib.h>

int main (void){
	float dia;
	
	printf("Quanto dias voce trabalhou? ");
	scanf("%f", &dia);
	fflush(stdin);
	 
	printf("O salario liquido e R$%.2f\n", dia*250*0.92);
	
	return 0;
}
