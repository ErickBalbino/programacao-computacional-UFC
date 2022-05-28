
// Uma revendedora de carros usados paga a seus funcionários vendedores um salário fixo por mês, mais uma comissão também fixa para cada carro vendido e mais 5%  do valor das vendas por ele efetuadas. Escrever um algoritmo que leia o número de  carros por ele vendidos, o valor total de suas vendas, o salário fixo e o valor que ele  recebe por carro vendido. Calcule e escreva o salário final do vendedor

#include <stdio.h>

int main()
{
    int carros_vendidos;
    float valor_vendas, salario, comissao_carro, total_salario;
    
    printf("Numero de carros vendidos: ");
    scanf("%d", &carros_vendidos);
    printf("Total de venda no mes: ");
    scanf("%f", &valor_vendas);
    printf("Salario fixo por mes: ");
    scanf("%f", &salario);
    printf("Comissao por carro vendido: ");
    scanf("%f", &comissao_carro);
    
    total_salario = (salario + (comissao_carro*carros_vendidos) + (5 * valor_vendas / 100));
    
    printf("O salario final do vendedor e: %.1f\n", total_salario);
    
    return 0;
}