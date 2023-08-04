//Um programa que contém duas variáveis inteiras e cada uma destas variáveis deve ter um valor atribuído. Escrever um programa que mostre os seguintes resultados:
//a) A soma das duas variáveis.
//b) A diferença entre as duas variáveis.
//c) O dobro da primeira mais o triplo da segunda variável.
//d) A multiplicação das duas variáveis.

#include <stdio.h>
#include <math.h>
 
int soma(int x, int y); 
int subtracao(int x, int y);

int main(){
	
	//printf("A soma das duas variáveis: ");
	int c = soma(1 , 2);
	printf("%i\n", c);

	int d = subtracao(2, 2);
	printf("%i\n", d);

	return 0;
}

int soma(int x, int y){
	int a = x + y;
	return a;
}

int subtracao(int x, int y){
	int a = x - y;
	return a;
}

