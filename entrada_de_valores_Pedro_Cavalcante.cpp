#include <stdio.h>
#include <locale.h>
/*
   ###############################################################################################
   Este programa foi desenvolvido por Israel Alkimim, Luíz Henrique, Rita de Cássia e Pedro Victor
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
	printf("Luíz Henrique Dos Santos Oliveira \n");
	printf("Rita de Cássia de Jesus Oliveira \n");
	printf("Pedro Victor Sales Cavalcante\n");
	
	
	while(numero > 0){
		
		
		printf("Digite um número ou digite 0 para finalizar o programa \n");
		scanf("%f", &numero);
		
		//condição que faz a soma dos números digitados e quantidade de números digitados
		if(numero > 0){
			soma = soma + numero;
			i++;
		}
		
		
		// condições que contabilizam quantidade de variaveis em cada intervalo de números
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
		printf("Atenção!!! Você não digitou nenhum número");
	}
	
	if(numero < 0 ){
		printf("Atenção!!! Você digitou um valor inválido");
	}
	
	
	if(numero < 0){
		printf("Voçê digitou um valor inválido");
	}
	
	
	if(numero == 0){
		/*Aqui virá o relátorio do que foi digitado no programa*/
		printf("#####################################\n");
		printf(" Você digitou %d número(s) entre 1 e 9 \n", entreUm_Nove);
		printf("#####################################\n");
		printf(" Você digitou %d número(s) entre 10 e 99 \n", entreDez_NoventaNove );
		printf("#####################################\n");
		printf(" Você digitou %d número(s) entre 100 e 999 \n", entreCem_NovecentosNoventaNove);
		printf("#####################################\n");
		printf(" Você digitou %d número(s) entre 1000 e 10000 \n", entreMil_DezMil);
		printf("#####################################\n");
		printf(" Você digitou %d número(s) maiores que 100000 \n", maioresDezMil);
		printf("#####################################\n");
		
		media = soma / i;
		
		printf("O cálculo da média dos números digitados é => %.2f\n", media);
		
		
	
	
		
		
	}
	
}
