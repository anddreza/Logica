/*4) Baseando no item anterior, escreva um programa que define uma taxa de desconto de acordo com o seguinte critério:
a) Salário até R$ 1.000,00 – desconto de 8%
b) Salário entre R$ 1.000,01 e 1.500,00 – desconto de 8,5%
c) Salário acima de R$ 1.500,00 – desconto de 9%
d) O programa deve mostrar o salário em consideração e mostrar sua taxa de desconto, bem como o valor do desconto.*/

#include <stdio.h>
#include <math.h>

int main(){
	char nome;
	float bruto, salarioLiquido;
	//float taxa1 = 0.08, taxa2 = 0.085, taxa3 = 0.09;
	float taxa;
	float valorDesconto;
	 
	printf("Salario bruto");
	scanf("%f", &bruto);

	if(bruto == 1000 ){
		taxa = 0.08;
		valorDesconto = taxa * bruto;
		salarioLiquido = bruto - (valorDesconto);
		
	} else if (bruto > 1000 && bruto <= 1500) {
		taxa = 0.085;
		valorDesconto = taxa * bruto;
		salarioLiquido = bruto - (valorDesconto);
	} else if (bruto > 1500) {
		taxa = 0.09; 
		valorDesconto = taxa * bruto;	
		salarioLiquido = bruto - (valorDesconto);
	}

	printf("Bruto %.2f \n", bruto);
	printf("Taxa de desconto é %.2f \n", taxa);
	printf("O valor do desconto é %.2f \n", valorDesconto);


}