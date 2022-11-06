/*
6. Faça um programa que calcule o valor total investido e o 
custo médio por CD. O usuário deverá informar a quantidade de
CDs e o valor para em cada um.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){
	// variáveis?
	int qtd_cds, i;
	float valor_cd, soma_cds=0, media_cds;
	
	// entrada?
	printf("Digite a quantidade de CDs: ");
	scanf("%i",&qtd_cds);
	fflush(stdin);
	for(i=1;i<=qtd_cds;i++){
		printf("Digite o valor do cd %i: ",i);
		scanf("%f",&valor_cd);
		soma_cds+=valor_cd;
	}
	
	// processamento
	media_cds=soma_cds/qtd_cds;
	
	// saída
	printf("A media dos cds e R$ %.2f\n",media_cds);
	printf("A soma dos cds e R$ %.2f\n",soma_cds);
	
	return 0;
}
