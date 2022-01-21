#include <stdio.h>

int main(){
//Escreva um algoritmo para ler uma temperatura em graus Fahrenheit, calcular e escrever o valor
//correspondente em graus Celsius.
double celsius;
double fahrenheit;
printf("Escreva a temperatura em graus fahrenheit :");

scanf("%lf",&fahrenheit);

celsius=(fahrenheit-32)/1.8;

printf("A temperatura em graus celsius e:%.2lf",celsius);







}