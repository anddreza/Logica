/*
4. Faça uma função que receba como argumento os valores dos lados de um 
triângulo, a função deverá retornar 0 se triângulo for equilátero, 1 se for 
isósceles ou 2 se for escaleno.
*/

#include <stdio.h>
#include <stdlib.h>

// prototipo da função
int triangulo(float a, float b, float c);

int main (void){
	// variáveis
	float la, lb, lc;
	
	printf("Digite lado a : ");
	scanf("%f",&la);
	printf("Digite lado b : ");
	scanf("%f",&lb);
	printf("Digite lado c : ");
	scanf("%f",&lc);
	
	switch(triangulo(la,lb,lc)){
		 case 0:
		 	printf("Equilatero\n");
		 	break;
		case 1:
			printf("Isosceles\n");
			break;
		case 2:
			printf("Escaleno\n");
			break;
		default:
			printf("Nao e um trianulo");
	}
	
	return 0;
}


// funções
int triangulo(float a, float b, float c){
	if(a+b>c && a+c>b && b+c>a){
		if(a==b && b == c){
			return 0;
		}else if(a==b || a==c || b==c){
			return 1;
		}else{
			return 2;
		}
	}else{
		return -1;
	}
}
