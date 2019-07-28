#include <stdio.h>
#include <locale.h>

int main() 
{
  setlocale(LC_ALL,"");
  int M, A; 
  printf("Escolha um mês e um ano.\nDigite o número que representa o mês e depois o ano que foi escolhido.\nMês: ");
  scanf("%d", &M);
  printf("\nAno: ");
  scanf("%d", &A);
  if(A%4==0)
  {
    printf("%d é um ano bissexto e tem 29 dias em feveriro.\n", A);
  }else{
    printf("%d não é um ano bissexto e tem 28 dias em fevereiro.\n", A);
  }
  if((M==1)||(M==5)||(M==7)||(M==8)||(M==10)||(M==12))
  {
    printf("O mês escolhido tem 31 dias.");
  }
  if((M==3)||(M==4)||(M==6)||(M==9)||(M==11))
  {
    printf("O mês escolhido tem 30 dias.");
  }
  return 0;
}