#include <stdio.h>
#include <stdlib.h>
	
int main(void){
	char v[5];
	char x[5];
	char y[5];
	
	int i;
	int vogal=0, consoante=0, outros;
	char letra;

	for (i = 0; i < 5; i++){
		printf("Digite a %i letra: ", i);
		scanf("%c\n", &v[i]);
		fflush(stdin); // faz guardar o enter da variável, ele vai limpar o teclado para proxima estrutura 
		
	//	if (v[i] >= 'A' && v[i] <= 'Z'){
	//		letra= letra + ('a' - 'A');
	//	}
		if (v[i] >= 'a' && v[i] <= 'z'){
			switch(v[i]){
				case 'a' : case 'e' : case 'i' : case 'o' : case 'u':
				//	printf("E uma vogal \n");
					x[i] = v[i];
				//	vogal++;
					break;
				default:
				//	printf("E uma consoante \n");
					y[i] = v[i];
				//	consoante++;
			}
		} else {
			printf("Erro, nao e uma letra \n");
			//outros++;
		}
	}

	printf("As consoantes digitas sao: \n");
	printf("%i\n", consoante);
	for (i = 0; i < 5; i++){
		printf("%c, ", y[i]);
	//	printf("%i \n", vogal);
	}
	
	printf("\nAs vogais digitas sao: \n");	
	printf("%i \n", vogal);
	for (i = 0; i < 5; i++){
	//	printf("%i \n", consoante);
		printf("%c, ", x[i]);
	}
	return 0;
}
