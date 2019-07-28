#include <stdio.h>
#include <locale.h>

int main() 
{
  setlocale(LC_ALL,"");
  int a,x,y, m, s;
  printf("Digite dois números se eles forem ímpares o programa será executado, se for digitado o valor 0 o programa dará o resultado final.\n");
  printf("Digite um número qualquer: ");
  scanf("%d", &x);
  printf("Digite outro número qualquer: ");
  scanf("%d", &y);
  while(x) {
    if((x%2!=0)&&(y%2!=0)){
      if((x-y==2)||(x-y==-2)){
        m=x*y;
        s=m+a;
        a=m;
      }
    }
    printf("Digite um número qualquer: ");
    scanf("%d", &x);
    if(x==0)
      break;
    printf("Digite outro número qualquer: ");
    scanf("%d", &y);
    if(y==0)
      break;
  }
  printf("\nA soma das multiplicações é %d", s);
  return 0;
}