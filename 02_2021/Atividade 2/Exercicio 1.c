/*1. Fa�a uma programa usando fun��o, que receba um
valor inteiro n e retorne o fatorial de n.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int fat(int n);

int main (){
	setlocale(LC_ALL, "Portuguese");
	//declara��o de vari�veis
	int n;
	
	printf("Insira o valor de N para calcular o fatorial: ");
	scanf("%d", &n);
	
	//chama a fun��o fat	
	fat(n);

	system("pause");
	return 0;
	}

// fun��o que imprime o fatorial de N.
int fat(int n){
	int result=1, i;
	
	if (n>2){
		for(i=n; i>0; i--){
			result=(i*result);	
		}
		printf("O fatorial de %d �: %d\n", n, result);
	}
	if (n <= 0)
		printf("Insira um valor maior que 0.\n");
	if (n == 1 || n == 2) 
		printf("O fatorial de %d �: %d\n", n, n);
	
	return 0;
}

