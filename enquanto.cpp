#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");

    int i;
    
    while(i < 20){
    	
		if(i % 2 == 0){
		   printf("%d é par", i);
		}else{
		   printf("%d é impar", i);
		}
		
		printf("\n");
    	
		i++;
	}
    
    
    
}
