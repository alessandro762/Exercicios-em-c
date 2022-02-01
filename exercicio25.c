#include <stdio.h>

int main (){
//Faça um algoritmo para ler: número da conta do cliente, saldo, débito e crédito. Após, calcular e
//escrever o saldo atual (saldo atual = saldo - débito + crédito). Também testar se saldo atual for maior
//ou igual a zero escrever a mensagem 'Saldo Positivo', senão escrever a mensagem 'Saldo Negativo'.
double saldo;
double debito;
double credito;
double saldo_atual;
int conta_cliente;

printf("numero da conta:\n");
scanf("%d",&conta_cliente);
printf("saldo:\n");
scanf("%lf",&saldo);
printf("Gastos:\n");
scanf("%lf",&debito);
printf("Entradas:\n");
scanf("%lf",&credito);

saldo_atual=saldo+credito-debito;
printf("O saldo da conta e:%.2lf\n", saldo_atual);

if(saldo_atual>=0){
 printf("saldo positivo");
}else{
  printf("saldo negativo");
}


}