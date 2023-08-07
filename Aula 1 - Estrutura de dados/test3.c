/*3) Uma folha de pagamento simplificada contém os itens: Nome do Funcionário, Salário e Taxa de Desconto de INSS. Criar um programa que considere uma taxa de desconto de 8% e mostre no vídeo:

a) Nome do Funcionário.

b) Salário bruto

c) Valor do INSS

d) Salário líquido.*/

#include <stdio.h>
#include <math.h>

int main(){
	char nome;
	float bruto, salarioLiquido; 

	printf("Nome: ");
	scanf("%c", &nome);

	printf("Salario bruto");
	scanf("%f", &bruto);

	salarioLiquido = bruto - (0.08 * bruto);
	printf("Salario liquido e %.2f ", salarioLiquido);

}
