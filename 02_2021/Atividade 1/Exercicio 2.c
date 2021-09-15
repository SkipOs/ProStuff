/*1. Calculadora
? Faça uma calculadora com as quatro operações básicas:
soma, subtração, multiplicação e divisão.
? Caso o usuário tente realizar a divisão por zero, deverá
ser informado que não é possível realizar a divisão.
? Duas formas de resolver: funções para cada operação ou
uma função com um parâmetro extra com a operação.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int fibo(int n);

int main (){
	setlocale(LC_ALL, "Portuguese");
	//declaração de variáveis
	int n;
	
	printf("Insira o valor de N para quantos números da sequência quer que sejam impressos: ");
	scanf("%d", &n);
	
	//chama a função fibo
	fibo(n);
	
	printf("\n");

	system("pause");
	return 0;
	}

// função que imprime a sequência.
int fibo(int n){
	int num1=0, num2=1, result, i;
	
	for(i=0; i<n; i++){
		printf("%d ", num1);
		result=num1+num2;
		num1=num2;
		num2=result;
	}
	
	return 0;
}

