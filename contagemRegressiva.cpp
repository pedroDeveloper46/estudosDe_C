#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int numero;
	
	printf("Digite um número para iniciar a Contagem Regressiva \n");
	scanf("%d", &numero);
	printf("\n");
	
	for(numero; numero >= 1; numero--){
		printf("%d \n", numero);
	}
    
}
