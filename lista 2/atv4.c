#include <stdio.h>
#include <locale.h>

int main()
{
  setlocale(LC_ALL,"");
  int X, Y, x, y, z, i;
  float A, B, C, total, Total;
  printf("Temos 3 tipos de produto:\nTipo A---R$10.00---Código 1---desconto de 20%\nTipo B---R$20.00---Código 2---desconto de 10%\nTipo C---R$30.00---Código 3---sem desconto");
  printf("Qual o produto que deseja comprar!\nCódigo: ");
  scanf("%d", &i);

  while((i>-1)&&(i<4))
  {
    if(i==1)
    {
      printf("Quantas unidades desse produto deseja comprar?\nQuantidade: ");
      scanf("%d", &x);
      X= x*10;
      A= X-((X*2)/10);
    }
    if(i==2)
    {
      printf("Quantas unidades desse produto deseja comprar?\nQuantidade: ");
      scanf("%d", &y);
      Y= y*20;
      B= Y-(Y/10);
    }
    if(i==3)
    {
      printf("Quantas unidades desse produto deseja comprar?\nQuantidade: ");
      scanf("%d", &z);
      C= z*30;
    }
    if(i==0)
      break;
    printf("Se deseja comprar outro produto digite o código, senão digite 0 para finalizar a compra.\nCódigo:");
    scanf("%d", &i);
  }
  printf("\n\nOs valores são:\nA---R$ %.2f\nB---R$ %.2f\nC---R$ %.2f", A, B, C);
  total= A+B+C;
  if(total>=80)
  {
    printf("\nSua compra foi maior que R$80.00 então tera um desconto de 10%\n");
    Total=total-(total/10);
    printf("Total---R$ %.2f",Total);
  }else{
    printf("\nTotal---R$ %.2f", total);
  }
  return 0;
}