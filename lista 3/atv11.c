#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Portuguese");
	float alt, a1=0, a2=0;
	int i=0, retorno;
	char nome[15], n1[15], n2[15];
	do{
		i++;
		printf("Digite o nome da %d° moça: \n", i);
		scanf("%s", nome);
		if(retorno = strcmp(nome,"fim")==0)
			break;
		printf("\nAltura da %d° moça: \n", i);
		scanf("%f", &alt);
		if(alt>a1){
			if(a1>a2){
				a2=a1;
				strcpy(n2,n1);
			}
			a1=alt;
			strcpy(n1, nome);
		}else if(alt>a2){
			a2=alt;
			strcpy(nome,n2);
		}
	}while(1);
	printf("%s é a primeira mulher mais alta e tem %.2f\n", n1, a1);
	printf("%s é a segunda mulher mais alta	e tem %.2f", n2, a2);
	return 0;
}
