#include <stdio.h>
int main(){

//Ler o ano atual e o ano de nascimento de uma pessoa. Escrever uma mensagem que diga se ela
//poderá ou não votar este ano (não é necessário considerar o mês em que a pessoa nasceu). 

int ano1;
int ano2=2022;
printf("Digite o ano que voce nasceu:");
scanf("%d",&ano1);

ano2=ano2-ano1;

if(ano2<18){
printf("Voce ainda nao pode votar esse ano");
}
else{
  printf("Voce ja pode votar esse ano");
}








}
