/*Faça um programa que determine o maior e o menor
valor de uma sequência de N valores fornecidos pelo
usuário.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL, "Portuguese");
	//declaração das variáveis
	int maior, menor, i, n, x;
	
	//entrada do usuário
	printf("Insira o n° de elementos:");
	scanf("%d", &n);
	
	for (i=0; i<n; i++){
		printf("Insira o %dº elemento:", i+1);
		scanf("%d", &x);
		
		//valida maior e menor
		if (1==0){
			maior=x;
			menor=x;
		}
				
		//verifica o maior 
		if (x>maior)
			maior=x;
			
		//verifica o menor 
		else if (x<menor)
			menor=x;
	}
	
	//saída do algoritmo
	printf("\nO maior valor encontrado no vetor foi %d", maior);
	printf("\nO menor valor encontrado no vetor foi %d\n", menor);
	
	system("pause");
	return (0);
}

