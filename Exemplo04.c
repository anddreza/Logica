/*
4. Fa�a um programa que calcule e mostre a m�dia bimestral
da turma. O usu�rio deve informar a quantidade de notas,
bem como cada nota.
*/
#include <stdio.h>
#include <stdlib.h>

int main(void){
	// vari�veis?
	int qtd_notas, i;
	float nota, soma=0, media;
	
	// entrada?
	printf("Digite a quantidade de notas: ");
	scanf("%i",&qtd_notas);
	fflush(stdin);
	for(i=1;i<=qtd_notas;i++){
		printf("Digite a %i nota: ",i);
		scanf("%f",&nota);
		fflush(stdin);
		soma+=nota;
	}
	
	// processamento
	media=soma/qtd_notas;
	
	// sa�da 
	printf("A media e %.2f\n",media);
	
	return 0;	
}
