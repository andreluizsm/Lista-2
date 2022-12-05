#include <stdio.h>


int main() {
	
	int i=0,numero=0,numeroNegativo=0;
	
	for(i=0;i<5;i++){
		printf("Insira um numero (%d de 5):",i+1);
		scanf("%d",&numero);
		
		if(numero<0){
			numeroNegativo++;
		}
	}
	printf("A quantidade de numeros negativos e: %d\n",numeroNegativo);

	return 0;
}
