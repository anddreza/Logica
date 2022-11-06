/* Repetir de 2 em 2, se fosse de 3 em 3 era só alterar (i % 2 != 0) */


#include <stdio.h>
#include <stdlib.h>


int i;

int main (int argc, char *argv[]){
	
	for(int i = 1; i <= 100; i++){
		if(i % 2 == 0) 
		printf(" %d", i);		
	}



	return 0;
}
