// Escreva um algoritmo que faça a leitura de uma letra e informe se a letra é uma vogal ou uma consoante.

#include <stdio.h>

int main(){
    char letra;

    printf("Digite uma letra: ");
    scanf("%c", &letra);

    letra = tolower(letra);

    if((letra == 'a') || (letra == 'e') || (letra == 'i') || (letra == 'o') || (letra == 'u')){
        printf("A letra é uma vogal");
    } else {
        printf("A letra é uma consoante");
    }

    return 0;
}