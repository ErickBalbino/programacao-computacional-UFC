// O custo de um carro novo ao consumidor é a soma do custo de fábrica com a porcentagem do distribuidor e dos impostos (aplicados ao custo de fábrica). Supondo  que o percentual do distribuidor seja de 28% e os impostos de 45%, escrever um  algoritmo para ler o custo de fábrica de um carro, calcular e escrever o custo final ao consumidor.

#include <stdio.h>

int main() {
    int custo_fabrica, valor_final;
    
    printf("Informe o valor do custo de fabrica: ");
    scanf("%d", &custo_fabrica);
    
    valor_final = custo_fabrica + (28 * custo_fabrica /100) + (45 * custo_fabrica /100);
    
    printf("Valor final do carro e: R$%d\n", valor_final);

    return 0;
}