// Escreva um algoritmo que imprima a tabuada (de 1 a 10) para os números de 1 a 10.

#include <stdio.h>
#include <math.h>

int main()
{
    int num, i, j;
    
    for(i = 1; i <= 10; i++){
        for(j = 1; j <= 10; j++){
            printf("%2d * %2d = %2d\n", i, j, i*j);
        }
        
        printf("\n");
    }
    
    return 0;
}