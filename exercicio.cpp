#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	float n1, n2;
	
	printf("Digite o primeiro n�mero:");
	scanf("%f", &n1);
	
	printf("Digite o segundo n�mero:");
	scanf("%f", &n2);
	
	printf("O dobro dos valores s�o %.2f e %.2f \n", (n1 *2), (n2*2));
	printf("O triplo dos valores s�o %.2f e %.2f \n", (n1 *3), (n2*3));
	printf("A multiplica��o dos dois valores �: %.2f \n", (n1 * n2));
	printf("o Resto da divis�o dos dois valores �: %.2f \n", fmod(n1,n2));
	printf("Os Antecessores dos valores s�o: %.2f e %.2f \n", (n1--), (n2--));
	printf("Os Sucessores dos valores s�o: %.2f e %.2f \n", (n1++), (n2++));
	printf("A m�dia dos dois valores �: %.2f", (n1 + n2)/2);
	
}
