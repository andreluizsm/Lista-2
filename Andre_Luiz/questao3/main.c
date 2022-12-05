#include <stdio.h>

int main() {
	
	int salario=0,numFilhos=0,valor=0,maiorSalario=0;
	float somaSalario=0,mediaSalario=0,quantidade=0,somaFilhos=0,mediaFilhos=0,pessoasAte100=0,percentual=0;
	
	while(1){
		
		printf("Insira o valor do seu salario:");
		scanf("%d",&salario);
						
		if(salario<0){
			break;
		}
		
		if(salario>maiorSalario){
			maiorSalario=salario;
		}
		
		if(salario<=100){
			pessoasAte100++;
		}
				
		printf("Insira o numero de filhos:");
		scanf("%d",&numFilhos);
		
		quantidade++;
		
		if(salario>0){
			somaSalario=salario+somaSalario;
		}
		if(numFilhos>0){
			somaFilhos=numFilhos+somaFilhos;
		}
	}

	mediaSalario=somaSalario/quantidade;
	printf("A media dos salarios e: %.1f\n",mediaSalario);
	
	mediaFilhos=somaFilhos/quantidade;
	printf("A media dos filhos e: %.1f\n",mediaFilhos);
	
	printf("O maior salario e: %d\n",maiorSalario);
	
	percentual=(pessoasAte100*100)/quantidade;
	printf("O percentual de pessoas com salario ate R$ 100 e: %.1f%%\n",percentual);

	return 0;
}
