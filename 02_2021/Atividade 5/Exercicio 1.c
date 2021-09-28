/*1) Fa�a um programa que utilize uma fun��o para
efetuar a potencia��o de forma recursiva.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int pot(int a, int b);

int main(){
	setlocale(LC_ALL, "Portuguese");
	int bas, exp, resp;
	printf("Insira o valor da base: ");
	scanf("%d", &bas);
	printf("Insira o valor do expoente: ");
	scanf("%d", &exp);
	resp = pot(bas,exp);
	printf("%d elevado a %d pot�ncia � %d", bas, exp, resp);
	return 0;
}

int pot(int a, int b){
	if(b == 0)	// verifica se o expoente � 0 (se a multiplica��o ser� por 0)
		return 1;
	else
		return (a * pot(a, b-1)); // executa a base vezes o expoente atual menos 1
}
