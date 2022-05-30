#include <stdio.h>

int main(){

    /*
        Para imprimir uma variavel no printf, use a seguinte sintaxe:

        ~ int >>>
            printf("%d", variavel);

        ~ modulo (sem sinal) >>>
            printf("%u", variavel);

        ~ notacao cientifica >>>
            printf("%e", variavel);
        
        ~ float >>>
            printf("%f", variavel);

        ~ double >>>
            printf("%lf", variavel);

        ~ char >>>
            printf("%c", variavel);
    */ 

    int i = 10;
    float num = 23.3;
    double dinheiro = 203.22;
    char letra = 'A';

    printf("Imprimindo o valor inteiro: %d", i);
    printf("Imprimindo o valor float: %f", num);
    printf("Imprimindo o valor double: %lf", dinheiro);
    printf("Imprimindo um char: %c", letra);

    return 0;
}