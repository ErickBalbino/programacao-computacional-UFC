// 10. Implemente uma função que calcule as raízes de uma equação do segundo grau do
// tipo ax^2 + bx + c = 0.

#include <stdio.h>
#include <math.h>

void EspacoDuplo () {
    printf("\n\n");
}

void EspacoSimples() {
    printf("\n");
}

int calc_raizes(float a, float b, float c)
{
    float delta, x1, x2;
    
    // calculando delta
    delta = pow(b, 2) - 4 * a * c;
    
    // mostrando equacao
    printf("Formato da equacao >>> ");
    EspacoSimples();
    printf("f(x) = %3.2fx² + %3.2fx + %3.2f", a, b, c);
    
    EspacoDuplo();
    
    // mostrando delta
    printf("DELTA = %.1f", delta);
    
    EspacoDuplo();
    
    if (delta < 0) {
        printf("Esta equação nao possui raizes reais!");
    }
    else if (delta == 0) {
        // calculando raiz 1
        x1 = -b / (2 * a);
        
        printf("Esta equacao possui uma raiz real >>>");
        EspacoSimples();
        printf("Raiz 1: %.1f", x1);
    }
    else {
        // calculando as duas raizes
        x1 = (-b - sqrt(delta)) / (2 * a);
        x2 = (-b + sqrt(delta)) / (2 * a);
        
        printf("Esta equacao possui duas raizes reais >>>");
        EspacoSimples();
        printf("Raiz 1: %.1f", x1);
        EspacoSimples();
        printf("Raiz 2: %.1f", x2);
    }
}

void main(){
    float a, b, c;

    // Ler os coeficientes da equação
    printf("Informe o coeficiente a da equacao: ");
    scanf(" %f", &a);
    printf("Informe o coeficiente b da equacao: ");
    scanf(" %f", &b);
    printf("Informe o coeficiente c da equacao: ");
    scanf(" %f", &c);

    EspacoDuplo();

    calc_raizes(a, b, c);
}