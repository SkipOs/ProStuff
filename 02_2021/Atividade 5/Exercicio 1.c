/*1) Faça um programa que utilize uma função para
efetuar a potenciação de forma recursiva.*/

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
	printf("%d elevado a %d potência é %d", bas, exp, resp);
	return 0;
}

int pot(int a, int b){
	if(b == 0)	// verifica se o expoente é 0 (se a multiplicação será por 0)
		return 1;
	else
		return (a * pot(a, b-1)); // executa a base vezes o expoente atual menos 1
}
