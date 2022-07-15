#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void EspacoSimples () {
    printf("\n");
}

void EspacoDuplo () {
    printf("\n\n");
}

int ContarQuantElementos(int n)
{
    int count = 0;
  
    // Remover o ultimo digito do elemento
    while (n != 0) {
  
    //Incrementar contador
        count++;
        n /= 10;
    }
  
    return count;
}

void VerificarEncaixe (int a, int b) {
    int count = 0;
    
    printf("tamanho de a: %d", ContarQuantElementos(a));
    EspacoSimples();
    printf("tamanho de b: %d", ContarQuantElementos(b));
    
    EspacoDuplo();
    
    printf("Valor de a: %d | valor de b: %d", a, b);
    
    if(ContarQuantElementos(a) >= ContarQuantElementos(b)) {
        count = ContarQuantElementos(a) - ContarQuantElementos(b);
        count -= 1;
        
        int i;
        for (i = count; i < ContarQuantElementos(a); count++) {
            
        }
    } else {
        printf(" | Não se encaixa!!");
    }
}

int main () {
    int num1, num2;

    printf("Informe o primeiro numero: ");
    scanf("%d", &num1);
    printf("Informe o segundo numero: ");
    scanf("%d", &num2);

    EspacoDuplo();

    VerificarEncaixe(num1, num2);
    return 0;
}