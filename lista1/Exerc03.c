// Ler a hora de início e a hora de fim de um jogo de Xadrez (considere apenas horas  inteiras, sem os minutos) e calcule a duração do jogo em horas, sabendo-se que o tempo máximo de duração do jogo é de 24 horas e que o jogo pode iniciar em um dia e terminar no dia seguinte.

#include <stdio.h>

int main(){
    int hora_inicio, hora_fim, tempo_total;

    do{
        printf("Hora de inicio do jogo: ");
        scanf("%d", &hora_inicio);
    } while ((hora_inicio > 24) || (hora_inicio < 0));
    do{
        printf("Hora do fim do jogo: ");
        scanf("%d", &hora_fim);
    } while ((hora_fim > 24) || (hora_fim < 0));

    if(hora_fim < hora_inicio){
        tempo_total = (24 - hora_inicio) + hora_fim;
    }

    if(hora_fim > hora_inicio){
        tempo_total = hora_fim - hora_inicio;
    }

    if(hora_fim == hora_inicio){
        tempo_total = 1;
    }

    printf("Tempo total: %d horas", tempo_total);

    return 0;
}