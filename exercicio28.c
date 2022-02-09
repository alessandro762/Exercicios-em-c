#include <stdio.h>
int main(){
//Ler 3 valores (considere que não serão informados valores iguais) e escrever o maior deles. 

  int a=0;
  int b=0;
  int c=0;



    printf("Digite um valor:\n");
    scanf("%d",&a);
    printf("Digite outro valor diferente do valor acima:\n");
    scanf("%d",&b);
    printf("Digite outro valor diferente dos valores acima:\n");
    scanf("%d",&c);

    if (a>b && b>c){
      printf("O mair valor e:%d\n",a);
    }else 
      if(b>a && a>c){
      printf("O maior valor e:%d\n",b);
    }
    else{
      printf("O maior valor e:%d\n",c);
    }
  

}    
  