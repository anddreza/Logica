/* Calculadora, parte da lógica veio da minha parte e parte veio procurando em sites*/
#include <stdio.h>
#include <stdlib.h>

int main (void){
	float w, q, m;
	char x;
	
	printf("--------\n");
	printf("[A] Adicao \n");
	printf("[B] Substra�ao \n");
	printf("[C] Multiplicacao \n");
	printf("[D] Divisao \n");
	printf("[E] Fim \n");
	printf("--------\n");
	
	printf("Digite a opcao desejada:  ");
	scanf("%c", &x);
	fflush(stdin);

	switch(x){
		case 'A':
		case 'a':
			printf("n 1: ");
			scanf("%f", &w);
			fflush(stdin);
			
			printf("n 2: ");
			scanf("%f", &q);
			fflush(stdin);
			 m = w + q;
			 
			 printf("A soma e: %.1f", m);
			break;
		case 'b':
		case 'B':
			printf("n 1: ");
			scanf("%f", &w);
			fflush(stdin);
			
			printf("n 2: ");
			scanf("%f", &q);
			fflush(stdin);
			 m = w - q;
			 
			 printf("A soma e: %.1f", m);
			break;
		case 'c':
		case 'C':
			printf("n 1: ");
			scanf("%f", &w);
			fflush(stdin);
			
			printf("n 2: ");
			scanf("%f", &q);
			fflush(stdin);
			 m = w * q;
			 
			 printf("A soma e: %.1f", m);
			break;
		case 'd':	
		case 'D': 	
			printf("n 1: ");
			scanf("%f", &w);
			fflush(stdin);
			
			printf("n 2: ");
			scanf("%f", &q);
			fflush(stdin);
			 m = w / q;
			 
			 printf("A soma e: %.1f", m);
			break;
		default:
			printf("Nao existe \n");		 	
	} 
	return 0;
}

