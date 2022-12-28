/******************************************************************************
Um time de basquete possui 12 jogadores. Deseja-se um programa que, dado o nome e a altura dos jogadores,
determine: 
a) o nome e a altura do jogador mais alto; 
b) a média de altura do time; 
c) a quantidade de jogadores com altura superior a média, listando o nome e a altura de cada um
*******************************************************************************/

#include <stdio.h>
int main() {
    float vet[4], maior, menor, soma = 0, MEDIA;
    int i;
    char nome[3][30];
    
    for (i = 0; i < 5; i++) {
        printf("Digite o nome e a altura do jogador: \n");
        scanf("%s%f", &nome[i], &vet[i]);
        fflush(stdin);
    }
    maior    = vet[0];
   
    for (i = 1; i < 5; i++) {
        if (vet[i] > maior) {
            maior    = vet[i];
        }
    }
    menor    = vet[0];
    for (i = 1; i < 5; i++) {
        if (vet[i] < menor) {
            menor    = vet[i];
        }
    }
    
    soma = soma + vet[i];
    MEDIA = soma / 12;

    //mostra o vetor
    printf("Vetor: ");
    for (i = 0; i < 5; i++) {
        printf("%.2f ", vet[i]);
    }
    
    printf("\nNome do jogador com maior altura: %s%.2f", nome, maior);
    printf("\nNome do jogador com menor altura: %s%.2f", nome, menor);
    printf("\nA media de altura do: %.2f", MEDIA);
    
return 0;
}

