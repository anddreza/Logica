/*
Faça um programa que calcule o valor total investido e o custo médio por CD. O
usuário deverá informar a quantidade de CDs e o valor para em cada um.

*/
#include <stdio.h>
#include <stdlib.h>

int main (void){
		int qtd_cds, i;
		float media_cds, valor_cds, soma_cds =0;
		
		printf("Digite a quantidade de CDs: ");
		scanf("%d",  &qtd_cds;
		fflush(stdin);		
		
		for (i =1; i <= qtd_cds; i++){
			printf("Digite o valor de cada CD %i: ", i);
			scanf("%f",  &valor_cd);
			fflush(stdin);
			
			soma_cds += valor_cd;			
		}
		
		media_cds = soma_cds / qtd_cds
		
		printf("A media dos CDS foi R$ %.2f", media_cds);
		printf("A soma dos cds foi R$ %.2f ", soma_cds);
		
		
		return 0;
}
