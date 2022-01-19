#include <stdio.h>

int main(){
//Faça um algoritmo que leia a idade de uma pessoa expressa em anos, meses e dias e escreva a idade
//dessa pessoa expressa apenas em dias. Considerar //ano com 365 dias e mês com 30 dias.

int idade_anos;
int meses;
int dias;


idade_anos=0;
meses=0;
dias=0;

printf("Escreva o ano que voce nasceu:");

scanf("%d",&idade_anos);

printf("Escreva qual mes voce nasceu:");

scanf("%d",&meses);

printf("Qual  dia voce nasceu:");

scanf ("%d",&dias);

idade_anos=(2022-idade_anos)*365;
meses=(1-meses)*30;
dias=30-dias;

int total =idade_anos+meses+dias;

printf("Voce tem de dias vividos %d",total);

}
