/* Faça um programa que leia três valores, faça a média, e mostre se foi bom ou ruim */
#include <stdio.h>
#include <stdlib.h>

int main (void){

	float a,b,c, m;
	
	printf("Digite a nota 1:  ");
	scanf("%f", &a);
	fflush(stdin);
	
	printf("Digite a nota 2:  ");
	scanf("%f", &b);
	fflush(stdin);
	
	printf("Digite a nota 3:  ");
	scanf("%f", &c);
	fflush(stdin);
	
	m = (n1+ n2 + n3)/3;
	
	if( m == 10){
		printf("A media e %.1f esta aprovado com distincao \n", m);
	} else if (m >= 7){
		printf("A media e %.1f esta aprovado \n", m);
	} else {
		printf("A media e %.1f esta reprovado \n ", m);
	}
	
	return 0;

}
