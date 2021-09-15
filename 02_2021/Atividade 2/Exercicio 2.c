/*2. Fa�a um programa usando fun��o, que receba um
valor inteiro n e retorne a soma dos n primeiros termos
da s�rie:
1+ 1/1! + 1/2! + 1/3! + ...
Utilize a fun��o fatorial.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float fat(int n);

int main (){
	setlocale(LC_ALL, "Portuguese");
	//declara��o de vari�veis
	int n, i;
	float result=1;
	
	printf("Insira o valor de N para calcular a soma: ");
	scanf("%d", &n);
	
	//verifica se o valor inserido � v�lido.
	if(n<1){
		printf("O valor inserido n�o � v�lido. Insira um valor maior que zero e que seja um inteiro.\n");
		system("pause");
		return 0;
	}
	
	//chama a fun��o fat N vezes j� executando a conta	
	for(i=1; i<(n+1); i++){
		result=result+1/fat(i);	
	}
	
	if (n==1)
		printf("O Resultado da s�rie 1 + 1/1! � %f\n", result);
	if (n==2)
		printf("O Resultado da s�rie 1 + 1/1! + 1/2! � %f\n", result);
	if (n==3)
		printf("O Resultado da s�rie 1 + 1/1! + 1/2! + 1/3! � %f\n", result);
	if (n>3)
		printf("O Resultado da s�rie 1 + 1/1! + 1/2! + ... + 1/%d! � %f\n", n, result);
 
	system("pause");
	return 0;
	}

// fun��o que calcula o fatorial de N.
float fat(int n){
	float result=1;
	int i;
	for(i=n; i>1; i--){
		result=(i*result);	
	}
	
	return result;
}

