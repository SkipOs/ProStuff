#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    //variáveis
    char sx;
	float alt;
	
    //entrada do usuário
	printf("Digite o seu Sexo Masculino (M) ou Feminino (F): ");
    scanf("%c", &sx);
    
	printf("Digite sua altura (cm): ");
	scanf("%f", &alt);
    
    
    switch (sx){
	   	//homem
		case 'M':
			printf("\nSeu peso ideal é %.2f \n", 72.7*alt-58);
			break;
		//mulher
		case 'F':
			printf("\nSeu peso ideal é %.2f \n", 62.1*alt-44.7);
			break;
		default:
			break;		
	}
    return 0;
}
