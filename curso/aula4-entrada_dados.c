#include <stdio.h>
#include <stdlib.h> 

int main(){
    // Para ler um dado se utiliza a função scanf

    /*
        Sintaxe:
        
        int num;
        scanf("%d", &num);

        O primeiro parametro é um indicador do tipo de dado que vai receber, o segundo é o endereço da variavel.
    */

    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);
    
    return 0;
}