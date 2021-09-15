/*3. Fa�a uma fun��o que receba, por refer�ncia, dois
par�metros inteiros a e b que, ao final da fun��o o
maior valor entre a e b dever� estar armazenado em a
e o menor em b.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// fun��o troca
int troca(int *a, int *b);

int main (){
	setlocale(LC_ALL, "Portuguese");
	//declara��o de vari�veis
	int num1, num2;

	//entrada do usu�rio	
	printf("Insira o valor 1: ");
	scanf("%d", &num1);
	
	printf("Insira o valor 2: ");
	scanf("%d", &num2);
	
	//declara��o de ponteiros
	
	if (num1==num2){
		printf("Os valores inseridos s�o iguais.\n");
		system("pause");
		return 0;
	}
	
	//chama a fun��o
	troca(&num1, &num2);
	
	//Exibe o resultado de A e B
	printf("O valor de A (maior) depois da troca �: %d \n", num1);
	printf("O valor de B (menor) depois da troca �: %d \n", num2);

	system("pause");
	return 0;
}

// fun��o troca
int troca(int *a, int *b){
	int aux;
	if (*a<*b){
		aux = *b;
		*b = *a;
		*a = aux;
	}
	
	return 1;
}	
