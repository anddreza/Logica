/******************************************************************************
Um time de basquete possui 12 jogadores. Deseja-se um programa que, dado o nome e a altura dos jogadores,
determine: 
a) o nome e a altura do jogador mais alto; 
b) a média de altura do time; 
c) a quantidade de jogadores com altura superior a média, listando o nome e a altura de cada um
*******************************************************************************/

#include <stdio.h>
#define TAM 5 

int main() {
    float vet[TAM], i, maior, menor, soma = 0, MEDIA;

    for (i = 0; i < TAM; i++) {
        printf("Digite a altura dos meninos: ");
        scanf("%f", &vet[i]);
        fflush(stdin);
    }
    maior    = vet[0];
   
    for (i = 1; i < TAM; i++) {
        if (vet[i] > maior) {
            maior    = vet[i];
           
        }
    }
    menor    = vet[0];
    for (i = 1; i < TAM; i++) {
        if (vet[i] < menor) {
            menor    = vet[i];
            
        }
    }
    
    soma = soma + vet[i];
    MEDIA = soma / 12;
    
    if(MEDIA > vet[i]){
        
    }

    //mostra o vetor
    printf("Vetor: ");
    for (i = 0; i < TAM; i++) {
        printf("%f ", vet[i]);
    }
    
    printf("\nMaior valor: %f, maior);
    printf("\nMenor valor: %f", menor);
    printf("\n Media valor: %f", MEDIA);
    return 0;
}
