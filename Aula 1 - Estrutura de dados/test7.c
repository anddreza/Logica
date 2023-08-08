/*Crie um programa que declare uma base e um expoente e, em seguida, mostre o valor da potência.*/

// https://www.programiz.com/c-programming/library-function/math.h/pow - Mesmo assim não consegui rodar, vou esperar a resolução do meu professor 

#include <stdio.h>
#include <math.h>

int main(){
	double base, expo, potencia;

	printf("\n Digite a base ");
	scanf("%lf", &base);
	printf("\n Digite o expoente: ");
	scanf("%lf", &expo);

	potencia = pow(base, expo);
	//a = (int)(pow(5, 2) + 0.5);
    printf("%.1lf %.1lf %.1lf ", base, expo, potencia);
 
}
