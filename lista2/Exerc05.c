#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char nome[30];
    char telefone[11];
    int dia;
    int mes;
    int ano;
} pessoa;

typedef struct {
    int dia;
    int mes;
} data;

void EspacoSimples(void) {
    printf("\n");
}

void EspacoDuplo(void) {
    printf("\n\n");
}

int main () {   
    int quant_pessoas, count;
    data data_referencia;

    printf("Quantas pessoas deseja adicionar: ");
    scanf(" %d", &quant_pessoas);

    pessoa pessoas[quant_pessoas];
    
    EspacoDuplo();

    // pegando informarções do usuario
    for (count = 0; count < quant_pessoas; count++) {
        printf("Insira o nome da pessoa %d: ", count + 1);
        scanf(" %[^\n]s", pessoas[count].nome);
        printf("Informe o numero de telefone da pessoa %d: ", count + 1);
        scanf(" %[^\n]s", pessoas[count].telefone);
        do {
            printf("Informe o dia de aniversario: ");
            scanf(" %d", &pessoas[count].dia);
        } while (pessoas[count].dia < 0 || pessoas[count].dia > 31);
        do {
            printf("Informe o mes de aniversario: ");
            scanf(" %d", &pessoas[count].mes);
        } while(pessoas[count].mes < 0 || pessoas[count].mes > 12);
        do {
            printf("Informe o ano de aniversario: ");
            scanf(" %d", &pessoas[count].ano);
        } while(pessoas[count].ano < 0);
        
        EspacoDuplo();
    }

    EspacoDuplo();

    // lendo a data referencia
    printf("Informe uma data referencia >>>");
    EspacoSimples();
    do {
        printf("Informe o dia: ");
        scanf(" %d", &data_referencia.dia);
    } while(data_referencia.dia < 0 || data_referencia.dia > 31);
    do {
        printf("Informe o mes: ");
        scanf(" %d", &data_referencia.mes);
    } while(data_referencia.mes < 0 || data_referencia.mes > 12);

    EspacoDuplo();

    // convertendo a data referencia para dia
    int convert_data_referencia = data_referencia.dia + (data_referencia.mes * 30);
    int quant_aniversarios = 0;;

    // verificando se a pessoa faz aniversario nesse dia
    for (count = 0; count < quant_pessoas; count++) {
        int convert_data_aniversario = pessoas[count].dia + (pessoas[count].mes * 30);

        if (convert_data_referencia - convert_data_aniversario == 0) {
            printf("O(A) %s | Telefone: %s, faz aniversario hoje >>> %d/%d", pessoas[count].nome, pessoas[count].telefone, pessoas[count].dia, pessoas[count].mes);
            EspacoSimples();
            quant_aniversarios += 1;
        }
    }
    
    // caso ninguem faça aniversario
    if (quant_aniversarios == 0) {
        printf("Ninguem faz aniversario nessa data!!!");
    }

    getchar();
    return 0;
}
