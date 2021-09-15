#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


/*3) Faça um programa que receba duas notas de um aluno e seus
respectivos pesos, calcule e imprima a média ponderada dessas notas.*/

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float p, n, media;
	
	printf("Escreva a primeira nota: ");
	scanf("%f", &n);
	printf("Escreva o peso da primeira nota: ");
	scanf("%f", &p);
	
	media=n*p;
	
	printf("Escreva a segunda nota: ");
	scanf("%f", &n);
	printf("Escreva o peso da segunda nota: ");
	scanf("%f", &p);
	
	media=media+(n*p);
	
	printf("\n A média final do aluno foi %.2f \n", media);

	system("pause");
    return 0;
}
