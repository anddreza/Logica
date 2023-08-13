/*Escrever um programa que calcule o número fatorial de um número.*/
//https://www.youtube.com/watch?v=4IonibzEBxY&ab_channel=Dealunoparaaluno

#include <stdio.h>
#include <stdlib.h>

int main(){
	int num;
	printf("Insira um numero");
	scanf("%d", &num);
	int resposta = 1;
	for( ; num >= 1; --num){
		resposta *= num;
	}
	printf("O numero fatorial e %i \n", resposta);
	return 0; 
}
/*
#include <stdio.h>
    
    int main(void){
        int fat, n, i;
        scanf("%d", &n);
        fat = 1;
        for (i = 1; i <= n; i = i + 1) fat = fat * i;
        printf("%d\n", fat);
       return 0;
    }
  */