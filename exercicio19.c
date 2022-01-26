#include <stdio.h>

int main(){
//Ler dois valores (considere que não serão lidos valores iguais) e escrever o maior deles. 
int valor1;
int valor2;
int total_valor;
printf("Digite um numero inteiro:");
scanf("%d",&valor1);

printf("Digite outro numero inteiro diferente do outro numero acima:");
scanf("%d",&valor2);

if(valor1 > valor2){
 printf("O maior valor e: %d e maior que o segundo numero digitado: %d",valor1,valor2);
}
else  {
  printf("O maior valor e: %d e maior que: %d",valor2,valor1);
}




}