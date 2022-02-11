#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int maiorNum, numero;
	
	numero = 1;
	maiorNum = 0;
	
	
	while(numero >= 0){
		
		printf("Digite um número");
		scanf("%d", numero);
		
		if(numero > maiorNum){
			maiorNum = numero;
		}
		
		
		
		
		
	}
	
	printf("o MAIOR NUMERO DIGITADO FOI %d", maiorNum);

}
