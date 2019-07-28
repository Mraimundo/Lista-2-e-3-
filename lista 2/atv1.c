#include <stdio.h>
#include <locale.h>

int main()
{
  setlocale(LC_ALL,"");
  int x;
  printf("Digite um número qualquer: ");
  scanf("%d", &x);

  if(x>=0)
  {
    if(x%2==0)
    {
      printf("\n%d é um valor inteiro, positivo e par.", x);
    }
    else
    {
      printf("\n%d é um valor inteiro, positivo e ímpar.",x);
    }
  }
  else
  {
    printf("\n%d é um valor inteiro e negativo.", x);
  }
 
  return 0;
}