#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int main(int argc, char *argv[]){
	setlocale(LC_ALL,"Portuguese");
	int idade[50], mi=0, c1=0, soma1=0, c2=0, c3=0;
	float media, Pm, Ph;
	char sexo[50], olhos[50], cabelos[50];
	/*sexo= H e M; olhos= A, V, C; cabelos= L, C, P*/
	srand(time(NULL));
	for(c1=0; c1<50; c1++){
		idade[c1]= rand()%100;
		soma1+= idade[c1];
		if(idade[c1]>mi)
			mi= idade[c1];
		if(rand()%2==0){
			sexo[c1]= 'M';
			if((idade[c1]>=18)&&(idade[c1]<=30)){
				if(rand()%3==0){
					olhos[c1]='V';
					if(rand()%3==0){
						cabelos[c1]='L';
						c2++;
					}
				}
			}
    	}else{
    		sexo[c1]= 'H';
    		c3++;
		}
	}
	Pm= (10*c2)/5;
	Ph= (10*c3)/5;
	media= soma1/c1;
	printf("A maior idade é %d anos.\n", mi);
	printf("A porcentagem de mulheres com idade entre 18 e 30 anos de idade que tem olhos verdes e cabelos loiros é de %.1f%%.\n", Pm);
	printf("A Porcentagem da quantidade de homens é %.1f%%.\n", Ph);
	printf("A soma das idades é %d anos.\n", soma1);
	printf("A média das idades é %.1f anos\n", media);
	return 0;
	
}
