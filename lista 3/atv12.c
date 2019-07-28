#include <stdio.h>
#include <locale.h>
#include <time.h>

int main(int argc, char *argv[]){
	setlocale(LC_ALL,"portuguese");
	int n, soma=0, ch=0, cm=0;
	float maior=0, menor=3.0, v[50], media;
	char s[50];
	srand(time(NULL));
	for(n=0; n<50; n++){
		v[n]= (rand()%70+150)/100.00;
		//printf("%d°-%.2f\n ", n, v[n]);
		if(rand()%2==0){
			s[n]= 'M';
    		soma+=v[n];
    		cm++;
    	}else{
    		s[n]= 'H';
    		ch++;
		}
		if(v[n]>maior){
			maior= v[n];
		}else if(menor>v[n]){
			menor=v[n];
		}
	}
	media = soma/((float)cm);
	printf("a maior altura é %.2f \n", maior);
  	printf("a menor altura é %.2f \n", menor);
  	printf("A média da altura das mulheres é %.2f \n", media);
  	printf("O número de homens é %d", ch);
  	return 0;
}
