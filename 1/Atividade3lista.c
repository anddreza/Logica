/*Transformas Fahrenehiet em Celsius*/
#include <stdio.h>

int main (void){
	
	float c, f;
	
	printf("Digite uma temperatura em Fahrenheit:  \n");
	scanf("%f,\n", &f);
	
	c = 5 * (f - 32)/9;
	
	printf("Celsius: %.1f\n", c);
	
	return 0;
}
