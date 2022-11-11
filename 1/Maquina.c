#include <stdio.h>
#include <stdlib.h>

int main (void){
	int qtd_maq;
		
	printf("Quantas maquinas serão vendidas: ");
	scanf("%i", &qtd_maq);
	
	
	printf("---------------\n");
	printf("Modelos compras:\n");
	printf("20cv \t\t1cv \t\t5cv\n");
	printf("%i \t\t%i \t\t%i\n",qtd_maq*1,qtd_maq*2, qtd_maq*3);
	
	
	
	
	return 0;
}
