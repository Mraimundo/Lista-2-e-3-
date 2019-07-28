#include <stdio.h>
#include <locale.h>

int main() {
  setlocale(LC_ALL,"");
  int v,i,i1=0,i2=0;
  printf("Digite qualquer valor.\n");
  for(i=1;i<11;i++){
    printf("V%d: ", i);
    scanf("%d", &v);
    if((v<21)&&(v>9))
      i1++;
    else
      i2++;
  }
  printf("Existem %d valores que estão entre 10 e 20.\n", i1);
  printf("Existem %d que não estão entre 10 e 20.", i2);
  return 0;
}