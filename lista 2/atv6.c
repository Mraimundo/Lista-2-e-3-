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
    printf("É um Número: %c", c);
  else
    if(((c>64)&&(c<91))||((c>96)&&(c<123)))
      printf("É uma Letra %c", c);
  else
    if((c==42)||(c==43)||(c==45)||(c==47))
      printf("É um operador artimético %c", c);
  else
    printf("É um caractere desconhecido %c", c);
 return 0;
}