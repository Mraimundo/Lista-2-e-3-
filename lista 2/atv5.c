#include <stdio.h>
#include <locale.h>

int main() 
{
  setlocale(LC_ALL,"");
  int M, A; 
  printf("Escolha um m�s e um ano.\nDigite o n�mero que representa o m�s e depois o ano que foi escolhido.\nM�s: ");
  scanf("%d", &M);
  printf("\nAno: ");
  scanf("%d", &A);
  if(A%4==0)
  {
    printf("%d � um ano bissexto e tem 29 dias em feveriro.\n", A);
  }else{
    printf("%d n�o � um ano bissexto e tem 28 dias em fevereiro.\n", A);
  }
  if((M==1)||(M==5)||(M==7)||(M==8)||(M==10)||(M==12))
  {
    printf("O m�s escolhido tem 31 dias.");
  }
  if((M==3)||(M==4)||(M==6)||(M==9)||(M==11))
  {
    printf("O m�s escolhido tem 30 dias.");
  }
  return 0;
}