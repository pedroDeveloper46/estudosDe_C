#include <stdio.h>
#include <locale.h>


int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int valor;
	printf("Digite um valor:");
	scanf("%d", &valor);
	printf("O n�mero digitado foi %d\n", valor);
	printf("O endere�o de %d � %u", valor);
	
}
