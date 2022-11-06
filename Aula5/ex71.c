#include <stdio.h>
#include <stdlib.h>

int main (void){
	char letra;
	
	printf("Digite a letra : ");
	scanf("%c", &letra);
	fflush(stdin);
	
	if (letra >= 'A'&& letra <= 'Z'){
		letra = letra+('a' - 'A');
	}
	
	if(letra >= 'a' && letra <= 'z'){
		switch(letra){
			case 'a': case 'e': case 'i': case 'o': case 'u':
				printf("E uma vogal\n");
				break;
				
			default:	
				printf("E uma consoante \n");
		}
	} else {
		printf("Erro, nao e uma letra \n");
	}
	
	return 0;
}
