/*
3. Fazer um programa que possibilite várias opções de cálculos a
partir de um menu. O programa chamará a função correspondente
a cada cálculo.
[ a ] S = 1/1 + 3/2 + 5/3+........+ 99/50
[ b ] S = 1/1 - 2/2 + 3/3 -..........- 10/10
[ c ] S = 1000/1 - 997/2 + 994/3.........
[ d ] S = 480/10 - 475/11 + 470/12 - .......
[ f ] FIM
Obs.: Nas opções [c] e [d] fazer os cálculos para os 
20 primeiros termos.
R.:
*/

#include <stdio.h>
#include <stdlib.h>

// prototipo da função
void a(void);
void b(void);
void c(void);
void d(void);

int main (void){
	// variáveis
	char op;
	
	// entrada
	do{
		system("cls");
		printf("[a] S = 1/1 + 3/2 + 5/3 +........+ 99/50\n");
		printf("[b] S = 1/1 - 2/2 + 3/3 -........- 10/10\n");
		printf("[c] S = 1000/1 - 997/2 + 994/3 ..........\n");
		printf("[d] S = 480/10 - 475/11 + 470/12 - ......\n");
		printf("[f] FIM\n");
		printf("Digite uma opcao: ");
		scanf("%c",&op);
		fflush(stdin);
		
		switch(op){
			case 'a':
				a();
				break;
			case 'b':
				b();
				break;
			case 'c':
				c();
				break;
			case 'd':
				d();
				break;
			case 'f':
				printf("Saindo...\n");
				break;
			default:
				printf("Erro, opcao invalida\n");
		}
		getch();
		
	}while(op!='f');
	
	return 0;
}

// funções
void a(void){
	//[a] S = 1/1 + 3/2 + 5/3 +........+ 99/50\n
	// variáveis locais
	int i,j;
	float s=0;
	
	// processamento
	for(i=1,j=1; i<=99,j<=50; i+2,j++){
		s+=(float)i/j;
	}
	printf("[a] S = 1/1 + 3/2 + 5/3 +........+ 99/50 = %f\n",s);
}

void b(void){
	//[b] S = 1/1 - 2/2 + 3/3 -........- 10/10
	// variáveis locais
	int i,j;
	float s=0;
	
	// processamento
	for(i=1,j=1; i<=10,j<=10; i++,j++){
		if(i%2!=0){
			s+=(float)i/j;
		}else{
			s-=(float)i/j;
		}
		
	}
	printf("[b] S = 1/1 - 2/2 + 3/3 -........- 10/10 = %f\n",s);
	
}
void c(void){
	//[c] S = 1000/1 - 997/2 + 994/3 ..........
	int i,j;
	float s=0;
	
	// processamento
	for(i=1000,j=1; j<=20; i-=3,j++){
		if(j%2!=0){
			s+=(float)i/j;
		}else{
			s-=(float)i/j;
		}
		
	}
	printf("[c] S = 1000/1 - 997/2 + 994/3 .......... = %f\n",s);
	
}
void d(void){
	//[d] S = 480/10 - 475/11 + 470/12 - ......\n"
	int i,j;
	float s=0;
	
	// processamento
	for(i=480,j=10; j<=30; i-=5,j++){
		if(j%2==0){
			s+=(float)i/j;
		}else{
			s-=(float)i/j;
		}
		
	}
	printf("[d] S = 480/10 - 475/11 + 470/12 - ...... = %f\n",s);
}
