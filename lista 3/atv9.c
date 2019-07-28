#include <stdio.h>
#include <locale.h>

int main() 
{
  int i=1, a, b=1;
  printf("\n1");
  while(a)
  {
    i++;
    a=b*3;
    b= a;
    printf("\n%d ", a);
    if(i==20)
    break;
  }

  return 0;
}