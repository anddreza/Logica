
#include <stdio.h>

int main(){
	// variáveis? 
	float raio, area;
	
	// entrada?
	print("Digite o raio");
	scanf ("%f", &raio);
	fflush(stdin);
	

// processamento?
//	area = 3.14*raio*raio;
	area = M_PI*pow(raio,2); 

// saída 
	printf("");
	return 0; 
	
}
