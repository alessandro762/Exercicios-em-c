#include <stdio.h>
int main(){
//Ler a hora de início e a hora de fim de um jogo de Xadrez (considere apenas horas inteiras, sem os
//minutos) e calcule a duração do jogo em horas, sabendo-se que o tempo máximo de duração do jogo é
//de 24 horas e que o jogo pode iniciar em um dia e terminar no dia seguinte. 

int inicio;
int fim;
int total;

printf("Digite a hora que comecou o jogo(por favor coloque apenas as horas nao e necessario os minutos):\n");
scanf("%d",&inicio);

printf("Digite a hora que terminou o jogo(por favor coloque apenas as horas nao e necessario os minutos:\n");
scanf("%d",&fim);

total=fim-inicio;
 printf("O total de horas jogadas e de:%d horas",total);
}