/*Fa�a um programa que leia um vetor de dez posi��es.
Em seguida, informe o menor e maior valor para o
usu�rio.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL, "Portuguese");
	//declara��o das vari�veis
	int maior, menor, i;
	
	//declara��o do vetor
	int v[10]={51,60,48,11,70,73,84,32,99,70};
			
	//define maior e menor iniciais
	maior=v[0];
	menor=v[0];
	
	for (i=0; i<10; i++){
		//verifica o maior 
		if (v[i]>maior)
			maior=v[i];
			
		//verifica o menor 
		if (v[i]<menor)
			menor=v[i];
	}
	
	//sa�da do algoritmo
	printf("O maior valor encontrado no vetor foi %d", maior);
	printf("\nO menor valor encontrado no vetor foi %d\n", menor);
	
	system("pause");
	return (0);
}

