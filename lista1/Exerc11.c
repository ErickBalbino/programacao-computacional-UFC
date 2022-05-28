// Dado um número natural na base binária, transformá-lo para a base decimal. Exemplo: Dado 10010 a saída será 18, pois 1 ∗ 24 + 0 ∗ 23 + 0 ∗ 22 + 1 ∗ 21 + 0 ∗ 20 = 18. 

#include <stdio.h>
#include <math.h>

int main()
{
    int num_binario, decimal = 0, cont;
    
    printf("Escreva um numero na base binaria: ");
    scanf("%d", &num_binario);
    
    for(cont = 0; num_binario > 0; cont++){
        decimal = decimal + pow(2, cont) * (num_binario % 10);
        num_binario = num_binario / 10;
    }
    
    printf("Numero na base decimal: %d\n", decimal);
    
    return 0;
}