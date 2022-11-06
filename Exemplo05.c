/*
5. Faça um programa que calcule o número médio de alunos por turma.
Para isto, peça a quantidade de turmas e a quantidade de alunos
para cada turma. As turmas não podem ter mais de 40 alunos.
*/
#include <stdio.h>
#include <stdlib.h>

int main(void){
	// variáveis?
	int qtd_turmas, i, turma, soma=0;
	float media;
	
	// entrada
	printf("Digite a quantidade de turmas: ");
	scanf("%i",&qtd_turmas);
	fflush(stdin);
	for(i=1;i<=qtd_turmas;i++){
		printf("Digite a quantidade de alunos para %i turma: ",i);
		scanf("%i",&turma);
		fflush(stdin);
		if(turma>0 && turma<=40){
			soma+=turma;
		}else{
			printf("Erro, fora do intervalo\n");
			i--;
		}
	}
	
	// processamento
	media = (float)soma/qtd_turmas;
	
	// saída
	printf("A media e %.1f\n",media);
	
	return 0;
}
