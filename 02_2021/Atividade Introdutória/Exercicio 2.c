/*Fa�a um programa que leia um vetor de 10 posi��es.
Ap�s a leitura, defina qual � o valor do vetor mais
pr�ximo da m�dia dos valores do vetor.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL, "Portuguese");
	//declara��o das vari�veis
	int med, prox, i, dis, disaux;
	
	//declara��o do vetor
	int v[10]={51,60,48,11,70,73,84,32,99,70};
			
	//define a media
	for (i=0; i<10; i++){
		med=med+v[i];
	}
	med=med/10;
	prox=v[0];
	disaux=v[0]-med;
	
	//verifica o numero mais pr�ximo da m�dia
	for (i=0; i<10; i++){
		//valor menor que a m�dia
		if (v[i]<med){
			dis=med-v[i];
			if (dis<disaux){
				prox=v[i];
				disaux=dis;
			}
		}
		//valor maior que a m�dia
		if (v[i]>med){
			dis=v[i]-med;
			if (dis<disaux){
				prox=v[i];
				disaux=dis;
			}
		}
	}
	
	//sa�da do algoritmo
	printf("\nA m�dia dos valores do vetor � %d", med);
	printf("\nO valor mais pr�ximo da m�dia existente no vetor � %d \n\n", prox);	
	
	system("pause");
	return (0);
}

