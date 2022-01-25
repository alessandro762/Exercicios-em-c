#include <stdio.h>

int main(){

//As maçãs custam R$ 1,30 cada se forem compradas menos de uma dúzia, e R$ 1,00 se forem
//compradas pelo menos 12. Escreva um programa //que leia o número de maçãs compradas, calcule e
//escreva o custo total da compra. 
int quantidade;
double valor_unitario;
double total_compra;


printf("Digite a quantidade de macã comprada:");
scanf("%d",&quantidade);

 if (quantidade<12){
  valor_unitario=1.30;

 }
else{
  valor_unitario=1.00;
}
total_compra=quantidade*valor_unitario;

printf("Total da compra e de:%.2lf",quantidade*valor_unitario);
}
