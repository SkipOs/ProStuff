#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void imenu();					//imprime o menu
void primo(int a);				//imprime os primos
int area(int a);				//calcula a area do quadrado
int soma(int a);				//calcula a soma dos primeiros N positivos
void multi(int a);				//exibe todos múltiplos de 5 entre 0 e N


int main(){ 					//função principal
	setlocale(LC_ALL, "Portuguese");
	int ctrl=0, sel;			//inteira de controle e inteira de seleção
	int n; 		// auxiliar de cálculos

	while (ctrl!=1){
		imenu(&sel);		//chama a função imprimir menu
			
		switch(sel){		//escolhe a operação a ser feita
		
			case 1:			//exercício 1
		    	printf("Você escolheu 1\n");
		    	printf("Insira o valor de M: ");
		    	scanf("%d", &n);
		    	
		    	printf("\nOs primos entre 0 e %d são: \n", n);
		    	if (n>0)
					primo(n);
				else
					printf("Insira um valor maior que 0.\n");
		    	system("pause");
		    break;			//fim exercício ---
		
			case 2:			//exercício 2
		    	printf("Você escolheu 2\n");
		    	printf("Insira o valor de um dos lados do quadrado: ");
		    	scanf("%d", &n);
		    	printf("A área do quadrado é %d\n\n", area(n));
		    	system("pause");
		    break;			//fim exercício ---
		    
		    case 3:			//exercício 3
		    	printf("Você escolheu 3\n");
		    	printf("Insira o valor de N: ");
		    	scanf("%d", &n);
		    	printf("A soma dos %d primeiros números positivos é: %d\n", n, soma(n));
		    	system("pause");
		    break;			//fim exercício ---
			
			case 4:			//exercício 4
		    	printf("Você escolheu 4\n");
		    	printf("Insira o valor de N: ");
		    	scanf("%d", &n);
		    	multi(n);
		    	system("pause");
		    break;			//fim exercício ---
			    	
		    case 0:			//encerra o programa
		    	printf("Você escolheu encerrar o programa.\n");
		    	system("pause");
				ctrl = 1;
		    break;
			
		    default: 		//Chamado caso o valor inserido não exista
		    	printf("Insira um valor válido.\n");
				system("pause");
		    break;
		}					// fim do switch
	}						// fim do while
}							// fim da main


/*5. Escreva uma função que imprima o seguinte menu e, de acordo com a opção escolhida, execute o exercício escolhido. 
O menu deve ser apresentado após a finalização do exercício escolhido:
1. Exercício 1: Primos até m
2. Exercício 2: Área do quadrado
3. Exercício 3: Soma de 1 a n
4. Exercício 4: Múltiplos de 5
5. Sair*/
void imenu(int *a){	//imprime o menu
	int aux;
	system("cls");
	printf("\n\n\tMENU DE OPERAÇÕES\n");
	printf("-------------------------------------------\n");
	printf("Exercício 1: Primos até m \t(Digite 1)\n");
	printf("Exercício 2: Área do quadrado \t(Digite 2)\n");
	printf("Exercício 3: Soma de 1 a n \t(Digite 3)\n");
	printf("Exercício 4: Múltiplos de 5 \t(Digite 4)\n");
	printf("Sair \t\t\t\t(Digite 0)\n");
	printf("-------------------------------------------\n");
	printf("Insira sua escolha: ");
	scanf("%d", &aux);	//recebe a entrada do usuário (seleção)
	*a = aux;
	printf("\n");
}

/*1. Escreva uma função que recebe um inteiro positivo m e escreve na tela todos os números primos entre 0 e m.*/
void primo(int a){	//imprime os primos
    int n, k, primo;
    printf("0 \t");
    for(n=1; n<=a; n++){
        primo=0;
        for(k=1; k<=n; k++)
            if((n%k)==0)
                 primo++;
        if(primo<=2)
            printf("%d \t", n);
    }
    printf("\n\n");
}

/*2. Escreva uma função que receba um dos lados de um quadrado e retorne o valor de sua área.*/
int area(int a){	//calcula a area do quadrado
	a *= a;
	return a;
}

/*3. Escreva uma função que receba um número inteiro positivo n por parâmetro e retorne a soma dos n primeiros inteiros positivos.*/
int soma(int a){	//calcula a soma dos primeiros N positivos
	int aux=0, i;
	for(i=1; i<=a; i++){
		aux=aux+i;
	}
	return aux;
}

/*4. Faça uma função que recebe um número N que, caso seja positivo, calcule e exiba todos múltiplos de 5 entre 0 e N.*/
void multi(int a){	//exibe todos múltiplos de 5 entre 0 e N
    int n, k;
    
    if (a<5 && a>0)
    	printf("Não existem múltiplos de 5 menores que %d.", a);
    if (a<=0)
    	printf("Insira um valor positivo");
    else{
	    for(n=1; n<=a; n++){
	        if (n%5==0)
	        	printf("%d \t", n);
	    }
	}
	printf("\n\n");
}


