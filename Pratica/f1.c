#include <stdio.h>
#include <stdlib.h>

# define TAM 5

//prototipo de função 
void entrada (void);
void processamento (void);
void saida(void);


int v[TAM]; //global 
int main(void){
	entrada ();
	processamento();
	saida();
	
	return 0;
}

// função de entrada
void entrada(void){
	//variaveis lcocais 
	int i;
		for (i =0; i < TAM; i++){
		printf("Digite o %i numero", %i+1);
		scanf("%i", &v[i]);
	}
} 

void processamento(void){
	int i, j, aux;
		for (i =0; i <TAM; i++){
		for (j=0; j <TAM; j++){
		//	printf("%i x %i \n", v[i], v[j]);
			if (v[i] < v[j]){
				aux=v[i];
				v[i] = v[j];
				v[j]=aux;
				printf("Trocou \n");
			}
		}
	}
}

void saida (void){
	printf("Os numeros sao: ");
	for(i =0; i <TAM; i++){
		printf("%i", v[i]);
	}
	return 0;
}
