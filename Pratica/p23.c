#include <stdio.h>


struct novo_tipo{
	int dado;
	float valor;
	
};

int main (){
	struct novo_tipo variavel;
	
	variavel.dado = 10; 
	variavel.valor = 22.22;

	printf("%d %.2f", variavel.dado, variavel.valor);
	
	// novo_tipo.dado = 10; isso n�o funciona 
}
