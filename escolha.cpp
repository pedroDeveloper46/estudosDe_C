#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int opc;
	printf("Digite um valor de 1 a 4:\n");
	scanf("%d", &opc);
	
	switch(opc){
		case 1:
		printf("Infantil");
		break;
		
		case 2:
		printf("A��o");
		break;
		
		case 3:
		printf("Com�dia");
		break;
		
		case 4:
		printf("Aventura");
		break;
		
		default:
		printf("Voc� digiitou um Valor inv�lido");
		break;
	}
}
