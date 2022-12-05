#include <stdio.h>

int main() {
	int i=0,numero=0,numeroPar=0,numeroImpar=0;
	
	for(i=1;i<=10;i++){
		printf("Digite 10 numeros (%d de 10)",i);
		scanf("%d",&numero);
		
		if(numero%2==0){
			numeroPar++;
		}else{
			numeroImpar++;
		}
	}
	
	printf("Foram digitados %d numeros pares e %d numeros imapares",numeroPar,numeroImpar);
	
	return 0;
}
