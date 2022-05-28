// Dado n, imprimir as n primeiras potências de 2. Exemplo: para n = 5 a saída deve  ser 1, 2, 4, 8, 16. 

#include <stdio.h>
#include <math.h>

int main(){
    int num, potencia, cont;

    do {
        printf("Informe um numero: ");
        scanf("%d", &num);
    } while (num < 0);

    cont = 0;

    while(cont < num){
        potencia = pow(2, cont);
        printf("%d\n", potencia);

        cont++;
    }

    return 0;
}