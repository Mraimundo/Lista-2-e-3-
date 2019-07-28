#include <stdio.h>
#include <stdlib.h>

int main()
{
  char fp;
  float i, desd, desc;
  printf("Digite a forma de pagamento, se for em dinheiro digite d e se for no cartão digite c: ");
  scanf("%c", &fp);
  printf("Digite o valor a ser pago: ");
  scanf("%f", &i);
  if(fp=='d')
  {
    desd= i-(i*5)/100;
    printf("O valor em dinheiro fica %.2f", desd);
  }
  if(fp== 'c')
  {
    desc= i+(i*3)/10;
    printf("O valor em cartão fica %.2f", desc);
  }
  return 0;
}