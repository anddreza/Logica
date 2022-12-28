/******************************************************************************
Um conjunto de 10 dados numéricos inteiros contidos no vetor ENTRADA precisa ser criptografado no vetor SAIDA antes de ser
transmitido. A regra de criptografia que transforma cada elemento i do vetor de ENTRADA no elemento i do vetor de SAIDA é 
dada a seguir: 
• Caso  o  elemento  esteja  numa  posição  par  do  vetor  , devemos  fazer  a  seguinte  conta: 
SAIDA[i] = 2*ENTRADA[i] -1 
• Caso  o  elemento  esteja  numa  posição  ímpar  do  vetor,  devemos  fazer  a  seguinte 
conta: SAIDA[i] = ENTRADA[i] + 3 
Após as operações descritas acima, mostre, respectivamente, os vetores ENTRADA e SAIDA 
em linhas distintas.
*******************************************************************************/
#include <stdio.h>
int main(void){
    int i, v[5], SAIDA[5]; 
    for (i = 0; i < 5; i++){
        printf("Digite o numero: ");
        scanf("%i", &v[i]);
        fflush(stdin);

    if(v[i]%2 == 0){
     // printf("\nO numero %i na posicao %i e PAR \n", v[i], i);
        SAIDA[i] = 2 * v[i] -1;
     
    } else if(v[i] % 2 == 1) {
       // printf("\nO numero %i na posicao %i e IMPAR\n", v[i], i);
        SAIDA[i] = 2*v[i] -1;
     
    }
}

  printf("A saída dos numeros pares %i\n", SAIDA[i]);
 printf("A saida para os numeros impares e %i\n", SAIDA[i]);
    for(i = 0; i < 5; i++){
     // scanf("%i", SAIDA[i]);
    }
    return 0;
}
