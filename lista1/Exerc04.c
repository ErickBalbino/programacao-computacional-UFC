// Ler o salário fixo e o valor das vendas efetuadas pelo vendedor de uma empresa.  Sabendo-se que ele recebe uma comissão de 3% sobre o total das vendas até R$  1.500,00 mais 5% sobre o que ultrapassar este valor, calcular e escrever o seu  salário total.

#include <stdio.h>

int main(){
    float salario, valor_vendas, salario_total;

    printf("Salario do vendedor: ");
    scanf("%f", &salario);
    printf("Valor das vendas: ");
    scanf("%f", &valor_vendas);

    if(valor_vendas <= 1500){
        salario_total = salario + (3 * valor_vendas /100);
    } else{
        salario_total = salario + (5 * valor_vendas /100);
    }

    printf("O salario total so vendedor e: R$ %.1f", salario_total);

    return 0;
}