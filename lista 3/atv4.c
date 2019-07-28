#include <stdio.h>
#include <locale.h>

int main() {
  setlocale(LC_ALL,"");
  int a,i,b=0,fb;
  printf("Digite um valor maior que 0: ");
  scanf("%d",&a);
 
  for(i=0;i<10;i++){
    fb=a+b;
    if(a%2!=0){
      a++;
    }
    b=a;
    a=fb;
  }
  printf("O valor final será igual à %d.", fb);
  return 0;
}