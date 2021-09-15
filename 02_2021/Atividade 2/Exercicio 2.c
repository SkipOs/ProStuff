/*2. Faça um programa usando função, que receba um
valor inteiro n e retorne a soma dos n primeiros termos
da série:
1+ 1/1! + 1/2! + 1/3! + ...
Utilize a função fatorial.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float fat(int n);

int main (){
	setlocale(LC_ALL, "Portuguese");
	//declaração de variáveis
	int n, i;
	float result=1;
	
	printf("Insira o valor de N para calcular a soma: ");
	scanf("%d", &n);
	
	//verifica se o valor inserido é válido.
	if(n<1){
		printf("O valor inserido não é válido. Insira um valor maior que zero e que seja um inteiro.\n");
		system("pause");
		return 0;
	}
	
	//chama a função fat N vezes já executando a conta	
	for(i=1; i<(n+1); i++){
		result=result+1/fat(i);	
	}
	
	if (n==1)
		printf("O Resultado da série 1 + 1/1! é %f\n", result);
	if (n==2)
		printf("O Resultado da série 1 + 1/1! + 1/2! é %f\n", result);
	if (n==3)
		printf("O Resultado da série 1 + 1/1! + 1/2! + 1/3! é %f\n", result);
	if (n>3)
		printf("O Resultado da série 1 + 1/1! + 1/2! + ... + 1/%d! é %f\n", n, result);
 
	system("pause");
	return 0;
	}

// função que calcula o fatorial de N.
float fat(int n){
	float result=1;
	int i;
	for(i=n; i>1; i--){
		result=(i*result);	
	}
	
	return result;
}

