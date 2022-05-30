#include <stdio.h>

int main(){
    // variaveis e tipos de dados

    /*
        Existe no C os tipos de variaveis
        - int : valores inteiros
        - float : valores reais
        - double : valores de ponto flutuante, duas vezes o tamanho de float
        - char : caractere
        - void : vazio
    */

   /*
        Sintaxe >>>
        nome_variavel = valor;

        O nome da variavel nao pode: 
        1 - começar com numeros
        2 - ter espaços
   */

   int num;

   printf("Informe um valor: ");
   scanf("%d", &num);

   return 0;
}