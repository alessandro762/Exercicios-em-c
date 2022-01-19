#include <stdio.h>

int main(){
  //Escreva um algoritmo para ler o número total de eleitores de um município, o número de votos
//brancos, nulos e válidos. Calcular e escrever o percentual que cada um representa em relação ao total
//de eleitores

double eleitores;
double brancos;
double nulos;
double validos;
double brancos1;
double nulos1;
double validos1;

printf("Digite o numero de eleitores:");

scanf("%lf",&eleitores);

printf("Digite a quantidade de votos brancos:");

scanf("%lf",&brancos);

printf("Digite a quantidade de votos nulos:");

scanf("%lf",&nulos);

brancos1=brancos*100/eleitores;
nulos1=nulos*100/eleitores;
validos1=eleitores-(brancos+nulos);

printf("Votos branco:%.lf\n",brancos1);
printf("Votos nulo:%.lf\n",nulos1);
printf(" O total de votos validos sao:%.lf:porcento\n ",validos1*100/eleitores);




}