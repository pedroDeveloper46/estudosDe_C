#include <stdio.h>
#include <locale.h>


int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int valor;
	printf("Digite um valor:");
	scanf("%d", &valor);
	printf("O número digitado foi %d\n", valor);
	printf("O endereço de %d é %u", valor);
	
}
