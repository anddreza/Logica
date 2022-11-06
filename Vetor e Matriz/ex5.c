#include <stdio.h>
#include <stdlib.h>
	
int main(void){
	int i; 
	char v[5][50];
	
	for (i=0; i<= 5; i++){
		printf("Digite a %i\xA6 palavra: ", i+1);
		fgets(v[i]);
		//scanf("%c\n", &v[i]);
		fflush(stdin);
	}

	//printf("As palavras lançadas foram \n");
	for (i=4; i >= 0; i--){
		printf("%i\xA6 = %s\n", i+1, v[i]);
	}
	return 0;
}

