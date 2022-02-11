/*************************************************************************************
* Programa: calcula_digito_verificador_Pedro_Cavalcante.cpp                          *
* Objetivo: Entrar com uma string de 30 caracteres decimais e                        *
            mostrar o digito verificador                                             *
* Autores:  Israel Marques de Alkimim Filho, Luiz Henrique Dos Santos Oliveira,      *
            Rita de Cássia de Jesus Oliveira e Pedro Victor Sales Cavalcante         *
                                                                                     *
* Data: 01/11/2021 o algoritmo foi iniciado e 10/11/2021 o algoritmo foi finalizado  *
*                                                                                    *
**************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>
#include <stdbool.h>

int calcula_dv(char valores[]);

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Desenvolvido Por: \n");
	printf("Israel Marques de Alkimim Filho. \n");
	printf("Luiz Henrique Dos Santos Oliveira. \n");
	printf("Rita de Cássia de Jesus Oliveira. \n");
	printf("Pedro Victor Sales Cavalcante.\n");
	printf("\n");
	
	/*declaração de variaveis*/
	char string[31] = "";
	int i;
	
	
	
	/*Enquanto a string digitada for diferente de FIM a execução do programa continua*/
	while(strcmp(string, "FIM") != 0){
		
		printf("DIGITE 'FIM' PARA ENCERRAR O PROGRAMA \n");
        
		printf("ENTRE COM UMA STRING COM VALORES DECIMAIS (MÁXIMO 30 CARACTERES): ");
        /*faz a leitura da string e pega somente 30 caracteres*/
		fgets(string, 31, stdin);
		
		/*ultima posição da string recebe o valor '\0', isso é importante para identificar se a string está vazia ou não*/
		string[strlen(string) - 1] = '\0';
		
		/*a string digitada se torna maiuscula*/
		strupr(string);
	
	    /*se a string digitada for diferente de FIM, então o calculo é feito, se não o programa é finalizado */
		if(strcmp(string, "FIM") != 0){  
		     
			 int digito = calcula_dv(string);
		      
		    /*se o digito verificador for diferente de -1, então o calculo foi realizado com sucesso*/
		     if(digito != -1){
		     	printf("DV CALCULADO COM SUCESSO: %s-%d\n \n", string, digito);
			 }else{
			 	printf("%s \n", "ATENÇÃO!!!!, VALOR INFORMADO INVÁLIDO");
			 }
      	}else{
      		printf("FIM DA EXECUÇÃO DO PROGRAMA");
		  }
	}
	
	
	
	
		
	     
    
}

/**************************************************************************************************************************** 
* Funçãp:          calcula_dv                                                                                               *
* Objetivo:        retornar um digito verificador de uma string de 30 caracteres                                            * 
                   com valores decimais                                                                                     *   
* Data de criação: 02/11/2021                                                                                               *
* Autores:         Israel Marques de Alkimim Filho, Luiz Henrique Dos Santos Oliveira,                                      *
                   Rita de Cássia de Jesus Oliveira e Pedro Victor Sales Cavalcante                                         *
                                                                                                                            *
* Paramêtros:      vetor de char (char string[])                                                                            *                              
                                                                                                                            *
*****************************************************************************************************************************
* Data Alteração: 10/11/2021 Autores: Israel Marques de Alkimim Filho, Luiz Henrique Dos Santos Oliveira,                   *
*                                    Rita de Cássia de Jesus Oliveira e Pedro Victor Sales Cavalcante                       *
* Alteração: Foi finalizado o calculo do digito, também foi feito algumas validações e comentários foram colocados no código*
*****************************************************************************************************************************/


int calcula_dv(char string[]){
 
    /*declaração de variaveis*/
    char valores[strlen(string)];
    int seq[] = {2,3,4,5,6,7,8,9};
    int i;
    int j = 0;
    int t = 0;
    int resultado = 0;
    int s =0;
    int digito;
    
    /*se a string for vazia retorna -1*/
    if(string[0] == '\0'){
		return -1;
	}
    
    
    /*um laço de repetição é feito para acessar a string passada como parametro*/ 
    for(i = 0; i < strlen(string); i++){
    	/*se o caractere da string digitada for numero, então ela é populada em um novo array*/
     	if(isdigit(string[i]) == 1){
     	     valores[j] = string[i];
			 j++;
			 /*variavel que contabiliza o tamanho necessário para ser criado o vetor de inteiros*/ 
			 t++;
		  }
	}
	
	/*se essa variavel não contabilizar nada, significa que nenhum número foi digitado, então é retornado -1*/
	if(t == 0){
		return -1;
	}
	
	
    int numeros[t];
    i = 0;

    /*um laço de repetição é feito no array de char que possui somente numeros, esse laço é feito de trás pra frente*/    
    for(j = t - 1; j >= 0; j--){
    	
    	/*é feito a conversão de char para int, o caracteres estão sendo convertidos e populados no vetor de inteiros*/
    	numeros[i] = valores[j] - '0';
    	
    	/*s é a variavel que incremente para ser referenciada no array da sequencia de 2,3,4,5,6,7,8,9. O Array tem 8 posições, 
		se a variavel for maior que 7, então ela volta pra 0 e com isso voltando pro inicio da sequencia*/
    	if(s > 7){
			s = 0;
		}
		
		/*aqui é feito a soma das multiplicações de cada digito multiplicado*/
		resultado += numeros[i] * seq[s];
		
		/*incremento da variavel que vai referenciar os indices do array da sequencia*/
		s++;
		/*incremento da variavel que vai referenciar os indices do array de inteiros*/
	    i++;
		
	}
	
	/*se o resultado for igual a zero, então o calculo falhou*/
	if(resultado == 0){
		return -1;
	}
	
	/*multiplicando o resultado por 10*/
	resultado = resultado * 10;
	
	/*calculando o digito verificador, ele recebe o resto da divisão do valor da variavel resultado por 11*/
    digito = (resultado % 11); 
    
    /*se o digito for igual a 10, então ele receberá um novo valor e valerá 0*/
    if(digito == 10){
    	digito = 0;
	}
	
	/*retorna o digito*/
	return digito;
	
    
}
