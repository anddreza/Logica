/*
Supondo que a popula��o de um pa�s A seja da ordem de 80.000 habitantes com
uma taxa anual de crescimento de 3% e que a popula��o do pa�s B seja,
aproximadamente, de 200.000 habitantes com uma taxa de crescimento anual de
1,5%. Fazer um programa que calcule e escreva o n�mero de anos necess�rios
para que a popula��o do pa�s A ultrapasse ou iguale a popula��o do pa�s B,
mantidas essas taxas de crescimento.
*/

#include <stdio.h>
#include <stdlib.h>

int main (void){
	float A = 80.000, B = 200.000;
	int i = 0;
	
	while (A <= B){
	//	A += ((A * 0.3) / 100);
	//	B += ((B * 0.015) / 100);
	//	i++;	
	a *= 1.03; 
	//a = a * 3 / 100 + a;
	b *= 1.015;
	i++;
	}	
	
	printf("Total de anos: %.1f", i);
}
