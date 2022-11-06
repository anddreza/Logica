#include<stdio.h>

int main (){

	char x;
	
	printf("Digite o sexo do individuo: ");
	scanf("%c", &x);
	
	switch (x){
		case 'F':
		case 'f': 
			printf("Feminino \n");
			break;
		
		case 'm':
		case 'M':
			printf("Masculino \n");
			break;
			
		default:
			printf("Invalido\n");
	}
	
	return 0;
}
