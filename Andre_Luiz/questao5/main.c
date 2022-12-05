#include <stdio.h>

int main() {
	int i=0,numero[3];
	 
	
	for(i=0;i<3;i++){
		printf("Digite um numero:");
		scanf("%d",&numero[i]);
	}
	
	for(i=2;i>=0;i--){
		printf("%d\n",numero[i]);
	}

	return 0;
}
