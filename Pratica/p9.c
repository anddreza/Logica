/*
Em uma eleição presidencial existem quatro candidatos. Os votos são informados através de códigos. 
Os dados utilizados para a contagem dos votos obedecem à seguinte codificação:  

- 1,2,3,4 = voto para os respectivos candidatos;
- 5 = voto nulo;
- 6 = voto em branco;

Elabore um algoritmo que leia o código do candidado em um voto. Calcule e escreva:
- total de votos para cada candidato;
- total de votos nulos;
- total de votos em branco;

Como finalizador do conjunto de votos, tem-se o valor 0.

*/
#include <stdio.h>
#include <stdlib.h>

int main (void){
	int i;
	float somatorio = 0;
	int contador = 0;
	char candidato1, candidato2, candidato3, candidato4, votonulo, votobranco;
	
	while (i >= 0){
	printf("----------- \n");
	printf("[1] Candidato 1 \n");
	printf("[2] Candidato 2 \n");
	printf("[3] Candidato 3 \n");
	printf("[4] Candidato 4 \n");
	printf("[5] Voto nulo \n");
	printf("[6] Voto em branco \n");
	printf("----------- \n");
	printf("Selecione a opcao desejada: ");
	scanf("%d", &i);
	fflush(stdin);
	
	if (i == '1'){
		candidato1++;
	} else if (i == '2'){
		candidato2++;
	} else if (i == '3'){
		candidato3++;
	} else if (i == '4'){
		candidato4++;
	} else if (i == '5'){
		votonulo++;
	} else if (i == '6'){
		votobranco++;
	} else {
		printf("Opcao invalida");
	}
	
		somatorio = somatorio + i;
		contador = contador + 1;
}
	printf("A quantidade de votos foi : %f", somatorio);
	printf("A quantidade de votos para 1 foi: %i \n", candidato1);
	printf("A quantidade de votos para 2 foi: %i \n", candidato2);
	printf("A quantidade de votos para 3 foi: %i \n", candidato3);
	printf("A quantidade de votos para 4 foi: %i \n", candidato4);
	printf("A quantidade de votos nulo: %i \n", votonulo);
	printf("A quantidade de votos em branco foi: %i \n", votobranco);
	return 0;
} 
