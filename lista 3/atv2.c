#include <stdio.h>
#include <locale.h>

int main()
{
  setlocale(LC_ALL,"");
  int a;
  printf("Digite qualquer n�mero: ");
  scanf("%d", &a);
  while(a)
  {
    if((a==2)||(a==3)||(a==5))
    {
      printf("� um n�mero primo.");
      break;
    }
    if((a%2==0)||(a%3==0)||(a%5==0))
    {
      printf("N�o � um n�mero primo. ");
      break;
    }else{
      printf("� um n�mero primo.");
      break;
    }
  }
  return 0;
}
