#include <stdio.h>
#include <stdlib.h>

int main (void){
	
	float hora, trab, tot;
	
	printf("Quanto vc ganha por hora: ");
	scanf("%f", &hora);
	
	printf("Quantas horas vc trabalhou no mes: ");
	scanf("%f", &trab);
	
	tot = hora * trab;
	
	printf("O seu salario e: %.2f\n", tot);
	
	return 0;
}
	
