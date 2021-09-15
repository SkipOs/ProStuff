#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
    int num, i=2, resultado=0, primo;

	while(num++ < 100){ //enquanto contagem menor que 1000 	
		primo=1;
 		while(i < num/2+1){
    		if(num % i == 0){
				primo=0;
			}
       	}
 	
 		if(primo==1){
    		resultado = resultado + num;
    		printf("%d , ", num);
		}
	}
	
	printf("%d", resultado);
	return 0;
}
