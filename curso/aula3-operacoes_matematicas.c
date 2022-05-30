#include <stdio.h>
#include <stdlib.h>

int main(){

    /*
        Operações matemáticas no c;
        
        + soma;
        - subtração;
        / divisão;
        * multiplicação;
        % resto / modulo da divisao;
    */

    int num1, num2;

    num1 = 100;
    num2 = 294;

    printf("A soma de %d + %d = %d", num1, num2, num1 + num2);
    printf("A subtracao de %d - %d = %d", num1, num2, num1 - num2);
    printf("A multiplicacao de %d * %d = %d", num1, num2, num1 * num2);
    printf("A divisao de %d / %d = %d", num1, num2, num1 / num2);
    printf("O modulo da divisao de %d %% %d = %d", num1, num2, num1 % num2);

    return 0;
}