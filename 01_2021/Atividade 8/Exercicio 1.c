#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    //vari�veis
    int esc;
	float n1, n2;
	
    //entrada do usu�rio
    printf("1 � Adi��o, 2 � Subtra��o, 3 � Multiplica��o e 4 � Divis�o.\n");
    
	printf("Digite op��o escolhida: ");
    scanf("%d", &esc);
    
	printf("Digite o valor 1: ");
	scanf("%f", &n1);
	printf("Digite o valor 2: ");
	scanf("%f", &n2);

    
	//escolha de casos
    switch(esc){
    	//adi��o
		case 1:
			printf("%.2f + %.2f = %.2f \n", n1, n2, n1+n2);
			break;
		//subtra��o
		case 2:
			printf("%.2f - %.2f = %.2f \n", n1, n2, n1-n2);
			break;
		//multiplica��o
		case 3:
			printf("%.2f x %.2f = %.2f \n", n1, n2, n1*n2);
			break;
		//divis�o
		case 4:
			printf("%.2f / %.2f = %.2f \n", n1, n2, n1/n2);
			break;
		//padr�o
		default:
			break;
	}
    return 0;
}
