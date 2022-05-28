// Escreva um algoritmo que faça a leitura de um número referente a um mês e informe a qual trimestre ele pertence. Informe também quantos dias tem esse mês.

#include <stdio.h>

int main(){
    int mes;

    // fevereiro - 28 dias
    // abril, junho, setembro, novembro - 30 dias

    printf("Informe o numero do mes: ");
    scanf("%d", &mes);

    if(mes <= 3){
        printf("O mes %d pertence ao primeiro trimestre\n", mes);
        
        if(mes == 2){
            printf("Tem 28 dias\n");
        } else {
            printf("Tem 31 dias\n");
        }
    } else if(mes > 3 && mes <= 6){
        printf("O mes %d pertence ao segundo trimestre\n", mes);

        if(mes == 4 || mes == 6){
            printf("Tem 30 dias\n");
        } else {
            printf("Tem 31 dias\n");
        }
    } else if(mes > 6 && mes <= 9){
        printf("O mes %d pertence ao terceiro trimestre\n", mes);

        if(mes == 9){
            printf("Tem 30 dias\n");
        } else {
            printf("Tem 31 dias\n");
        }
    } else if(mes > 9 && mes <= 12){
        printf("O mes %d pertence ao quarto trimestre\n", mes);

        if(mes == 11){
            printf("Tem 30 dias\n");
        } else {
            printf("Tem 31 dias\n");
        }
    }
    

    return 0;
}