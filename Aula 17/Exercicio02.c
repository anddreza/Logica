/*
2. Faça uma função que desenhe linhas de caracteres na tela, a função 
receberá como argumento o tipo de caractere e o número de linhas 
que deverá imprimir.
R.:
*/

#include <stdio.h>
#include <stdlib.h>

// prototipo da função
void desenha(int ql, char vc);

int main (void){
	// variáveis
	char v;
	int n;
	
	// entrada
	printf("Digite o caracter: ");
	scanf("%c",&v);
	fflush(stdin);
	printf("Digite a quantidade de linhas: ");
	scanf("%i",&n);
	fflush(stdin);
	
	// saída
	desenha(n,v);
	
	return 0;
}

// função desenha
void desenha(int ql, char vc){
	int l, c;
	for(l=1;l<=ql;l++){
		for(c=1;c<=80;c++){
			printf("%c",vc);
		}
		printf("\n");
	}
}

