#include <stdio.h>
#include <stdlib.h>

int main (void){
	int a, n1, pos = 0, neg =0;
	float m;
	
while (a  <= 4){
	printf("Digite um numero: \n ");
	scanf("%i", &n1);

	if (n1 > 0){
		pos++;
	}else if (n1 < 0){
		neg++;
	}
	a++;
	}				
	printf("Quantidade de positivo foi %i:" , pos);
	printf("A quantidade de negativos foi %i" , neg);
	printf("A media dos valores: %.2f", m = a / pos);
	

}

