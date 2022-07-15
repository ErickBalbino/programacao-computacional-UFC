// QUESTAO 09 - Escreva uma função que receba uma matriz de números inteiros A, de dimensão
// m × m, fornecidas pelo usuário, e dois números inteiros i e j, troque os conteúdos
// da linha i e da coluna j da matriz A e imprima a matriz resultante. Obs: 0 ≤ i,j < m.

#include <stdio.h>
#include <stdlib.h>

void EspacoSimples (void) {
    printf("\n");
}

void EspacoDuplo (void) {
    printf("\n\n");
}

void MatrizOriginal(int tam, int matriz[tam][tam])
{
    int linha, coluna;
    
    printf("MATRIZ ORIGINAL >>> ");
    EspacoSimples();
    
    for(linha = 0; linha < tam; linha++){
      for (coluna = 0; coluna < tam; coluna++) {
        printf("%5d", matriz[linha][coluna]);
      }
      
      EspacoSimples();
    }
}

void TrocaValores (int tam, int i, int j, int matriz[tam][tam]) {
    int linha, coluna, linha_trocar[tam], coluna_trocar[tam];
    
    // pegando valor da linha da troca
    for (linha = i; linha <= i; linha++) {
      for (coluna = 0; coluna < tam; coluna++) {
        linha_trocar[coluna] = matriz[linha][coluna];
      }
      
      EspacoSimples();
    }
    
    // pegando valor da coluna da troca;
    for (coluna = j; coluna <= j; coluna++) {
        for (linha = 0; linha < tam; linha++) {
            coluna_trocar[linha] = matriz[linha][coluna];
        }
    }
    
    
    // invertendo valores
    for (linha = i; linha <= i; linha++) {
      for (coluna = 0; coluna < tam; coluna++) {
        matriz[linha][coluna] = coluna_trocar[coluna];
      }
      
      EspacoSimples();
    }
    
    for (coluna = j; coluna <= j; coluna++) {
        for (linha = 0; linha < tam; linha++) {
            matriz[linha][coluna] = linha_trocar[linha];
        }
    }
    
    printf("VALOR LINHA >>> ");
    for (linha = 0; linha < tam; linha++) {
        printf("%d - ", linha_trocar[linha]);
    }
    
    EspacoSimples();
    
    printf("VALOR COLUNA >>> ");
    for (coluna = 0; coluna < tam; coluna++) {
        printf("%d - ", coluna_trocar[coluna]);
    }
    
    EspacoDuplo();
    
    printf("MATRIZ RESULTANTE >>> ");
    EspacoSimples();
    for(linha = 0; linha < tam; linha++) {
        for (coluna =0; coluna < tam; coluna++) {
            printf("%5d", matriz[linha][coluna]);
        }
        
        EspacoSimples();
    }
}

int main() {

  int i, j, linha, coluna, tam;

  printf("Informe a ordem da matriz quadrada: ");
  scanf("%d", &tam);

  // preenchendo a matriz
  int matriz[tam][tam];
  for (linha = 0; linha < tam; linha++) {
    for (coluna = 0; coluna < tam; coluna++) {
      printf("Digite linha %d coluna %d: ", linha + 1, coluna + 1);
      scanf(" %d", &matriz[linha][coluna]);
    }
  }
  
  EspacoDuplo();

  // informacoes para trocar valores
  do {
    printf("Informe a linha da troca de valores: ");
    scanf("%d", &i);
  } while (i < 0 || i > tam);
  do {
    printf("Informe a coluna da troca de valores: ");
    scanf("%d", &j);
  } while (j < 0 || j > tam);
  
  // convertendo
  i = i - 1;
  j = j - 1;
  
  EspacoDuplo();
  
  MatrizOriginal(tam, matriz);
  
  EspacoDuplo();
  
  TrocaValores(tam, i, j, matriz);

  return 0;
}