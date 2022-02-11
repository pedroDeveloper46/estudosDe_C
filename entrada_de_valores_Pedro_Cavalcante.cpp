#include <stdio.h>
#include <locale.h>
/*
   ###############################################################################################
   Este programa foi desenvolvido por Israel Alkimim, Lu�z Henrique, Rita de C�ssia e Pedro Victor
   ###############################################################################################
   
*/




int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	float numero = 1;
	int entreUm_Nove;
	int entreDez_NoventaNove = 0;
	int entreCem_NovecentosNoventaNove = 0;
	int entreMil_DezMil = 0;
	int maioresDezMil = 0;
	float i = 0;
	float soma = 0;
	float media = 0;
	
	
	
	
	printf("NOME DOS INTEGRANTES \n");
	printf("Israel Marques de Alkimim Filho \n");
	printf("Lu�z Henrique Dos Santos Oliveira \n");
	printf("Rita de C�ssia de Jesus Oliveira \n");
	printf("Pedro Victor Sales Cavalcante\n");
	
	
	while(numero > 0){
		
		
		printf("Digite um n�mero ou digite 0 para finalizar o programa \n");
		scanf("%f", &numero);
		
		//condi��o que faz a soma dos n�meros digitados e quantidade de n�meros digitados
		if(numero > 0){
			soma = soma + numero;
			i++;
		}
		
		
		// condi��es que contabilizam quantidade de variaveis em cada intervalo de n�meros
		if(numero >= 1 && numero <= 9){
			entreUm_Nove++;
		}
		
		if(numero >= 10 && numero <= 99){
			entreDez_NoventaNove++;
		}
		
		if(numero >= 100 && numero <= 999){
			entreCem_NovecentosNoventaNove++;
		}
		
		if(numero >= 1000 && numero <= 10000){
			entreMil_DezMil++;
		}
		
		if(numero > 10000){
		   maioresDezMil++;	
		}
		
		
		
		
	}
	
	if(soma == 0){
		printf("Aten��o!!! Voc� n�o digitou nenhum n�mero");
	}
	
	if(numero < 0 ){
		printf("Aten��o!!! Voc� digitou um valor inv�lido");
	}
	
	
	if(numero < 0){
		printf("Vo�� digitou um valor inv�lido");
	}
	
	
	if(numero == 0){
		/*Aqui vir� o rel�torio do que foi digitado no programa*/
		printf("#####################################\n");
		printf(" Voc� digitou %d n�mero(s) entre 1 e 9 \n", entreUm_Nove);
		printf("#####################################\n");
		printf(" Voc� digitou %d n�mero(s) entre 10 e 99 \n", entreDez_NoventaNove );
		printf("#####################################\n");
		printf(" Voc� digitou %d n�mero(s) entre 100 e 999 \n", entreCem_NovecentosNoventaNove);
		printf("#####################################\n");
		printf(" Voc� digitou %d n�mero(s) entre 1000 e 10000 \n", entreMil_DezMil);
		printf("#####################################\n");
		printf(" Voc� digitou %d n�mero(s) maiores que 100000 \n", maioresDezMil);
		printf("#####################################\n");
		
		media = soma / i;
		
		printf("O c�lculo da m�dia dos n�meros digitados � => %.2f\n", media);
		
		
	
	
		
		
	}
	
}
