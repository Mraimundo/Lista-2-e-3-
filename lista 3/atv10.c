#include <stdio.h>

int main() {
  int s,x=0,y=0,a, b=0,c=0;
  printf("Digite qualquer valor: ");
  scanf("%d", &a);
  while(a){
    if(a>0)
      x++;
    if(a<0)
      y++;
    s=b+a;
    a=s;
    b=a;
    printf("\nDigite outro valor qualquer, se quiser parar o programa digite 0: ");
    scanf("%d", &a);
    if(a==0)
      break;
  }
  printf("A soma é igual à %d\n", s);
  printf("Números positivos: %d\n", x);
  printf("Números negativos: %d", y);
  return 0;
}