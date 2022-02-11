#include <stdio.h>
#include <locale.h>
#include <math.h>
#define Nlinha 5
#define Ncoluna 5

bool verificaValorMatriz(float matriz[Nlinha][Ncoluna], int linha, int coluna){
	int i, j;
	
	for(i = 0; i < linha; i++ ){
		
		for(j = 0; j < coluna; j++){
			
			if(matriz[linha][coluna] >= 0 && matriz[linha][coluna] <= 1){
				return true;
			}
		    	
		}
		
	}
	
	
	return false;
	
	
}

int main(){
	
	setlocale(LC_ALL, "Portuguese");

	
	float matriz[Nlinha][Ncoluna];
	
	matriz[0][1] = 0;
	matriz[0][0] = 1;
	matriz[0][2] = 1;
	matriz[0][3] = 0;
	matriz[0][4] = 1;
	
	 bool resul = verificaValorMatriz(matriz, Nlinha, Ncoluna);
	 
	 
	 printf("%d\n", resul);
	
	

}
