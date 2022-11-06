/*
5. Fa�a um programa que calcule o n�mero m�dio de alunos por turma.
Para isto, pe�a a quantidade de turmas e a quantidade de alunos
para cada turma. As turmas n�o podem ter mais de 40 alunos.
*/
#include <stdio.h>
#include <stdlib.h>

int main(void){
	// vari�veis?
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
	
	// sa�da
	printf("A media e %.1f\n",media);
	
	return 0;
}
