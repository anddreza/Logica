/*
2. Fa�a uma fun��o que desenhe linhas de caracteres na tela, a fun��o 
receber� como argumento o tipo de caractere e o n�mero de linhas 
que dever� imprimir.
R.:
*/

#include <stdio.h>
#include <stdlib.h>

// prototipo da fun��o
void desenha(int ql, char vc);

int main (void){
	// vari�veis
	char v;
	int n;
	
	// entrada
	printf("Digite o caracter: ");
	scanf("%c",&v);
	fflush(stdin);
	printf("Digite a quantidade de linhas: ");
	scanf("%i",&n);
	fflush(stdin);
	
	// sa�da
	desenha(n,v);
	
	return 0;
}

// fun��o desenha
void desenha(int ql, char vc){
	int l, c;
	for(l=1;l<=ql;l++){
		for(c=1;c<=80;c++){
			printf("%c",vc);
		}
		printf("\n");
	}
}

