/*3. Faça uma função que receba, por referência, dois
parâmetros inteiros a e b que, ao final da função o
maior valor entre a e b deverá estar armazenado em a
e o menor em b.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// função troca
int troca(int *a, int *b);

int main (){
	setlocale(LC_ALL, "Portuguese");
	//declaração de variáveis
	int num1, num2;

	//entrada do usuário	
	printf("Insira o valor 1: ");
	scanf("%d", &num1);
	
	printf("Insira o valor 2: ");
	scanf("%d", &num2);
	
	//declaração de ponteiros
	
	if (num1==num2){
		printf("Os valores inseridos são iguais.\n");
		system("pause");
		return 0;
	}
	
	//chama a função
	troca(&num1, &num2);
	
	//Exibe o resultado de A e B
	printf("O valor de A (maior) depois da troca é: %d \n", num1);
	printf("O valor de B (menor) depois da troca é: %d \n", num2);

	system("pause");
	return 0;
}

// função troca
int troca(int *a, int *b){
	int aux;
	if (*a<*b){
		aux = *b;
		*b = *a;
		*a = aux;
	}
	
	return 1;
}	
