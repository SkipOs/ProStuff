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

void imenu();
int soma(int a, int b);
int sub(int a, int b);
int mult(int a, int b);
float divi(int a, int b);


int main (){
	setlocale(LC_ALL, "Portuguese");
	//declaração de variáveis
	int ctrl=0, sel, num1, num2;
	
	printf("C A L C U L A D O R A");
	//loop de entrada de usuário
	while (ctrl!=1){
			//chama a função imprimir menu
			imenu();
			
			//recebe a entrada do usuário
			scanf("%d", &sel);
			
			printf("\nInsira um valor: ");
			scanf("%d", &num1);
			printf("Insira outro valor: ");
			scanf("%d", &num2);
		
			//escolhe a operação a ser feita
			switch (sel){
				
				//soma
				case 1:
			    	printf("\nOs valores inserido foram %d e %d (Soma)\n", num1, num2);
			    	printf("O resultado da operação é: %d", soma(num1, num2));
			    break;
			
				//subtração
			    case 2:
			    	printf("\nOs valores inserido foram %d e %d (Subtração)\n", num1, num2);
			    	printf("O resultado da operação é: %d", sub(num1, num2));
			    break;
			    
			    //multiplicação
			    case 3:
			    	printf("\nOs valores inserido foram %d e %d (Multiplicação)\n", num1, num2);
			    	printf("O resultado da operação é: %d", mult(num1, num2));
				break;
			    
			    //divisão
			    case 4:
			    	printf("\nOs valores inserido foram %d e %d (Divisão)\n", num1, num2);
			    	if (num1!=0 && num2!=0){
			    		printf("O resultado da operação é: %.2f", divi(num1, num2));
			    		}
			    	else
			    		printf("Insira valores maiores que 0 para realizar a Divisão.\n");
			    break;
				
				//leva ao encerramento do programa
			    default:
			    	printf("Você escolheu encerrar o programa.\n");
					ctrl = 1;	
			    break;
			}// fim do switch
		}// fim do while
	
	system("pause");
	return 0;
	}

// função que imprime o menu
void imenu(){
	printf("\n\nMenu de operações\n");
	printf("---------------------------------\n");
	printf("Digite 1 para realizar Soma.\n");
	printf("Digite 2 para realizar Subtração.\n");
	printf("Digite 3 para realizar Multiplicação.\n");
	printf("Digite 4 para realizar Divisão.\n");
	printf("Digite qualquer outro valor para encerrar.\n");
	printf("---------------------------------\n");
	printf("Insira sua escolha: ");
	return 0;
}

// função que calcula a soma
int soma(int a, int b){
	int result;
	result=a+b;
	return result;
}

// função que calcula a subtração
int sub(int a, int b){
	int result;
	result=a-b;
	return result;
}

// função que calcula a multiplicação
int mult(int a, int b){
	int result;
	result=a*b;
	return result;
}

// função que calcula a divisão
float divi(int a, int b){
	float result;
	result=((float)a/b);
	return result;
}

