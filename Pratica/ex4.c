/*
Criar um vetor A com 5 elementos inteiros. 
Construir um vetor B de mesmo tipo e tamanho e com os "mesmos" elementos do vetor A multiplicados por 2,  ou seja, B[i] = A[i] * 2
*/
#include <stdio.h>
#include <stdlib.h>

int main(void){
    int A[5], B[5], i, j;
        
    for(i = 0; i < 5; i++){
        printf("Digite um numero: ");
        scanf("%i ", &A[i]);
        fflush(stdin);
        B[i] = A[i] * 2;
    }
    
    printf("Os numeros digitados em A sao \n");
    for(i = 0; i < 5; i++){
        printf("%i, ",A[i]);
    }
    
    printf("Os numeros digitados em B sao\n");
     for(i = 0; i < 5; i++){
        printf("%i, ",B[i]);
    }
    return 0;
}
