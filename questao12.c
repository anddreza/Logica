/*
12. Uma determinada empresa vende uma máquina que possui 
seis motores. Um de 20 CV, dois de 1 CV, e três de 5 CV, 
que custam 1500, 300 e 600 reais respectivamente cada motor.
Existe a necessidade de saber quantos motores deverão ser 
comprados de cada modelo e quanto custará esta compra. Para 
isto elabore um programa que: 

a. Pergunte quantas máquinas serão vendidas; 
b. Calcule e apresente na tela a quantidade de motores 
que deverão ser comprados de cada modelo; 
c. Calcule e apresente na tela o custo total por máquina, 
o custo por tipo de motor 
e o custo total da compra.
R.:
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){
	// Variáveis?
	int qtd_maq;
	
	//a. Pergunte quantas máquinas serão vendidas; 
	printf("Digite a quantidade de maquinas: ");
	scanf("%i",&qtd_maq);
	
	//b. Calcule e apresente na tela a quantidade de motores 
	//que deverão ser comprados de cada modelo; 
	printf("---------------\n");
	printf("Modelos compras:\n");
	printf("20cv \t\t1cv \t\t5cv\n");
	printf("%i \t\t%i \t\t%i\n",qtd_maq*1,qtd_maq*2, qtd_maq*3);
	
	//c. Calcule e apresente na tela o custo total por máquina, 
	printf("---------------\n");
	printf("Total por maquina R$ %i,00\n",1*1500+2*300+3*600);
	//o custo por tipo de motor 
	printf("---------------\n");
	printf("Custo por tipo de motor:\n");
	printf("20cv \t\t1cv \t\t5cv\n");
	printf("R$ %i,00 \tR$ %i,00 \tR$ %i,00\n",1500*1,300*2, 600*3);
	//e o custo total da compra.
	printf("---------------\n");
	printf("Total da compra R$ %i,00\n",qtd_maq*1*1500+qtd_maq*2*300+qtd_maq*3*600);
	return 0;
}


