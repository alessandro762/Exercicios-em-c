#include <stdio.h>

int main(){

//Faça um algoritmo para ler: quantidade atual em estoque, quantidade máxima em estoque e
//quantidade mínima em estoque de um produto. Calcular e escrever a quantidade média ((quantidade
//média = quantidade máxima + quantidade mínima)/2). Se a quantidade em estoque for maior ou igual
//a quantidade média escrever a mensagem 'Não efetuar compra', senão escrever a mensagem 'Efetuar
//compra'.
int maximo;
int minimo;
int atual;
double media;
printf("Qual a quantidade maxima:\n");
scanf("%d",&maximo);

printf("Qual a quantidade minima:\n");
scanf("%d",&minimo);

printf("Qual a quantidade atual:\n");
scanf("%d",&atual);

media=(maximo+minimo)/2;

if (atual>=media){
  printf("Nao e necessario efetuar compra");
}else{
  printf("Necessario efetuar compra");
}




}