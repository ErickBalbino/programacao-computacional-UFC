// Dado um inteiro positivo n e uma sequência de n inteiros, determinar quantos  números da sequência são positivos e quantos são não-positivos. Um número é não positivo se é negativo ou se é igual a 0 (zero). 

#include <stdio.h>

int main(){
    int num, positivos = 0, nao_positivos = 0, cont, sequencia = 1;

    printf("Informe um numero: ");
    scanf("%d", &cont);
    
    while(cont > 0){
        printf("Informe o %dº numero da sequencia: ", sequencia);
        scanf("%d", &num);

        if(num > 0){
            positivos+= 1;
        } else {
            nao_positivos += 1;
        }
        
        sequencia++;
        cont --;
    }

    printf("NUMEROS POSITIVOS >>> %d numeros\n", positivos);
    printf("NUMEROS NAO POSITIVOS >>> %d numeros\n", nao_positivos);
    
    return 0;
}