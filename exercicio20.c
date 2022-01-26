#include <stdio.h>
int main(){
//Ler dois valores (considere que não serão lidos valores iguais) e escrevê-los em ordem crescente. 

int valor1;
int valor2;

printf("Digite um numero inteiro:");
scanf("%d",&valor1);

printf("Digite outro numero inteiro diferente do outro numero acima:");
scanf("%d",&valor2);

if(valor1 < valor2){
  printf("%d %d",valor1,valor2);
}
else  {
  printf("%d %d",valor2,valor1);
}

  
}