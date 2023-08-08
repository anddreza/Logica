/*Escrever um programa que mostre no vídeo a tabuada do 2, do 3 e do 5*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){

	//int tabuada = 0;
	// Tabuada de 2
	for(int i = 0; i < 11; i++){
		//printf("2 x %i" + i + " = %i");
		printf("%ix%i = %i\n", i, 2, i * 2);

	}

	printf("------------------------------------ \n");

	for(int i = 0; i < 11; i++){
		//printf("2 x %i" + i + " = %i");
		printf("%ix%i = %i\n", i, 3, i * 3);

	}

	printf("------------------------------------ \n");

	for(int i = 0; i < 11; i++){
		//printf("2 x %i" + i + " = %i");
		printf("%ix%i = %i\n", i, 5, i * 5);

	}

}