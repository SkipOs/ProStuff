#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>


/*10) A solução (x,y) para o sistema de equações lineares abaixo:
é dada por:
Escreva um programa que leia os parâmetros a, b, c, d, u, v do
sistema, calcule e imprima a solução x, y do sistema.*/

int main()
{
    setlocale(LC_ALL, "Portuguese");
    //variáveis
    float a, b, c, d, u, v, x, y;
	
	printf("Insira o valor de A: ");
    scanf("%f", &a);
    printf("Insira o valor de B: ");
    scanf("%f", &b);
    printf("Insira o valor de C: ");
    scanf("%f", &c);
    printf("Insira o valor de D: ");
    scanf("%f", &c);
    printf("Insira o valor de U: ");
    scanf("%f", &u);
    printf("Insira o valor de V: ");
    scanf("%f", &v);
    
    
    x=((d/((a*d)-(b*c)))*u)-((b/((a*d)-(b*c)))*v);
    y=((-c/((a*d)-(b*c)))*u)+((a/((a*d)-(b*c)))*v);
    
	printf("\nO valor de X é %.2f e o de Y é %.2f.\n", x, y);

	system("pause");
    return 0;
}
