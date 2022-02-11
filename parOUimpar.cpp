#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");

    int numero;
    
    printf("Digite um número \n");
    scanf("%d", &numero);
    
    if (numero % 2  == 0) {
    	printf("%d é par", numero);
	}else{
		printf("%d é impar", numero);
	}
    
}
