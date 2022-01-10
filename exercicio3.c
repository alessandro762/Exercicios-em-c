#include <stdio.h>


int main (){
	
	// Os pares de instruções abaixo produzem o mesmo resultado?
	// Resposta: não,porque as instruções abaixo nao produzem o mesmo resultado.
	//A unica opçcão que produz o mesmo resultado e Variavel a e a1. 
	double a= (4/2)+(2/4);
	double a1= 4/2+2/4;
	
	printf(" O valor a e:%.2f e o valor de a1 e:%.2f os valores sao iguais.\n\n ", a,a1);
	
	double b= 4/(2+2)/4;
	double b1= 4/2+2/4;
	
	printf(" O valor de b e:%.2f e o valor de b1 e:%.2f os valores nao sao iguais.\n\n ",b,b1);
	
	double c= (4+2)*2-4;
	double c1=  4+2*2-4;
	
	printf(" O valor c e:%.2f e o valor de c1 e:%.2f os valores nao sao iguais.\n\n",c,c1);
		
}

