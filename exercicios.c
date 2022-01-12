#include <stdio.h>

int main()  {
//Reescreva as instruções abaixo com o mínimo de parênteses possível, mas sem alterar o
resultado:
//A 6*(3+2)             F (6/3)+(8/2)
//B 2+(6*(3+2))         G ((3+(8/2))*4)+(3*2)
//C 2+(3*6)/(2+4)       H (6*(3*3)+6)-10
//D 2*(8/(3+1))         I (((10*8)+3)*9)
//E 3+(16-2)/(2*(9-2))  J ((-12)*(-4))+(3*(-4))




	double a = 6*(3+2);
		printf(" O valor de  a =%.1F \n",a );
		printf ("O valor pode nao poder ser alterado pois o valor final e diferente");	

	double b = 2+(6*(3+2));
		printf (" O valor de b= %.1f\n",b);
		printf (" O valor foi alterado pois o valor final e igual");

	double c = 2+(3*6)/(2+4);
		printf (" O valor de c= %.1f\n",c);
		printf (" O valor não pode ser alterado pois o resultado final e diferente");

	double d = 2*(8/(3+1));
	 	printf (" O valor de d=%.1f",d);
	 	printf (" O parentes foi alterado pois o resultado final foi igual ");

	double e = 3+(16-2)/(2*(9-2));
		printf (" O valor de e=%.1f",e);
		printf (" O parentes não pode ser alterado pois o resultado final e diferente");

	double f = (6/3)+(8/2);
		printf (" O valor de f e= %.1f\n",f );
		printf ("O parentes pode ser alterado pois o resultado final e igual");

	double g = ((3+(8/2))*4)+(3*2);
		printf (" O valor de g= %.1f\n");
		printf (" Os parentes pode ser alterado pois o resultado final e igual");

	double h = (6*(3*3)+6)-10;
	 	printf (" O valor de h= %.1f",h);
	 	printf (" O parentes pode ser alterado pois o resultado final e igual");

	double i = (((10*8)+3)*9);
		printf (" O valor de i= %.1f",i);
		printf (" O parentes pode ser alterado pois o resultado final e igual");

	double j = ((-12)*(-4))+(3*(-4));
	 	printf (" O valor de j= %.1f",j);
	 	printf (" Os parentes pode ser alterado pois o resultado final e igual");

		
		
//Segue as instruções abaixo alterada sem altera o valor:
		a= 6*(3+2);
		b= 2+6*(3+2);
		c= 2+(3*6)/(2+4);
		d=	2*(8/(3+1));
		e= 3+(16-2)/(2*(9-2));
		f= 6/3+8/2;
		g= (3+8/2)*4+3*2;
		h= 6*(3*3)+6-10;
		i= (10*8+3)*9;
		j= (-12*-4)+(3*-4);
	





	}