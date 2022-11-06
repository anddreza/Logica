/*
Faça um programa que  calcule o número médio de alunos por turma. Para isto, peça a quantidade de turmas e a quantidade de alunos para cada turma. 
As turmas não podem ter mais de 40 alunos.
*/
#include <stdio.h>
#include <stdlib.h>

int main (void){
	int qtd_turmas, i, turma, soma = 0;
	float media; 
		printf("Digite a quantidade de turmas: ");
		scanf("%d",  &qtd_turmas);
		fflush(stdin);		

	for (i = 1; i <= turma; i ++){
		printf("Digite a quantidade de alunos para %i turma: ", i);
		scanf("%d",  &turma);
		fflush(stdin);
		
		if (turma > 0 && turma <= 40){
			soma+= turma;
		} else {
			printf("Erro, fora do intervalo");
			i--;
		}
	}
	
	media = (float)soma / qtd_turmas;
	
		printf("A media e %.1f: ", media);
	
	
		return 0;
}

