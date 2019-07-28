#include <stdio.h>
#include <locale.h>

int main()
{
  setlocale(LC_ALL,"");
  int a;
  printf("Digite qualquer número: ");
  scanf("%d", &a);
  while(a)
  {
    if((a==2)||(a==3)||(a==5))
    {
      printf("É um número primo.");
      break;
    }
    if((a%2==0)||(a%3==0)||(a%5==0))
    {
      printf("Não é um número primo. ");
      break;
    }else{
      printf("É um número primo.");
      break;
    }
  }
  return 0;
}
