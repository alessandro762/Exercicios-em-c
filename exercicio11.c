#include <stdio.h>

int main(){
//Uma revendedora de carros usados paga a seus funcionários vendedores um salário fixo por mês,
//mais uma comissão também fixa para cada carro vendido e mais 5% do valor das vendas por ele
//efetuadas. Escrever um algoritmo que leia o número de carros por ele vendidos, o valor total de suas
//vendas, o salário fixo e o valor que ele recebe por carro vendido. Calcule e escreva o salário final do
//vendedor.
double carros_vendidos;
double valor_carros_vendido;
double total_de_vendas;
double salario_fixo;
double comissao;
double comissao_extra;
double salario_final;



printf("Escreva o valor do carro vendido:");

scanf("%lf",&valor_carros_vendido);

printf("Escreva o  total de carros vendidos:");

scanf("%lf",&carros_vendidos);

printf("Escreva o valor do seu salario fixo:");

scanf("%lf",&salario_fixo);

printf("Escreva o valor da sua comissao por carro vendido:");

scanf("%lf",&comissao);

comissao=comissao*carros_vendidos;
total_de_vendas=carros_vendidos*valor_carros_vendido;

comissao_extra=total_de_vendas*0.05;

salario_final=salario_fixo+comissao+comissao_extra;

printf("O seu salario e de:%.2lf",salario_final);
  
}