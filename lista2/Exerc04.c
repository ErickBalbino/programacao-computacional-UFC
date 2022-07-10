// QUESTAO 04 - Dadas N datas dd/mm/aaaa, com 1 ≤ N ≤ 100, e uma data de referência d, verifique
// qual das N datas é mais próxima à data d.

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int dia;
    int mes;
    int ano;
} data;

typedef struct {
    int dia;
    int mes;
    int ano;
} data_referencia;

void EspacoDuplo(void) {
    printf("\n\n");
}

void EspacoSimples(void) {
    printf("\n");
}

int main () {
    int quant_datas, count;
    data_referencia data_principal;

    do{
        printf("Informe a quantidade de datas que deseja inserir: ");
        scanf("%d", &quant_datas);
    } while (quant_datas < 0 || quant_datas > 100);

    data datas[quant_datas];
    
    EspacoDuplo();

    // lendo as datas
    for (count = 0; count < quant_datas; count++) {
        if (count > 0) {
            EspacoSimples();
        }
        printf("Insira as informações da data %d >>> ", count + 1);
        
        EspacoSimples();

        do {
            printf("Dia: ");
            scanf("%d", &datas[count].dia);
        } while (datas[count].dia < 0 || datas[count].dia > 31);

        do {
            printf("Mes: ");
            scanf("%d", &datas[count].mes);
        } while (datas[count].mes < 0 || datas[count].mes > 12);
        do {
            printf("Ano: ");
            scanf("%d", &datas[count].ano);
        } while (datas[count].ano < 0);
    }

    EspacoDuplo();

    printf("Informações da data referência >>> ");
    EspacoSimples();

    do {
        printf("Dia: ");
        scanf("%d", &data_principal.dia);
    } while (data_principal.dia < 0 || data_principal.dia > 31);
    do {
        printf("Mes: ");
        scanf("%d", &data_principal.mes);
    } while (data_principal.mes < 0 || data_principal.mes > 12);
    do {
        printf("Ano: ");
        scanf("%d", &data_principal.ano);
    } while (data_principal.ano < 0);

    // mostrando as datas
    for (count = 0; count < quant_datas; count++) {
        printf("%d/%d/%d", datas[count].dia, datas[count].mes, datas[count].ano);
        EspacoSimples();
    }

    EspacoDuplo();
    
    printf("Data referencia: %d/%d/%d", data_principal.dia, data_principal.mes, data_principal.ano);

    getchar();
    return 0;
}


// como saberia que uma data ta proxima de outra
