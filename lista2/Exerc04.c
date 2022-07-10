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
    int quant_datas, count, horas_principal;
    data_referencia data_principal;

    do{
        printf("Informe a quantidade de datas que deseja inserir: ");
        scanf("%d", &quant_datas);
    } while (quant_datas < 0 || quant_datas > 100);

    int horas[quant_datas];
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

    printf("Informações da data referencia >>> ");
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
    
    // calculando horas data referencia
    horas_principal = (data_principal.dia * 24) + (data_principal.mes * 30 * 24) + (data_principal.ano * 365 * 24);

    // calculando as horas de cada data
    int soma;
    for (count = 0; count < quant_datas; count++) {
        soma = 0;

        soma = (datas[count].dia * 24) + (datas[count].mes * 30 * 24) + (datas[count].ano * 365 * 24);

        horas[count] = soma;
    }

    EspacoDuplo();
    
    // encontrando a data mais proxima
    int data_mais_proxima = 0;
    int hora_auxiliar;
    for (count = 0; count < quant_datas; count++) {
        if (count == 0) {
            data_mais_proxima = 0;
            hora_auxiliar = horas[count];
        } else if (count == 1) {
            int diferenca = hora_auxiliar - horas_principal;
            int diferenca_1 = horas[count] - horas_principal;
            
            if (diferenca < 0)  {
                diferenca = diferenca * (-1);
            } 
            
            if (diferenca_1 < 0) {
                diferenca_1 = diferenca_1 * (-1);
            }
            
            if (diferenca_1 < diferenca) {
                data_mais_proxima = 1;
                hora_auxiliar = diferenca_1;
            } else {
                data_mais_proxima = 0;
                hora_auxiliar = diferenca;
            }
        } else {
            int diferenca = horas[count] - horas_principal;
            
            if (diferenca < 0) {
                diferenca = diferenca * (-1);
            }
            
            if (diferenca < hora_auxiliar) {
                data_mais_proxima = count;
                hora_auxiliar = diferenca;
            }
        }
    }
    
    EspacoDuplo();
    
    printf("A data mais proxima é a %d/%d/%d com %d horas ou %d dias de aproximacao!", datas[data_mais_proxima].dia, datas[data_mais_proxima].mes, datas[data_mais_proxima].ano, hora_auxiliar, hora_auxiliar / 24);
    
    getchar();
    return 0;
}


// como saberia que uma data ta proxima de outra
