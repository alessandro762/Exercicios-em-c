#include <stdio.h>

int main(){

//Escreva um algoritmo para ler o salário mensal atual de um funcionário e o percentual de reajuste.
//Calcular e escrever o valor do novo salário

double salario_atual;
double reajuste_salario;
double novo_salario;

printf("Digite o valor do seu salario:");

scanf("%lf",&salario_atual);

printf("Digite quantos porcento de reajuste:");

scanf("%lf",&reajuste_salario);

novo_salario=(salario_atual*reajuste_salario/100);

printf("Seu novo salario e:%.lf",salario_atual+novo_salario);






}