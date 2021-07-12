#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


/*9) Elabore um programa que, dada a idade de um nadador, classifique-o em uma das seguintes categorias:
jardim A: 0 – 4 anos;
infantil A: 5 - 7 anos;
infantil B: 8 - 10 anos;
juvenil A: 11 - 13 anos;
juvenil B: 14 - 17 anos;
sênior: maiores de 18 anos.*/

int main()
{
    setlocale(LC_ALL, "Portuguese");
    //variáveis
    int i;
	
	printf("Indentifique a Idade do Nadador: ");
	scanf("%d", &i);
	
	//Jardim A
	if( i > 0 && i <= 4)
		printf("Esse nadador entra na classe Jardim A.\n");
		
	//Infantil A
	if(i >= 5 && i <= 7)
		printf("Esse nadador entra na classe Infantil A.\n");
	
	//Infantil B	
	if(i >= 8 && i <= 10)
		printf("Esse nadador entra na classe Infantil B.\n");
		
	//Juvenil A
	if(i >= 11 && i <= 13)
		printf("Esse nadador entra na classe Juvenil A.\n");
		
	//Juvenil B
	if(i >= 14 && i <= 17)
		printf("Esse nadador entra na classe Juvenil B.\n");
	
	//Sênior
	if(i >= 18)
		printf("Esse nadador entra na classe Sênior.\n");
		
	if( i <= 0)
		printf("Insira uma idade válida.\n");

	system("pause");
    return 0;
}
