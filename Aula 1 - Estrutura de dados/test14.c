/*Escreve um programa que contenha duas strings. O programa devera mostrar no vídeo a quantidade de caracteres de cada uma.*/
//https://www.youtube.com/watch?v=BgqdDJ52bek&ab_channel=Dealunoparaaluno
#include <stdio.h>
int main (void){
	int tamanhoString(char string[]);
	char stringUsuario[20];

	printf("Digite uma palavra(string): \n");
	scanf("%f", stringUsuario);

	int num = tamanhoString(stringUsuario);

	printf("A string %s possue %i caracteres: \n", stringUsuario, num);

	system("pause");
	return 0;


}

int tamanhoString(char string[]){
	int numCaracteres = 0; 
	// vai ser executado até ele encontrar esse \0
	while(string[numCaracteres]!= '\0'){
		++numCaracteres;
	}	
	
    ++numCaracteres;
	return numCaracteres;
}