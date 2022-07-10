// QUESTAO 02 - Elabore um algoritmo C para efetuar a correção das provas dos alunos da disciplina
// de Programação Computacional do curso de Engenharia da Computação da UFC.
// A prova é composta por 10 questões, onde cada uma vale 1,0 ponto. Primeiramente,
// o gabarito da prova deve ser lido. Em seguida, devem ser lidas as respostas de cada
// aluno. Assuma que a turma possua N alunos, tal que 1 ≤ N ≤ 100, calcule e imprima
// o número e a nota de cada aluno. (Considere que o gabarito é formado por apenas
// caracteres a, b, c ou d).

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

typedef struct {
    char nome[30];
} aluno;

void EspacoDuplo(void) {
    printf("\n\n");
}

void EspacoSimples(void) {
    printf("\n");
}

int main() {
    int count, quant_alunos;
    char respostas_gabarito[10];
    char respostas_aluno[10];
    
    // lendo o gabarito da prova
    printf("Informe o gabarito da prova >>> \n");
    
    for (count = 0; count < 10; count++) {
        do {
            printf("%d questao: ", count + 1);
            scanf(" %c", &respostas_gabarito[count]);
            respostas_gabarito[count] = tolower(respostas_gabarito[count]);
        } while ((respostas_gabarito[count] != 'a') && (respostas_gabarito[count] != 'b') && (respostas_gabarito[count] != 'c') && (respostas_gabarito[count] != 'd'));
        
        getchar();
    }
    
    EspacoDuplo();
    
    // recebendo o numero de alunos
    do {
        printf("Informe a quantidade de alunos na turma: ");
        scanf("%d", &quant_alunos);
    } while (quant_alunos < 0 || quant_alunos > 100);
    
    int notas[quant_alunos];
    aluno alunos[quant_alunos];

    EspacoDuplo();
    
    // lendo o nome do aluno e as respostas dele
    for (count = 0; count < quant_alunos; count++) {
        if (count > 0) {
            EspacoDuplo();
        }
        
        printf("Informe o nome do aluno(a) %d: ", count + 1);
        scanf(" %[^\n]s", alunos[count].nome);
        
        EspacoSimples();
        
        printf("Respostas do aluno(a) %s >>>", alunos[count].nome);
        
        EspacoSimples();
        
        int i, aux = 0;
        
        // lendo as respostas do aluno
        for (i = 0; i < 10; i++) {
            do {
                printf("%d questao: ", i + 1);
                scanf(" %c", &respostas_aluno[i]);
                respostas_aluno[i] = tolower(respostas_aluno[i]);
            } while ((respostas_aluno[i] != 'a') && (respostas_aluno[i] != 'b') && (respostas_aluno[i] != 'c') && (respostas_aluno[i] != 'd'));
            
            getchar();
            
            // verificando se ele acertou a questao
            if (respostas_aluno[i] == respostas_gabarito[i]) {
                aux += 1;
            }
            
            // guardando o numero total de acertos do aluno
            notas[count] = aux;
        }
    }
    
    EspacoDuplo();
    
    // mostrando os dados finais na tela
    for(count = 0; count < quant_alunos; count++){
        printf("Aluno(a) %s - Nota: %d", alunos[count].nome, notas[count]);
        EspacoSimples();
    }
    
    getchar();
    
    return 0;
}