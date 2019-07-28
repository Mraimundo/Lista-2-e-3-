#include <stdio.h>
#include <locale.h>

int main()
{
  setlocale(LC_ALL,"");
  int a, b, c, i;
  float A, B, C, total;
  printf("Temos 3 tipos de Livros:\nTipo A---R$10.00---Código 1\nTipo B---R$20.00---Código 2\nTipo C---R$30.00---Código 3");
  printf("\n\nCódigo:");
  scanf("%d", &i);

  while((i>-1)&&(i<4))
  {
    if(i==1)
    {
     printf("Escreva a quantidade de livros desejada: " );
     scanf("%d", &a);
      A= a*10;
    }

    if(i==2)
    {
      printf("Escreva a quantidade de livros desejada: " );
      scanf("%d", &b);
      B= b*20;
    }

    if(i==3)
    {
     printf("Escreva a quantidade de livros desejada: " );
     scanf("%d", &c);
     C= c*30;
   }

   if(i==0)
    break;
   printf("\n\nSe não deseja comprar outro tipo de livro digite o código 0, senão digite o código do tipo de livro desejado:  ");
   scanf("%d", &i);
  } 
  printf("O valor de A é igual a %.2f", A);
  printf("\nO valor de B é igual a %.2f", B);
  printf("\nO valor de C é igual a %.2f", C);
  total=A+B+C;
  printf("\nO total a pagar é igual a %.2f", total);
  
  
  return 0;
}