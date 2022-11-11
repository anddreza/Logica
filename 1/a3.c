/*Transformar uma temperatura de Celsius para Fahrenheit*/
#include <stdio.h>

int main (void){
	float c, f;

	printf("Digite uma temperatura em Celsius:  ");
		scanf ("%f.\n", &c);
	
	f = (9 * c + 160) / 5;
	
	printf("Fahrenheit: %.2f\n", f);
	
	return 0;	
	
}
