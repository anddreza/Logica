#include <stdio.h>
#include <stdlib.h>
int main (void) {   
    int V[10], i;
    for (i= 0; i < 10; i++){ 
        V[i] = i;                  
        V[i] = V[10 - i];               
        
    }         
    for (i= 0; i < 10; i++){                
    printf("%d  ", V[i]);    
        
    }
}
