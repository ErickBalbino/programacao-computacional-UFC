#include <stdio.h>
#include <stdlib.h>

void EspacoDuplo(void) {
    // colocar dois espaços no programa
    printf("\n\n");
}

void EspacoSimples(void) {
    // colocar um espaço no programa
    printf("\n");
}

void MatrizCriada (int linhas, int colunas, int *matriz) {
    // mostrar para o usuario a matriz criada
    printf("MATRIZ >>>");
    
    EspacoSimples();
    
    int elemento;
    for (elemento = 0; elemento < (linhas * colunas); elemento++) {
        printf("\t%d", *(matriz + elemento));
        
        if ((elemento > 0) && ((elemento + 1) % colunas == 0)) {
            EspacoSimples();
        }
    }
}

void SomarElementos (int linhas, int colunas, int *matriz) {
    int elemento, soma = 0;
    
    for (elemento = 0; elemento < (linhas * colunas); elemento++) {
        soma = soma + *(matriz + elemento);
    }
    
    printf("A soma dos elementos da matriz eh: %d!!!", soma);
}

void MaiorElemento (int linhas, int colunas, int *matriz) {
    int elemento, maior = 0, count = 0;
    
    for (elemento = 0; elemento < (linhas * colunas); elemento++) {
        if (count == 0) {
            maior = *(matriz + elemento);
            count++;
        } else {
            if(*(matriz + elemento) >= maior){
                maior = *(matriz + elemento);
            }
        }
    }
    
    printf("O maior elemento da matriz eh: %d!!!", maior);
}

void MenorElemento (int linhas, int colunas, int *matriz) {
    int elemento, menor = 0, count = 0;
    
    for (elemento = 0; elemento < (linhas * colunas); elemento++) {
        if (count == 0) {
            menor = *(matriz + elemento);
            count++;
        } else {
            if(*(matriz + elemento) <= menor){
                menor = *(matriz + elemento);
            }
        }
    }
    
    printf("O menor elemento da matriz eh: %d!!!", menor);
}

void MaiorMenorElemento (int linhas, int colunas, int *matriz) {
    int elemento, menor = 0, maior = 0, count_maior = 0, count_menor = 0;
    
    // calculando maior elemento
    for (elemento = 0; elemento < (linhas * colunas); elemento++) {
        if (count_maior == 0) {
            maior = *(matriz + elemento);
            count_maior++;
        } else {
            if(*(matriz + elemento) >= maior){
                maior = *(matriz + elemento);
            }
        }
    }
    
    // calculando menor elemento
    for (elemento = 0; elemento < (linhas * colunas); elemento++) {
        if (count_menor == 0) {
            menor = *(matriz + elemento);
            count_menor++;
        } else {
            if(*(matriz + elemento) <= menor){
                menor = *(matriz + elemento);
            }
        }
    }
    
    printf("O maior valor: %d | O menor valor: %d!!!", maior, menor);
}

void ElementosMaiorQue50(int linhas, int colunas, int *matriz) {
    int elemento, count = 0;
    
    printf("Elementos maiores que 50 >>> ");
    for (elemento = 0; elemento < (linhas * colunas); elemento++) {
        if(*(matriz + elemento) > 50) {
            printf("%d, ", *(matriz + elemento));
            count++;
        }
    }
    
    if (count == 0){
        printf("[]");
    }
    printf("!!!");
}

void ElementosPares(int linhas, int colunas, int *matriz) {
    int elemento, count = 0;
    
    printf("Elementos pares >>> ");
    for (elemento = 0; elemento < (linhas * colunas); elemento++) {
        if (*(matriz + elemento) % 2 == 0){
            printf("%d, ", *(matriz + elemento));
            count++;
        }
    }
    
    if (count == 0){
        printf("[]");
    }
    
    printf("!!!");
}

void QuantidadePares(int linhas, int colunas, int *matriz) {
    int elemento, count = 0;
    
    for (elemento = 0; elemento < (linhas * colunas); elemento++) {
        if (*(matriz + elemento) % 2 == 0){
            count++;
        }
    }
    
    printf("Quantidade de pares na matriz: %d!!!", count);
}

int main()
{
    int linhas, colunas;
    
    // ler as informações da matriz
    printf("Digite a quantidade de linhas da matriz: ");
    scanf("%d", &linhas);
    printf("Digite a quantidade de colunas da matriz: ");
    scanf("%d", &colunas);
    
    EspacoDuplo();
    
    // preencher a matriz criada
    int matriz[linhas][colunas];
    
    for (int l = 0; l < linhas; l++) {
        for (int c = 0; c < colunas; c++){
            printf("Elemento - Linha %d | Coluna %d: ", l+1, c+1);
            scanf("%d", &matriz[l][c]);
        }
    }
    
    EspacoDuplo();
    
    // mostrar matriz
    MatrizCriada(linhas, colunas, *matriz);
    
    EspacoDuplo();
    
    // somar os elementos
    SomarElementos(linhas, colunas, *matriz);
    
    EspacoDuplo();
    
    // mostrar maior elemento
    MaiorElemento(linhas, colunas, *matriz);
    
    EspacoDuplo();
    
    // mostrar menor elemento
    MenorElemento(linhas, colunas, *matriz);
    
    EspacoDuplo();
    
    // mostrar maior e menor elemento da matriz
    MaiorMenorElemento(linhas, colunas, *matriz);
    
    EspacoDuplo();
    
    // mostrar elementos maiores que 50
    ElementosMaiorQue50(linhas, colunas, *matriz);
    
    EspacoDuplo();
    
    // exibir elementos pares
    ElementosPares(linhas, colunas, *matriz);
    
    EspacoDuplo();
    
    // quantidade de elementos pares
    QuantidadePares(linhas, colunas, *matriz);
    
    return 0;
}
