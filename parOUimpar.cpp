#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");

    int numero;
    
    printf("Digite um n�mero \n");
    scanf("%d", &numero);
    
    if (numero % 2  == 0) {
    	printf("%d � par", numero);
	}else{
		printf("%d � impar", numero);
	}
    
}
