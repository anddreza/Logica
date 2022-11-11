#include <stdio.h>


int main (void){
	float c, f;

	printf("Digite uma temperatura em Celsius:  ");
		scanf ("%f.\n", &c);
	
	f = (9 * c + 160) / 5;
	
	printf("Fahrenheit: %.1f\n", f);
	
	return 0;	
	
}
