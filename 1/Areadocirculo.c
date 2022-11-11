#include <stdio.h>
#include <math.h>
int main (){
	
	float m, d;
	
	printf("Digite o raio:  ");
	scanf("%f", &m);
	fflush(stdin);
	
	d = M_PI * pow(m, 2);
	
	printf("A area do círculo e:  %f\n", d);
	
	return 0;
}
