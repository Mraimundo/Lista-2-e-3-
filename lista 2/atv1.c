#include <stdio.h>
#include <locale.h>

int main()
{
  setlocale(LC_ALL,"");
  int x;
  printf("Digite um n�mero qualquer: ");
  scanf("%d", &x);

  if(x>=0)
  {
    if(x%2==0)
    {
      printf("\n%d � um valor inteiro, positivo e par.", x);
    }
    else
    {
      printf("\n%d � um valor inteiro, positivo e �mpar.",x);
    }
  }
  else
  {
    printf("\n%d � um valor inteiro e negativo.", x);
  }
 
  return 0;
}