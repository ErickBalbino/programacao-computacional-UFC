// Escreva um algoritmo para ler 2 valores e se o segundo valor informado for ZERO,  deve ser lido um novo valor, ou seja, para o segundo valor não pode ser aceito o valor zero e imprimir o resultado da divisão do primeiro valor lido pelo segundo valor lido. Deve ser informado “VALOR INVÁLIDO. INFORME OUTRO NÚMERO.” enquanto o usuário fornecer o valor 0. 

#include <stdio.h>

int main(){
    float num1, num2;

    printf("Informe o primeiro valor: ");
    scanf("%f", &num1);
    do {
        printf("Informe o segundo valor: ");
        scanf("%f", &num2);
    } while (num2 == 0);

    printf("%.1f / %.1f = %.1f", num1, num2, num1 / num2);

    return 0;
}