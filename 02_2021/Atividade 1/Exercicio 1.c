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

void imenu();
int soma(int a, int b);
int sub(int a, int b);
int mult(int a, int b);
float divi(int a, int b);


int main (){
	setlocale(LC_ALL, "Portuguese");
	//declara��o de vari�veis
	int ctrl=0, sel, num1, num2;
	
	printf("C A L C U L A D O R A");
	//loop de entrada de usu�rio
	while (ctrl!=1){
			//chama a fun��o imprimir menu
			imenu();
			
			//recebe a entrada do usu�rio
			scanf("%d", &sel);
			
			printf("\nInsira um valor: ");
			scanf("%d", &num1);
			printf("Insira outro valor: ");
			scanf("%d", &num2);
		
			//escolhe a opera��o a ser feita
			switch (sel){
				
				//soma
				case 1:
			    	printf("\nOs valores inserido foram %d e %d (Soma)\n", num1, num2);
			    	printf("O resultado da opera��o �: %d", soma(num1, num2));
			    break;
			
				//subtra��o
			    case 2:
			    	printf("\nOs valores inserido foram %d e %d (Subtra��o)\n", num1, num2);
			    	printf("O resultado da opera��o �: %d", sub(num1, num2));
			    break;
			    
			    //multiplica��o
			    case 3:
			    	printf("\nOs valores inserido foram %d e %d (Multiplica��o)\n", num1, num2);
			    	printf("O resultado da opera��o �: %d", mult(num1, num2));
				break;
			    
			    //divis�o
			    case 4:
			    	printf("\nOs valores inserido foram %d e %d (Divis�o)\n", num1, num2);
			    	if (num1!=0 && num2!=0){
			    		printf("O resultado da opera��o �: %.2f", divi(num1, num2));
			    		}
			    	else
			    		printf("Insira valores maiores que 0 para realizar a Divis�o.\n");
			    break;
				
				//leva ao encerramento do programa
			    default:
			    	printf("Voc� escolheu encerrar o programa.\n");
					ctrl = 1;	
			    break;
			}// fim do switch
		}// fim do while
	
	system("pause");
	return 0;
	}

// fun��o que imprime o menu
void imenu(){
	printf("\n\nMenu de opera��es\n");
	printf("---------------------------------\n");
	printf("Digite 1 para realizar Soma.\n");
	printf("Digite 2 para realizar Subtra��o.\n");
	printf("Digite 3 para realizar Multiplica��o.\n");
	printf("Digite 4 para realizar Divis�o.\n");
	printf("Digite qualquer outro valor para encerrar.\n");
	printf("---------------------------------\n");
	printf("Insira sua escolha: ");
	return 0;
}

// fun��o que calcula a soma
int soma(int a, int b){
	int result;
	result=a+b;
	return result;
}

// fun��o que calcula a subtra��o
int sub(int a, int b){
	int result;
	result=a-b;
	return result;
}

// fun��o que calcula a multiplica��o
int mult(int a, int b){
	int result;
	result=a*b;
	return result;
}

// fun��o que calcula a divis�o
float divi(int a, int b){
	float result;
	result=((float)a/b);
	return result;
}

