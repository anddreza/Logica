/*
8. Supondo que a popula��o de um pa�s A seja da ordem de 80.000
habitantes com uma taxa anual de crescimento de 3% e que a 
popula��o do pa�s B seja, aproximadamente, de 200.000 habitantes
com uma taxa de crescimento anual de 1,5%. Fazer um programa 
que calcule e escreva o n�mero de anos necess�rios para que 
a popula��o do pa�s A ultrapasse ou iguale a popula��o do 
pa�s B, mantidas essas taxas de crescimento.
*/
#include <stdio.h>
#include <stdlib.h>

int main(void){
	// vari�veis?
	float a=80000, b=200000;
	int anos=0;
	
	// processamento
	while(a<=b){
		a*=1.03; //a=a+a*0.3;
		b*=1.015;
		anos++;
	}
	
	// sa�da 
	printf("A quantidade de anos e %i\n",anos);
	
	return 0;
}
