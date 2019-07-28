#include <stdio.h>
#include <locale.h>

int main(void) {
  setlocale(LC_ALL,"");
  int a,i=1;
  while(i){
    printf("Digite algum valor:");
    scanf("%d", &a);
    if(a==0){
      printf("Desligue tudo.\n");
      break;
    }
    if(a==1)
     printf("Ligar TV.\n");
    if(a==2)
      printf("Ligar Rádio.\n");
    if(a==3)
      printf("Ligar Luz.\n");
    if((a<0)||(a>3))
      printf("Tente novamente.\n");
  }
  return 0;
}