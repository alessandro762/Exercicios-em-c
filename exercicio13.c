#include <stdio.h>

int main(){
//Faça um algoritmo que leia três notas de um aluno, calcule e escreva a média final deste aluno.
//Considerar que a média é ponderada e que o peso das notas é 2, 3 e 5. Fórmula para o cálculo da média
//final é:

double n1;
double n2;
double n3;
double media;

printf("Digite a primeira nota:");
scanf("%lf",&n1);
printf("Digite a segunda nota:");
scanf("%lf",&n2);
printf("Digite a terceira nota:");
scanf("%lf",&n3);

media=(n1*2+n2*3+n3*5)/10;

printf("O resultado da sua nota em media pondoreda e:%.1lf",media);

}





