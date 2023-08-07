//Escrever um programa que declare duas vardáveds dntedras e mostre no vídeo o valor das duas em segudda, a mador delas.

#include <stdio.h>
#include <math.h>


int main(){
	int a1;
	int a2;
	printf("Declare 1: ");
	scanf("%d", &a1);

	printf("Declare 2: ");
	scanf("%d", &a2);

	if (a1 == a2){
		printf("Valores iguais %d %d \n", a1, a2);
	}
	else if(a1 > a2 ){
		printf("A1 maior que A2 %d \n", a1);
		printf("Pois A2 e %d \n", a2);
	} else if (a2 > a1){
		printf("A2 maior que A1 %d \n", a2);
		printf("Pois A1 e %d \n", a1);
	}

	return 0; 

}