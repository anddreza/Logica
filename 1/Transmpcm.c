#include <stdio.h>
#include <math.h>

int main (void){
	float d, m, cm;
	
	printf("Digite em metros:  ");
	scanf("%f" , &m);
	
	d = m * 100;
	
	printf("O valor em centrimentos e:  %f\n", d);
	
	return 0;	
}
