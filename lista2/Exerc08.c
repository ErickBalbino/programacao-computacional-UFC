// QUESTAO 08 - Um matemático italiano da idade média conseguiu modelar o ritmo de crescimento
// da população de coelhos através de uma sequência de números naturais que passou
// a ser conhecida como sequência de Fibonacci. O enésimo número da sequência de
// Fibonacci dado pela seguinte fórmula de recorrência:

// {

// F1 = 1
// F2 = 1

// Fi = Fi−1 + Fi−2 para i ≥ 3

// Faça um programa que para um dado n apresente a sequência até Fn.


#include <stdio.h>

void EspacoSimples() {
    printf("\n");
}

void EspacoDuplo() {
    printf("\n\n");
}

int main () {
    int num1 = 0, num2 = 1, auxiliar, count, tam;

    // pegando o valor da quantidade de numeros da sequencia
    printf("Informe o tamanho da sequencia de Fibonacci: ");
    scanf("%d", &tam);
    
    EspacoDuplo();
    
    // mostrando a sequencia
    printf("Série de Fibonacci >>> ");
    EspacoSimples();
    printf("%d - ", num2);

    for(count = 0; count < (tam - 1); count++) {
        auxiliar = num1 + num2;
        num1 = num2;
        num2 = auxiliar;

        printf("%d", auxiliar);
        
        if (count < tam - 2) {
            printf(" - ");
        }
    }
    
    return 0;
}