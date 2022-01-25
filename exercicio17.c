#include <stdio.h>
int main (){
//Ler as notas da 1a. e 2a. avaliações de um aluno. Calcular a média aritmética simples e escrever
//uma mensagem que diga se o aluno foi ou não aprovado (considerar que nota igual ou maior que 6 o
//aluno é aprovado). Escrever também a média calculada. 
double nota1;
double nota2;
double media;
printf("Digite sua primeira nota:");
scanf("%lf",&nota1);

printf("Digite sua segunda nota:");
scanf("%lf",&nota2);

media=(nota1+nota2)/2;
if(media >=6 ){
  printf("Aprovado media=%0.2lf",media);
}
else{
  printf("Não foi aprovado media=%0.2lf",media);
}


}