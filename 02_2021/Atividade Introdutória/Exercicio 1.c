/* Fa�a um programa que leia tr�s valores (em tr�s
vari�veis) informados pelo usu�rio. Em seguida,
informe o menor e o maior valor para o usu�rio.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL, "Portuguese");
	//declara��o das vari�veis
	int min, max, i, a, b, c;
	
	//entrada do usu�rio
	printf("Digite o primeiro valor: ");
	scanf("%d", &a);
	printf("Digite o segundo valor: ");
	scanf("%d", &b);
	printf("Digite o terceiro valor: ");
	scanf("%d", &c);
	
	//cria��o de um vetor  com as vari�veis 
	//para facilitar a verifica��o de maior e menor
	int v[3]={a,b,c};
	
	//verifica se todos os n�meros s�o iguais
	if (v[0]==v[1] && v[0]==v[2]){
		printf("\nTodos os valores inseridos s�o iguais.\n");
		system("pause");	
		return (0);
	}
	
	min=v[0];
	max=v[0];
	
	//verifica o maior e o menor
	for (i=0; i<3; i++){
		if (v[i]<max)
			max=v[i];
		if (v[i]>min)
			min=v[i];
	}
	
	//sa�da do algoritmo
	printf("\nO maior valor inserido foi %d", max);	
	printf("\nO menor valor inserido foi %d \n", min);
	
	system("pause");
	return (0);
}
