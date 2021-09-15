/*1. Calculadora
? Fa�a uma calculadora com as quatro opera��es b�sicas:
soma, subtra��o, multiplica��o e divis�o.
? Caso o usu�rio tente realizar a divis�o por zero, dever�
ser informado que n�o � poss�vel realizar a divis�o.
? Duas formas de resolver: fun��es para cada opera��o ou
uma fun��o com um par�metro extra com a opera��o.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int fibo(int n);

int main (){
	setlocale(LC_ALL, "Portuguese");
	//declara��o de vari�veis
	int n;
	
	printf("Insira o valor de N para quantos n�meros da sequ�ncia quer que sejam impressos: ");
	scanf("%d", &n);
	
	//chama a fun��o fibo
	fibo(n);
	
	printf("\n");

	system("pause");
	return 0;
	}

// fun��o que imprime a sequ�ncia.
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

