// QUESTAO 03 - Crie um algoritmo para armazenar as quatro notas de uma turma de N alunos,
// informado pelo usuário. Como resultado, o algoritmo deve apresentar um relatório
// informando:
// a. A média de cada aluno;
// b. A prova em que o aluno teve MENOR nota;
// c. Quais alunos foram aprovados por média. Assuma que a média seja 7,0.
// OBS: Utilize uma função para cada item.

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

typedef struct {
    char nome[30];
    double notas[4];
} aluno;

void EspacoDuplo(void) {
    printf("\n\n");
}

void EspacoSimples(void) {
    printf("\n");
}

void Tracejado(void) {
    EspacoSimples();
    printf("-----------------------------------------------------------------------");
    EspacoSimples();
}

void CalcMediaAlunos(int quant_alunos, aluno *alunos) {
    int count, i;
    double media, soma;
    
    // calculando a media
    for (count = 0; count < quant_alunos; count++){
        media = 0, soma = 0;
        
        for (i = 0; i < 4; i++){
            soma += alunos[count].notas[i];
        }
        
        media = soma / 4;
        
        printf("A media do aluno(a) %s: %.2lf", alunos[count].nome, media);
        EspacoSimples();
    }
}

void MenorNotaAluno(int quant_alunos, aluno *alunos) {
    int count, i, menor;
    
    for (count = 0; count < quant_alunos; count++) {
        int menor = 0;
        
        // verificando qual a menor nota
        if ((alunos[count].notas[0] <= alunos[count].notas[1]) && (alunos[count].notas[0] <= alunos[count].notas[2]) && (alunos[count].notas[0] <= alunos[count].notas[3])) {
            menor = 1;
        } else if ((alunos[count].notas[1] <= alunos[count].notas[0]) && (alunos[count].notas[1] <= alunos[count].notas[2]) && (alunos[count].notas[1] <= alunos[count].notas[3])) {
            menor = 2;
        } else if ((alunos[count].notas[2] <= alunos[count].notas[0]) && (alunos[count].notas[2] <= alunos[count].notas[1]) && (alunos[count].notas[2] <= alunos[count].notas[4])) {
            menor = 3;
        } else if ((alunos[count].notas[3] <= alunos[count].notas[0]) && (alunos[count].notas[3] <= alunos[count].notas[1]) && (alunos[count].notas[3] <= alunos[count].notas[2])) {
            menor = 4;
        }
  
        printf("A prova que o aluno(a) %s tirou a menor nota foi a %d", alunos[count].nome, menor);
        EspacoSimples();
    }
}

void SituacaoAlunos(int quant_alunos, aluno *alunos) {
    int count, i; 
    double soma, media;
    
    for (count = 0; count < quant_alunos; count++) {
        media = 0;
        soma = 0;
        
        for (i = 0; i < 4; i++) {
            soma += alunos[count].notas[i];
        }
        
        media = soma / 4;
        
        // verificando situacao do aluno
        if (media >= 7) {
            printf("O aluno(a) %s esta aprovado(a)!!!", alunos[count].nome);
            EspacoSimples();
        } else {
            printf("O aluno(a) %s esta reprovado(a)", alunos[count].nome);
            EspacoSimples();
        }
    }
}

int main () {
    int quant_alunos, count, i;
    
    // lendo a quantidade de alunos
    printf("Informe a quantidade de alunos da turma: ");
    scanf(" %d", &quant_alunos);
    
    aluno alunos[quant_alunos];
    
    EspacoDuplo();
    
    // lendos os nomes e notas dos alunos
    for (count = 0; count < quant_alunos; count++) {
        if (count > 0) {
            EspacoDuplo();
        }
        
        printf("Informe o nome do aluno(a) %d: ", count + 1);
        scanf(" %[^\n]s", alunos[count].nome);
        
        // lendo as notas dos alunos
        printf("Informe as quatro notas do aluno(a) %s >>>", alunos[count].nome);
        EspacoSimples();
        
        for (i = 0; i < 4; i++){
            do{
                printf("Nota %d: ", i + 1);
                scanf(" %lf", &alunos[count].notas[i]);
            } while (alunos[count].notas[i] < 0 || alunos[count].notas[i] > 10);
        }
    }
    
    EspacoDuplo();
    
    // calculando a media 
    CalcMediaAlunos(quant_alunos, alunos);

    Tracejado();
    
    // encontrando a menor nota
    MenorNotaAluno(quant_alunos, alunos);
    
    Tracejado();
    
    // verificando se esta aprovado ou reprovado
    SituacaoAlunos(quant_alunos, alunos);
    
    getchar();
    return 0;
}