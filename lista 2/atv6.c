#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () 
{
  setlocale(LC_ALL,"");
  char c;
  printf("Digite qualquer coisa: ");
  scanf("%c", &c);
  if((c>47)&&(c<58))
    printf("� um N�mero: %c", c);
  else
    if(((c>64)&&(c<91))||((c>96)&&(c<123)))
      printf("� uma Letra %c", c);
  else
    if((c==42)||(c==43)||(c==45)||(c==47))
      printf("� um operador artim�tico %c", c);
  else
    printf("� um caractere desconhecido %c", c);
 return 0;
}