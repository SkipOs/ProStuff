#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    //variáveis
    int esc;
	float n1, n2;
	
    //entrada do usuário
    printf("1 – Adição, 2 – Subtração, 3 – Multiplicação e 4 – Divisão.\n");
    
	printf("Digite opção escolhida: ");
    scanf("%d", &esc);
    
	printf("Digite o valor 1: ");
	scanf("%f", &n1);
	printf("Digite o valor 2: ");
	scanf("%f", &n2);

    
	//escolha de casos
    switch(esc){
    	//adição
		case 1:
			printf("%.2f + %.2f = %.2f \n", n1, n2, n1+n2);
			break;
		//subtração
		case 2:
			printf("%.2f - %.2f = %.2f \n", n1, n2, n1-n2);
			break;
		//multiplicação
		case 3:
			printf("%.2f x %.2f = %.2f \n", n1, n2, n1*n2);
			break;
		//divisão
		case 4:
			printf("%.2f / %.2f = %.2f \n", n1, n2, n1/n2);
			break;
		//padrão
		default:
			break;
	}
    return 0;
}
