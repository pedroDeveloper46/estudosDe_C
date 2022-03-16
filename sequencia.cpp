/*
	Name: Sequencia - Maratona Fatec
	Copyright: 
	Author: Pedro Victor
	Date: 16/03/22 01:46
	Description: Só sei que a sequência não bateu kkkkkkkkkkkkkkk
*/




#include <stdio.h>
#include <locale.h>
#include <string.h>



double vetor[66] = {};


void printArray(double array[]);
bool isEmpty(double vetor[]);
double retornaInteiroDoArray(int valor);
void preencheArray();
int readInput();
void funcFluxo();


int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	printf("PROGRAMA PARA CALCULAR SEQUÊNCIA \n");
	
	preencheArray();	
	
	printArray(vetor);	
		
    funcFluxo();
	
	
	
}


void funcFluxo(){
	
	char string[10] = "";
	
	int n;
	
	while(strcmp(string, "N") != 0){
		
		do{
			
	     	n = readInput();
		
		   if(n == -1){
			printf("Número inválido \n");
		   }else{
		   	   printf("%.0f \n", retornaInteiroDoArray(n));
	
		   }
		   
	
		
	    }while(n == -1);
	    
	    printf("Deseja continuar? S/N ");
	    
	    scanf("%s", string);
	    
	    printf("\n");
	    
	    strupr(string);
	    
	    if(strcmp(string, "N") == 0){
	    	printf("Fim da Execução!!!");		}
		
	}
	
}

int readInput(){
	
	int n;
	
	printf("Digite um valor que queira listar da sequência: ");
	
	scanf("%d", &n);
	
	if(n < 0 || n > 65){
		return -1;
	}
	
	
	return n;
	
}


void preencheArray(){
	
	if(isEmpty(vetor)){
		
		for(int i = 0; i < 5; i++){
			vetor[i] = 2;
		}
	}
	
	
	for(int i = 0; i < 66; i++){
		if(i >= 5){
			vetor[i] = (vetor[i -1] + vetor[i - 2] + vetor[i - 3] + vetor[i - 4] + vetor[i - 5]);
		}
	}
}


bool isEmpty(double vetor[]){
	
	for(int i = 0; i < 5; i++){
	
		if(vetor[i] == 0){
			return true;
		}
	
	}
	
	return false;
}


double retornaInteiroDoArray(int valor){
	return vetor[valor];
}


void printArray(double array[]){
	
	for(int i = 0; i < 66; i++){
		printf("%.0f ", array[i]);
	}
	
	printf("\n \n");
}
