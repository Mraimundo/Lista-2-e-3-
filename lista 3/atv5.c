#include <stdio.h>
#include <locale.h>

int main() {
  setlocale(LC_ALL,"");
  int a,i1=0,i=0,b=0,a1,b1=0,fb;
  float m;
  printf("\ndica: se vc digitar um número entre 10 e -10 o programa vai para de repetir.\n");
  printf("Digite um valor qualquer: ");
  scanf("%d",&a);
 
  while(a){
    for(i=0;i<10;i++){
    fb=a+b;
    b=a;
    a=fb;
    }
    i1++;
    a1=fb+b1;
    m=(float)a1/i1;
    printf("Digite um valor qualquer: ");
    scanf("%d",&a);
    if(a==0)
      break;
  }
  printf("A soma é igual à %d.\n\n", a1);
  printf("A média é igual à %.2f.\n\n", m);

  return 0;
}