
#include <stdio.h>

int main(){
	// vari�veis? 
	float raio, area;
	
	// entrada?
	print("Digite o raio");
	scanf ("%f", &raio);
	fflush(stdin);
	

// processamento?
//	area = 3.14*raio*raio;
	area = M_PI*pow(raio,2); 

// sa�da 
	printf("");
	return 0; 
	
}
