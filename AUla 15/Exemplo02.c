#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// função com entrada e com saída
int soma(int n1, int n2);
void imprima(int n);
int numeros(void);

int main(void){

	imprima(soma(numeros(),numeros()));
	
	return 0;
}

// função soma
int soma(int n1, int n2){
	int s;
	s=n1+n2;
	return s;
}

// função imprima
void imprima(int n){
	printf("O numero e %i\n",n);
}

// função numeros
int numeros(void){
	srand (time(NULL));
	int n;
	n = rand() % 100;
	return n;
}
