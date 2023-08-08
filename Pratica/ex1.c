#include <stdio.h>
#include <stdlib.h>
 
int main(void) { 
	float raio, A, r = 3.14;
    
    printf("Digite o raio \n: ");
    scanf("%f", &raio );
    fflush(stdin);
    
    A = r * raio * raio;
    
    printf(" AREA = %.2f m2 \n", A);
    
    return 0;
}
