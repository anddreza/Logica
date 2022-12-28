/******************************************************************************
Um time de basquete possui 12 jogadores. Deseja-se um programa que, dado o nome e a altura dos jogadores,
determine: 
a) o nome e a altura do jogador mais alto; 
b) a média de altura do time; 
c) a quantidade de jogadores com altura superior a média, listando o nome e a altura de cada um
*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main() {
    float alt[4], maior = 0, menor = 0, soma = 0, MEDIA = 0;
    int i, pos;
    char nome[4][30];
    
    for (i = 0; i < 5; i++) {
      fflush(stdin);
      printf("Digite o nome e a altura do jogador: \n");
      scanf("%c%f", nome[i], &alt[i]);
      fflush(stdin);
    }

    for (i = 0; i < 5; i++) {
      if(alt[i] > maior){ // Comparar as alturas 
     //   printf("\nO indice maior sera: %i", i);
        maior = alt[i];  // Atribui a maior altura
        pos = i; // Pega a posição da maior altura, para pegar o valor do nome 
      }
      soma = soma + alt[i];
      MEDIA = soma / 5;
      printf("\nA soma sera: %.2f", soma);
      printf("\nA media sera: %.2f", MEDIA);
      
      if (alt[i] > MEDIA){
        printf("\nOs jogadores acima da media sao %s %f", nome[i], alt[i]);
      }
    }
    printf("\nNome do jogador com maior altura: %s %.2f", nome[pos], maior);
return 0;
}

