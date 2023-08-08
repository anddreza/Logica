/*Considerando o problema anterior, criar um novo programa que incremente uma variável com a mesma faixa de valores, e mostre no vídeo somente os números pares ou múltiplos de 6.*/


#include <stdio.h>
#include <math.h>

int main(){
	for(int i = 0; i < 101; i++){
		if(i %2 == 0 && i %6 == 0){
			printf("%i \n", i);
		} 
	}
}