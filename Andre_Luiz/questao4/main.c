#include <stdio.h>


int main() {
	
	int numero=0;
	float media=0,quantidade=0,numeroPar=0;
	
	do{
		printf("Digite um numero:");
		scanf("%d",&numero);
					
		if(numero%2==0 && numero!=0){
			numeroPar=numeroPar+numero;
			quantidade++;
		}
	}while(numero!=0);
	
	media=numeroPar/quantidade;
	printf("A media dos numeros pares e: %.2f\n",media);

	return 0;
}
