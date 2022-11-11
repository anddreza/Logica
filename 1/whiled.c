#include <stdio.h>

int main (){
	int i = 1;
	int j = 2;
	while (i <= 10 ){
		while (j <= 9){
			printf("%d\n", j);
			j++;
		}
		printf("%d\n", i);
		i++;
	}	
}
