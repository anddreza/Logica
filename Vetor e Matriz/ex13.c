/*Faça um programa em  que armazene a temperatura (em Celsius) de 7 dias consecutivos e que as mostre na tela identificando 
a temperatura com o dia da semana em que ocorreu*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int v[6];
    for(i = 0; i < 7; i++){
        printf("Digite a temperatura do dia %i\n", i+1);
        scanf("%i", &v[i]);
        fflush(stdin);
    }
    
  //  i = 0;
    
    for(i = 0; i < 7; i++){
            
      if (i == 0) {
        printf("SEGUNDA:");
    } else if (i == 1){
        printf("TERCA:");
   //     printf("%i, \n",v[i]);
    } else if (i == 2){
         printf("QUARTA:");
      //   printf("%i, \n",v[i]);
    } else if (i == 3){
        printf("QUINTA:");
     //   printf("%i, \n",v[i]);
    } else if(i == 4){
        printf("SEXTA:");
      //  printf("%i, \n",v[i]);
    } else if(i == 5){
        printf("SABADO:");
     //   printf("%i, \n",v[i]);
    } else if (i == 6){
         printf("DOMINGO: ");
        // printf("%i, \n",v[i]);
    }
    printf("%i, \n",v[i]);
    }  
    return 0;
}
