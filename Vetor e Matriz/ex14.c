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
    int v[5], m[5], n[5]; 
    for (int i = 0; i < 5; i++){
        printf("Digite o %i numero: ", i+1);
        scanf("%i", &v[i]);
        fflush(stdin);
      // Porque fazer uma divisão no "i", acho que na questão ele não pede isso
      // O "i" serve dentro de um "FOR" para saber em qual posição vc está
    if(i % 2 == 0){
      m[i] = 2 * v[i] - 1;
    //  printf("\nO numero %i na posicao %i e PAR \n", v[i], i);
      printf("O vetor m é %i \n", m[i]);
    } else if(i % 2 == 1) {
        n[i] = v[i] + 3;
     // printf("\nO numero %i na posicao %i e IMPAR\n", v[i], i);
       printf("O vetor n é %i \n", n[i]);
      }
  }
  
  //printf("A saída dos numeros pares %i\n", m[i]); // qual a posição do "i" que vc está olhando? TODAS, QUERO TODAS AS POSIÇÕES
//  printf("A saida dos numeros impares e %i\n", n[i]); // qual a posição do "i" que vc está olhando? TODAS, QUERO TODAS AS POSIÇÕES
    for(int i = 0; i < 5; i++){
      printf("A saída dos numeros pares %i\n", m[i]);
      printf("A saida dos numeros impares e %i\n", n[i]);
     // scanf("%i", SAIDA[i]);
    }
    return 0;
}
