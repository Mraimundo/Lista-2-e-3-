#include <stdio.h>
#include <locale.h>

int main() {
  setlocale(LC_ALL,"");
  int nm,totalv;
  float sf, st, p;
  printf("As matr�culas dos vendedores come�a com 1 e v�o at� 98.\n");
  printf("Digite o sal�rio fixo dos vendedores.\nR$");
  scanf("%f", &sf);
  while(sf){
    printf("=============================================\n");
    printf("Digite o n�mero de matr�cula do vendedor: ");
    scanf("%d", &nm);
    if(nm){
      printf("=============================================\n");
      printf("Qual foi o total de vendas do vendedor com n�mero de matr�cula %d.\nTotal de vendas: ", nm);
      scanf("%d", &totalv);
      if(totalv<=1000)
        p=(sf*3)/100;
      if(totalv>1000)
        p=(sf*5)/100;
      st=sf+p;
    }
    printf("\nN�mero de m�tricula: %d\n", nm);
    printf("Total de vendas: %d\n", totalv);
    printf("Sal�rio fixo: %.2f\n", sf);
    printf("Sal�rio total: %.2f\n", st);
    printf("\n\nSe deseja encerrar o programa digite '99'.\n ");
    if(nm==99)
      break;
  }
  return 0;
}