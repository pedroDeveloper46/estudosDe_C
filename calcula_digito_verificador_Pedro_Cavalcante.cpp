/*************************************************************************************
* Programa: calcula_digito_verificador_Pedro_Cavalcante.cpp                          *
* Objetivo: Entrar com uma string de 30 caracteres decimais e                        *
            mostrar o digito verificador                                             *
* Autores:  Israel Marques de Alkimim Filho, Luiz Henrique Dos Santos Oliveira,      *
            Rita de C�ssia de Jesus Oliveira e Pedro Victor Sales Cavalcante         *
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
	printf("Rita de C�ssia de Jesus Oliveira. \n");
	printf("Pedro Victor Sales Cavalcante.\n");
	printf("\n");
	
	/*declara��o de variaveis*/
	char string[31] = "";
	int i;
	
	
	
	/*Enquanto a string digitada for diferente de FIM a execu��o do programa continua*/
	while(strcmp(string, "FIM") != 0){
		
		printf("DIGITE 'FIM' PARA ENCERRAR O PROGRAMA \n");
        
		printf("ENTRE COM UMA STRING COM VALORES DECIMAIS (M�XIMO 30 CARACTERES): ");
        /*faz a leitura da string e pega somente 30 caracteres*/
		fgets(string, 31, stdin);
		
		/*ultima posi��o da string recebe o valor '\0', isso � importante para identificar se a string est� vazia ou n�o*/
		string[strlen(string) - 1] = '\0';
		
		/*a string digitada se torna maiuscula*/
		strupr(string);
	
	    /*se a string digitada for diferente de FIM, ent�o o calculo � feito, se n�o o programa � finalizado */
		if(strcmp(string, "FIM") != 0){  
		     
			 int digito = calcula_dv(string);
		      
		    /*se o digito verificador for diferente de -1, ent�o o calculo foi realizado com sucesso*/
		     if(digito != -1){
		     	printf("DV CALCULADO COM SUCESSO: %s-%d\n \n", string, digito);
			 }else{
			 	printf("%s \n", "ATEN��O!!!!, VALOR INFORMADO INV�LIDO");
			 }
      	}else{
      		printf("FIM DA EXECU��O DO PROGRAMA");
		  }
	}
	
	
	
	
		
	     
    
}

/**************************************************************************************************************************** 
* Fun��p:          calcula_dv                                                                                               *
* Objetivo:        retornar um digito verificador de uma string de 30 caracteres                                            * 
                   com valores decimais                                                                                     *   
* Data de cria��o: 02/11/2021                                                                                               *
* Autores:         Israel Marques de Alkimim Filho, Luiz Henrique Dos Santos Oliveira,                                      *
                   Rita de C�ssia de Jesus Oliveira e Pedro Victor Sales Cavalcante                                         *
                                                                                                                            *
* Param�tros:      vetor de char (char string[])                                                                            *                              
                                                                                                                            *
*****************************************************************************************************************************
* Data Altera��o: 10/11/2021 Autores: Israel Marques de Alkimim Filho, Luiz Henrique Dos Santos Oliveira,                   *
*                                    Rita de C�ssia de Jesus Oliveira e Pedro Victor Sales Cavalcante                       *
* Altera��o: Foi finalizado o calculo do digito, tamb�m foi feito algumas valida��es e coment�rios foram colocados no c�digo*
*****************************************************************************************************************************/


int calcula_dv(char string[]){
 
    /*declara��o de variaveis*/
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
    
    
    /*um la�o de repeti��o � feito para acessar a string passada como parametro*/ 
    for(i = 0; i < strlen(string); i++){
    	/*se o caractere da string digitada for numero, ent�o ela � populada em um novo array*/
     	if(isdigit(string[i]) == 1){
     	     valores[j] = string[i];
			 j++;
			 /*variavel que contabiliza o tamanho necess�rio para ser criado o vetor de inteiros*/ 
			 t++;
		  }
	}
	
	/*se essa variavel n�o contabilizar nada, significa que nenhum n�mero foi digitado, ent�o � retornado -1*/
	if(t == 0){
		return -1;
	}
	
	
    int numeros[t];
    i = 0;

    /*um la�o de repeti��o � feito no array de char que possui somente numeros, esse la�o � feito de tr�s pra frente*/    
    for(j = t - 1; j >= 0; j--){
    	
    	/*� feito a convers�o de char para int, o caracteres est�o sendo convertidos e populados no vetor de inteiros*/
    	numeros[i] = valores[j] - '0';
    	
    	/*s � a variavel que incremente para ser referenciada no array da sequencia de 2,3,4,5,6,7,8,9. O Array tem 8 posi��es, 
		se a variavel for maior que 7, ent�o ela volta pra 0 e com isso voltando pro inicio da sequencia*/
    	if(s > 7){
			s = 0;
		}
		
		/*aqui � feito a soma das multiplica��es de cada digito multiplicado*/
		resultado += numeros[i] * seq[s];
		
		/*incremento da variavel que vai referenciar os indices do array da sequencia*/
		s++;
		/*incremento da variavel que vai referenciar os indices do array de inteiros*/
	    i++;
		
	}
	
	/*se o resultado for igual a zero, ent�o o calculo falhou*/
	if(resultado == 0){
		return -1;
	}
	
	/*multiplicando o resultado por 10*/
	resultado = resultado * 10;
	
	/*calculando o digito verificador, ele recebe o resto da divis�o do valor da variavel resultado por 11*/
    digito = (resultado % 11); 
    
    /*se o digito for igual a 10, ent�o ele receber� um novo valor e valer� 0*/
    if(digito == 10){
    	digito = 0;
	}
	
	/*retorna o digito*/
	return digito;
	
    
}
