#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	float n1, n2;
	
	printf("Digite o primeiro número:");
	scanf("%f", &n1);
	
	printf("Digite o segundo número:");
	scanf("%f", &n2);
	
	printf("O dobro dos valores são %.2f e %.2f \n", (n1 *2), (n2*2));
	printf("O triplo dos valores são %.2f e %.2f \n", (n1 *3), (n2*3));
	printf("A multiplicação dos dois valores é: %.2f \n", (n1 * n2));
	printf("o Resto da divisão dos dois valores é: %.2f \n", fmod(n1,n2));
	printf("Os Antecessores dos valores são: %.2f e %.2f \n", (n1--), (n2--));
	printf("Os Sucessores dos valores são: %.2f e %.2f \n", (n1++), (n2++));
	printf("A média dos dois valores é: %.2f", (n1 + n2)/2);
	
}
