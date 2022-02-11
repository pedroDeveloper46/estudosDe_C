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
		printf("Ação");
		break;
		
		case 3:
		printf("Comédia");
		break;
		
		case 4:
		printf("Aventura");
		break;
		
		default:
		printf("Você digiitou um Valor inválido");
		break;
	}
}
