/*Se a taxa de juros composto de uma determinada aplicação vale 1,25% ao mês, calcular a taxa equivalente no período de um ano. Se um valor de R$ 1.000,00 for aplicado com esta taxa, qual será o valor final após um ano?*/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	// por mes
	float a = 0.00125;
	// por ano
	float b = 0.015;
	float c, d; 
	
	printf("Valor de R$ 1000,00 aplicado ao mês: ");
	c = 1000 + (a * 1000);
	printf("%.2f", c);
	printf("\n-------------------------------------\n");

	printf("Valor de R$ 1000,00 após um ano: ");
	d = 1000 + (b * 1000);
	printf("%.2f", d);
}