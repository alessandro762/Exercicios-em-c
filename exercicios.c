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
		printf ("Os parentese nao poder ser alterado pois o valor final e diferente\n\n");	

	double b = 2+(6*(3+2));
		printf (" O valor de b= %.1f\n",b);
		printf (" Os parêntese foi alterado pois o valor final e igual\n\n");

	double c = 2+(3*6)/(2+4);
		printf (" O valor de c= %.1f\n",c);
		printf (" Os parêntese  não pode ser alterado pois o resultado final e diferente\n\n");

	double d = 2*(8/(3+1));
	 	printf (" O valor de d=%.1f\n",d);
	 	printf (" Os parêntes foi alterado pois o resultado final foi igual \n\n");

	double e = 3+(16-2)/(2*(9-2));
		printf (" O valor de e=%.1f\n",e);
		printf (" Os parêntes não pode ser alterado pois o resultado final e diferente\n\n");

	double f = (6/3)+(8/2);
		printf (" Os valor de f e= %.1f\n",f );
		printf ("Os parêntes pode ser alterado pois o resultado final e igual\n\n");

	double g = ((3+(8/2))*4)+(3*2);
		printf (" O valor de g= %.1f\n");
		printf (" Os parêntes pode ser alterado pois o resultado final e igual\n\n");

	double h = (6*(3*3)+6)-10;
	 	printf (" O valor de h= %.1f\n",h);
	 	printf (" O parêntes pode ser alterado pois o resultado final e igual\n\n");

	double i = (((10*8)+3)*9);
		printf (" O valor de i= %.1f\n",i);
		printf (" Os parêntes pode ser alterado pois o resultado final e igual\n\n");

	double j = ((-12)*(-4))+(3*(-4));
	 	printf (" O valor de j= %.1f\n",j);
	 	printf (" Os parêntes pode ser alterado pois o resultado final e igual\n\n");

		
		
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
