/*Faça um programa que leia um vetor de 10 posições.
Após a leitura, defina qual é o valor do vetor mais
próximo da média dos valores do vetor.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL, "Portuguese");
	//declaração das variáveis
	int med, prox, i, dis, disaux;
	
	//declaração do vetor
	int v[10]={51,60,48,11,70,73,84,32,99,70};
			
	//define a media
	for (i=0; i<10; i++){
		med=med+v[i];
	}
	med=med/10;
	prox=v[0];
	disaux=v[0]-med;
	
	//verifica o numero mais próximo da média
	for (i=0; i<10; i++){
		//valor menor que a média
		if (v[i]<med){
			dis=med-v[i];
			if (dis<disaux){
				prox=v[i];
				disaux=dis;
			}
		}
		//valor maior que a média
		if (v[i]>med){
			dis=v[i]-med;
			if (dis<disaux){
				prox=v[i];
				disaux=dis;
			}
		}
	}
	
	//saída do algoritmo
	printf("\nA média dos valores do vetor é %d", med);
	printf("\nO valor mais próximo da média existente no vetor é %d \n\n", prox);	
	
	system("pause");
	return (0);
}

