#include <stdio.h>

int main(){
	
	int senha=0,confirmaSenha=0,i=0;
	
	printf("Digite sua senha:");
	scanf("%d",&senha);
	
	printf("Confirme sua senha:");
	scanf("%d",&confirmaSenha);
		
	if(senha==confirmaSenha){
		printf("Senha correta!\n");
	}else{
		for(i=0;i<2;i++){
			printf("Senha incorreta, tente novamente:");
			scanf("%d",&confirmaSenha);	
			
			if(senha==confirmaSenha){
				printf("Senha correta!\n");
				break;
			}
		}
	}	
	
	if(senha!=confirmaSenha){
		printf("Seu cartao foi bloqueado!\n");
	}

	return 0;
}













































