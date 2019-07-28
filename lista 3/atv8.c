#include <stdio.h>
#include <locale.h>

int main() {
  setlocale(LC_ALL,"");
  int nm,totalv;
  float sf, st, p;
  printf("As matrículas dos vendedores começa com 1 e vão até 98.\n");
  printf("Digite o salário fixo dos vendedores.\nR$");
  scanf("%f", &sf);
  while(sf){
    printf("=============================================\n");
    printf("Digite o número de matrícula do vendedor: ");
    scanf("%d", &nm);
    if(nm){
      printf("=============================================\n");
      printf("Qual foi o total de vendas do vendedor com número de matrícula %d.\nTotal de vendas: ", nm);
      scanf("%d", &totalv);
      if(totalv<=1000)
        p=(sf*3)/100;
      if(totalv>1000)
        p=(sf*5)/100;
      st=sf+p;
    }
    printf("\nNúmero de mátricula: %d\n", nm);
    printf("Total de vendas: %d\n", totalv);
    printf("Salário fixo: %.2f\n", sf);
    printf("Salário total: %.2f\n", st);
    printf("\n\nSe deseja encerrar o programa digite '99'.\n ");
    if(nm==99)
      break;
  }
  return 0;
}