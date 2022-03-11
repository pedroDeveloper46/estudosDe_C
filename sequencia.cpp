/*
	Name: Sequencia de números
	Copyright: 
	Author: Pedro Victor
	Date: 11/03/22 17:02
	Description: 
*/


#include <stdio.h>
#include <locale.h>
int numeros[30] = {};
int tamanho = sizeof(numeros) / sizeof(numeros[0]);
void printArray(int array[]);
int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	printf("PROGRAMA PARA CALCULAR SEQUÊNCIA \n");
	
	
	
	int soma;
	
	int dobro = 0;
	
	for(int i = 0; i < 5; i++){
		numeros[i] = 2;
	}
	
	
	for(int i = 0; i < tamanho; i++){
		
	    if(i < 5){
			soma += numeros[i];
		}
		
		
		if(i == 5){
			numeros[i] = soma;	
		}
		
		if(i >= 6){
			
			if(i == 6){
				numeros[i] = soma + (soma - numeros[0]);
			}else{
				numeros[i] += (numeros[i - 1] - 2) + numeros[i - 1];
			}
			
		}
		
		
		
	}
	
    printArray(numeros);
	
	
	
	
	

	
	
}


void printArray(int array[]){
	for(int i = 0; i < tamanho; i++){
		printf("%d ", array[i]);
	}
}
