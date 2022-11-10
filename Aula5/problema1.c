// Dado uma letra, verificar se � verdadeiro ou falso. 

#include <stdio.h>
#include <stdlib.h>

int main (void){
	char letra;
	
	printf("Digite uma letra: ");
	scanf("%c", &letra);
	fflush(stdin);
	
/*	if (letra == 'v' || letra == 'V'){
		printf("Verdadeiro\n");
		
		
	} else if (letra == 'f'|| letra == 'F'){
		printf("Falso\n");
		
	} else {
		printf ("Erro, op��o invalida\n");
	} */
	
	switch(letra){
		case 'v':
		case 'V':
			printf("Verdadeiro\n");
			break;
		case 'f':
		case 'F':
			printf("Falso\n");
			break;
		default: 
			printf("Erro, opcao invalida\n");
	}
	
	return 0;
}
