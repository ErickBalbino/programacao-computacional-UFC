// Ler 3 valores (A, B e C) representando as medidas dos lados de um triângulo e escrever se formam ou não um triângulo. OBS: para formar um triângulo, o valor de cada lado deve ser menor que a soma dos outros 2 lados. 

#include <stdio.h>

int main(){
    int l1, l2, l3;

    printf("Valor do lado 1 (cm): ");
    scanf("%d", &l1);
    printf("Valor do lado 2 (cm): ");
    scanf("%d", &l2);
    printf("Valor do lado 3 (cm): ");
    scanf("%d", &l3);

    if((l1 >= (l2 + l3)) || (l2 >= (l1 + l3)) || (l3 >= (l1 + l2))){
        printf("Nao forma um triangulo!");
    } else {
        printf("Forma um triangulo");
    }

    return 0;
}