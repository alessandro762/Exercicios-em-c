#include <stdio.h>

int main(){
  //Ler o salário fixo e o valor das vendas efetuadas pelo vendedor de uma empresa. Sabendo-se que
//ele recebe uma comissão de 3% sobre o total das vendas até R$ 1.500,00 mais 5% sobre o que
//ultrapassar este valor, calcular e escrever o seu salário total. 
  double salario;
  double valor_vendas;
  double comissao;
 printf("Informe o valor do salario do vendedor:\n");
 scanf("%lf",&salario);
 printf ("Informe o valor de vendas realizadas:\n");
 scanf("%lf",&valor_vendas);

 if(valor_vendas <=1500){
   comissao=(valor_vendas/100)*3;
   salario=salario+comissao;

   printf("Voce recebeu de comisao o valor de:%.2lf eo seu salario do mes foi de:%.2lf\n",comissao,salario);
  }else{
   comissao=(valor_vendas/100)*5;
   salario=salario+comissao;
   
   printf("Voce recebeu de comissao o valor de:%.2lf e o seu salario do mes foi de:%.2lf\n",comissao,salario);
  }
}  
