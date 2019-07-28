#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
  setlocale(LC_ALL,"");
  int a, b, c, ar, br, cr;
  printf("Tendo a equação do 2° grau ax²+bx+c, insira valores para os coeficientes a, b e c para que seja descoberta a raíz quadrada dos mesmos.\n");
  scanf("%d%d%d", &a,&b,&c);

  ar= sqrt(a);
  br= sqrt(b);
  cr= sqrt(c);

  printf("A raíz quadrada dos valores serão: \na= %d", ar);
  printf("\nb= %d", br);
  printf("\nc= %d", cr);

  return 0;
}