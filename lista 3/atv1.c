#include <stdio.h>
#include <locale.h>

int main()
{
  setlocale(LC_ALL,"");
  int a, c1=0, c2=1, b=0, i, p;
  printf("\nDigite um valor qualquer, porém o programa so ira parar de rodar quando for digitado 99.");
  printf("\nDigite o valor:");
  scanf("%d", &a);
  
  while(a)
  {    
    if(a%2==00)
      c1++;
    else
      c2++;
    printf("\nDigite outro valor:");
    scanf("%d", &a);
    b++;
    if(a==99)
    break;
  }
  p=(c1*100)/b;
  i=(c2*100)/b;
  printf("%d%% dos valores são pares.\n", p);
  printf("%d%% dos valores são ímpares.", i);
  return 0;
}