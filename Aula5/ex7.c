#include <stdio.h>
#include <stdlib.h>

int main (void){
	char x;
	
	printf("Digite a letra : ");
	scanf("%c", &x);
	
	switch (x){
		case 'a':
		case 'A': 
			printf("vogal \n");
			break;
		
		case 'E':
		case 'e':
			printf("vogal \n");
			break;
		
		case 'i':
		case 'I':
			printf("vogal \n");
			break;
			
		case 'o':
		case 'O':
			printf("vogal \n");
			break;		
		
		case 'U':
		case 'u':
			printf("vogal \n");
			break;	
		default:
			printf("Consoante\n");
	}
	
	return 0;
}
