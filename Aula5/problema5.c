// Fa�a um programa que pe�a um numero e informe se o numero � inteiro ou quebrado. 

#include<stdio.h>

int main (){
    float v;
    int a;

    printf("Digite o numero");
    scanf("%f",&v);

    a = v;
 
    if (a == v){
        printf("O numero digitado era inteiro: ");
    } else {
        printf("O numero digitado nao era inteiro: ");
    }
    return 0;
    
}
