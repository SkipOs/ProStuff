#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void imenu();					//imprime o menu
void primo(int a);				//imprime os primos
int area(int a);				//calcula a area do quadrado
int soma(int a);				//calcula a soma dos primeiros N positivos
void multi(int a);				//exibe todos m�ltiplos de 5 entre 0 e N


int main(){ 					//fun��o principal
	setlocale(LC_ALL, "Portuguese");
	int ctrl=0, sel;			//inteira de controle e inteira de sele��o
	int n; 		// auxiliar de c�lculos

	while (ctrl!=1){
		imenu(&sel);		//chama a fun��o imprimir menu
			
		switch(sel){		//escolhe a opera��o a ser feita
		
			case 1:			//exerc�cio 1
		    	printf("Voc� escolheu 1\n");
		    	printf("Insira o valor de M: ");
		    	scanf("%d", &n);
		    	
		    	printf("\nOs primos entre 0 e %d s�o: \n", n);
		    	if (n>0)
					primo(n);
				else
					printf("Insira um valor maior que 0.\n");
		    	system("pause");
		    break;			//fim exerc�cio ---
		
			case 2:			//exerc�cio 2
		    	printf("Voc� escolheu 2\n");
		    	printf("Insira o valor de um dos lados do quadrado: ");
		    	scanf("%d", &n);
		    	printf("A �rea do quadrado � %d\n\n", area(n));
		    	system("pause");
		    break;			//fim exerc�cio ---
		    
		    case 3:			//exerc�cio 3
		    	printf("Voc� escolheu 3\n");
		    	printf("Insira o valor de N: ");
		    	scanf("%d", &n);
		    	printf("A soma dos %d primeiros n�meros positivos �: %d\n", n, soma(n));
		    	system("pause");
		    break;			//fim exerc�cio ---
			
			case 4:			//exerc�cio 4
		    	printf("Voc� escolheu 4\n");
		    	printf("Insira o valor de N: ");
		    	scanf("%d", &n);
		    	multi(n);
		    	system("pause");
		    break;			//fim exerc�cio ---
			    	
		    case 0:			//encerra o programa
		    	printf("Voc� escolheu encerrar o programa.\n");
		    	system("pause");
				ctrl = 1;
		    break;
			
		    default: 		//Chamado caso o valor inserido n�o exista
		    	printf("Insira um valor v�lido.\n");
				system("pause");
		    break;
		}					// fim do switch
	}						// fim do while
}							// fim da main


/*5. Escreva uma fun��o que imprima o seguinte menu e, de acordo com a op��o escolhida, execute o exerc�cio escolhido. 
O menu deve ser apresentado ap�s a finaliza��o do exerc�cio escolhido:
1. Exerc�cio 1: Primos at� m
2. Exerc�cio 2: �rea do quadrado
3. Exerc�cio 3: Soma de 1 a n
4. Exerc�cio 4: M�ltiplos de 5
5. Sair*/
void imenu(int *a){	//imprime o menu
	int aux;
	system("cls");
	printf("\n\n\tMENU DE OPERA��ES\n");
	printf("-------------------------------------------\n");
	printf("Exerc�cio 1: Primos at� m \t(Digite 1)\n");
	printf("Exerc�cio 2: �rea do quadrado \t(Digite 2)\n");
	printf("Exerc�cio 3: Soma de 1 a n \t(Digite 3)\n");
	printf("Exerc�cio 4: M�ltiplos de 5 \t(Digite 4)\n");
	printf("Sair \t\t\t\t(Digite 0)\n");
	printf("-------------------------------------------\n");
	printf("Insira sua escolha: ");
	scanf("%d", &aux);	//recebe a entrada do usu�rio (sele��o)
	*a = aux;
	printf("\n");
}

/*1. Escreva uma fun��o que recebe um inteiro positivo m e escreve na tela todos os n�meros primos entre 0 e m.*/
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

/*2. Escreva uma fun��o que receba um dos lados de um quadrado e retorne o valor de sua �rea.*/
int area(int a){	//calcula a area do quadrado
	a *= a;
	return a;
}

/*3. Escreva uma fun��o que receba um n�mero inteiro positivo n por par�metro e retorne a soma dos n primeiros inteiros positivos.*/
int soma(int a){	//calcula a soma dos primeiros N positivos
	int aux=0, i;
	for(i=1; i<=a; i++){
		aux=aux+i;
	}
	return aux;
}

/*4. Fa�a uma fun��o que recebe um n�mero N que, caso seja positivo, calcule e exiba todos m�ltiplos de 5 entre 0 e N.*/
void multi(int a){	//exibe todos m�ltiplos de 5 entre 0 e N
    int n, k;
    
    if (a<5 && a>0)
    	printf("N�o existem m�ltiplos de 5 menores que %d.", a);
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


