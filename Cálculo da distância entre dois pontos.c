#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>


/*6) Faça um programa que, tendo como dados de entrada dois pontos
quaisquer do plano, P(x1,y1) e Q(x2,y2), imprima a distância entre eles.
A fórmula da distância é .*/

int main()
{
    setlocale(LC_ALL, "Portuguese");
    //variáveis
    float x, x1, x2, y, y1, y2, dist;
    
    printf("Insira o valor de X1: ");
    scanf("%f", &x1);
	printf("Insira o valor de Y1: ");
    scanf("%f", &y1);
    printf("Insira o valor de X2: ");
    scanf("%f", &x2);
    printf("Insira o valor de Y2: ");
    scanf("%f", &y2);
		
	x = x2 - x1;
	y = y2 - y1;
	dist=sqrt(pow(x,2)+pow(y,2));

	printf("\nA distância entre P e Q é de %.2f unidades.\n", dist);

	system("pause");
    return 0;
}
