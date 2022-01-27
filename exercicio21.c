#include <stdio.h>


int main(){
//Ler a hora de início e a hora de fim de um jogo de Xadrez (considere apenas horas inteiras, sem os
//minutos) e calcule a duração do jogo em horas, sabendo-se que o tempo máximo de duração do jogo é
//de 24 horas e que o jogo pode iniciar em um dia e terminar no dia seguinte. 
	int inicio;
  int fim;
  int total;

	printf("Digite a hora do inicio da Partida(por favor digite so a hora nao e necessario os minutos:\n");
	scanf("%d",&inicio);

	printf("Digite a hora do termino da partida(por favor digite so a hora nao e necessario os minutos):\n");
	scanf("%d",&fim);

	if(inicio >= fim){
		total = ( 24 - inicio) + fim;
		printf("A hora total de jogo foi de:%d horas",total);
	}

	else{
		total= fim - inicio;
		printf("A hora total de jogo foi de:%d horas",total);
	}
}