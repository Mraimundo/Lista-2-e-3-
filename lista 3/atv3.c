#include <stdio.h>
#include <locale.h>

int main() 
{
  setlocale(LC_ALL,"");
  int a,x,y, m, s;
  printf("Digite dois n�meros se eles forem �mpares o programa ser� executado, se for digitado o valor 0 o programa dar� o resultado final.\n");
  printf("Digite um n�mero qualquer: ");
  scanf("%d", &x);
  printf("Digite outro n�mero qualquer: ");
  scanf("%d", &y);
  while(x) {
    if((x%2!=0)&&(y%2!=0)){
      if((x-y==2)||(x-y==-2)){
        m=x*y;
        s=m+a;
        a=m;
      }
    }
    printf("Digite um n�mero qualquer: ");
    scanf("%d", &x);
    if(x==0)
      break;
    printf("Digite outro n�mero qualquer: ");
    scanf("%d", &y);
    if(y==0)
      break;
  }
  printf("\nA soma das multiplica��es � %d", s);
  return 0;
}