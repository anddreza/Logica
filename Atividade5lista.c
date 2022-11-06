#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define texto "Atividade 5."
int main (){
	
	int n1, n2;
	float n3, ra, rb, rc;
	
	printf("Digite o primeiro número:  ");
	scanf("%i", &n1);
	
	printf("Digite o segundo número:  ");
	scanf("%i", &n2);
		
	printf("Digite o terceiro número:  ");
	scanf("%f", &n3);
	
	ra = n1 * 2 + (float)n2/2;
	// ra = n1*2 + n2/2.0 segunda opção  
	
	rc=pow(n3, 3);
	printf("O produto do dobro do primeiro com metade do segundo A) %f\n", ra);	
	
	printf("A soma do triplo do primeiro com o terceiro: B) %f \n", n1*3+ n3);
	
	printf("O terceiro elevado ao cubo: C) %f\n", rc);
}
