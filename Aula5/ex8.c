/* Faça um programa que leia 3 valores inteiros e exiba-os em ordem crescente.
*/
#include <stdio.h>
#include <stdlib.h>

int main (void){
	int a, b, c;

	printf("Digite um numero:  ");
	scanf("%d", &a);
	fflush(stdin);
	
	printf("Digite um numero:  ");
	scanf("%d", &b);
	fflush(stdin);
	
	printf("Digite um numero:  ");
	scanf("%d", &c);
	fflush(stdin);
	
	if (a<b && b<c){
		printf("%d %d %d", a, b, c);
	} else if (a <c && c < b){
		printf("%d %d %d", a, c, b);
	} else if (b < a && a < c){
		printf("%d %d %d", b, a, c);
	} else if (b < c && c < a){
		printf("%d %d %d", b, c, a);
	} else if (c < a && a < b){
		printf("%d %d %d", c, a, b);
	} else {
		printf("%d %d %d", c, b, a);
	}
	
	return 0;
}
