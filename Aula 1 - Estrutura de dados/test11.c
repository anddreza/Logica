/*Crie um programa que incremente uma variável inteira iniciando em 0 e terminando em 50, mostrando os valores múltiplos de 8, o número da ocorrência em cada exibição e quantas vezes o múltiplo ocorreu.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	int i, b = 0;
	for(i = 0; i < 51; i++){
		if(i%8 == 0){
			//a[i] = i;
			printf("%i \n", i);
			b += 1;
			
		}	

	}

	printf("%d" , b);
}


