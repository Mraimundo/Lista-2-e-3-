#include <stdio.h>
#include <locale.h>

int main()
{
  setlocale(LC_ALL,"");
  int a, b, c, i;
  float A, B, C, total;
  printf("Temos 3 tipos de Livros:\nTipo A---R$10.00---C�digo 1\nTipo B---R$20.00---C�digo 2\nTipo C---R$30.00---C�digo 3");
  printf("\n\nC�digo:");
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
   printf("\n\nSe n�o deseja comprar outro tipo de livro digite o c�digo 0, sen�o digite o c�digo do tipo de livro desejado:  ");
   scanf("%d", &i);
  } 
  printf("O valor de A � igual a %.2f", A);
  printf("\nO valor de B � igual a %.2f", B);
  printf("\nO valor de C � igual a %.2f", C);
  total=A+B+C;
  printf("\nO total a pagar � igual a %.2f", total);
  
  
  return 0;
}