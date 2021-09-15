/*1. Faça uma programa usando função, que receba um
valor inteiro n e retorne o fatorial de n.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int fat(int n);

int main (){
	setlocale(LC_ALL, "Portuguese");
	//declaração de variáveis
	int n;
	
	printf("Insira o valor de N para calcular o fatorial: ");
	scanf("%d", &n);
	
	//chama a função fat	
	fat(n);

	system("pause");
	return 0;
	}

// função que imprime o fatorial de N.
int fat(int n){
	int result=1, i;
	
	if (n>2){
		for(i=n; i>0; i--){
			result=(i*result);	
		}
		printf("O fatorial de %d é: %d\n", n, result);
	}
	if (n <= 0)
		printf("Insira um valor maior que 0.\n");
	if (n == 1 || n == 2) 
		printf("O fatorial de %d é: %d\n", n, n);
	
	return 0;
}

