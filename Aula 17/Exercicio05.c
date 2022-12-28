/*
5. Faça um programa que leia uma data, passe para uma função que
reajuste esta data em cinco dias.
R.:
*/

#include <stdio.h>
#include <stdlib.h>

// prototipo da função
void novadata(int dia, int mes, int ano);

int main (void){
	// variáveis
	int d,m,a;
	printf("Digite data (d/m/a): ");
	scanf("%i%*c%i%*c%i",&d,&m,&a);
	
	novadata(d,m,a);
	
	return 0;
}

// funções
void novadata(int d, int m, int a){
	printf("Data atual: %i/%i/%i\n",d,m,a);
	d+=5;
	if((d>31) && (m==1 || m==3 || m==5 || m==7 || m==8 || m==10)){
		m+=1;
		d-=31;
	}else if((d>30) && (m==4 || m==6 || m==9 || m==11)){
		m+=1;
		d-=30;
	}else if((d>29) && (m==2) && (a%4==0 || a%400==0 || a%100==0)){
		m+=1;
		d-=29;
	}else if((d>28) && (m==2)){
		m+=1;
		d-=28;
	}else if((d>31) && (m==12)){
		a+=1;
		m=1;
		d-=31;
	}
	
	printf("Nova data: %i/%i/%i\n",d,m,a);
}

