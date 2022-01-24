#include <stdio.h>

int main(){

//Ler um valor e escrever a mensagem É MAIOR QUE 10! se o valor lido for maior que 10, caso
//contrário escrever NÃO É MAIOR QUE 10!
int numero;
printf("Digite um numero inteiro:");
scanf("%d",&numero);

if(numero >10) 
{
printf("O numero que voce digitou e maior que 10");

}
else {
  printf("O numero que voce digitou nao e maior que 10");
}
}