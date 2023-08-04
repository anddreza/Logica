//Escrever um programa que declare duas variáveis inteiras e mostre no vídeo o valor das duas em seguida, a maior delas.

#include <stdio.h>
#include <math.h>


int main(){
	int a1;
	int a2;
	printf("Declare 1: ");
	scanf("%i", &a1);

	printf("Declare 2: ");
	scanf("%i", &a2);

	if (a1 == a2){
		printf("Valores iguais %i %i", &a1 &a2);
	}
	else if(a1 > a2 ){
		printf("A1 maior que A2 %i", &a1);
		printf("Pois A2 e %i", &a2);
	} else if (a2 > a1){
		printf("A2 maior que A1 %i", &a2);
		printf("Pois A1 e %i", &a1);
	}

}