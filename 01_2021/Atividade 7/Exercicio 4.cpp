#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

#define PI 3.14

int main(int argc, char *argv[])
{
    setlocale(LC_ALL, "Portuguese");
    //vari�veis
	float co, ca;
    //entrada do usu�rio
    printf("Digite o valor do cateto oposto: ");
    scanf("%d", &co);
    printf("Digite o valor do cateto adjacente: ");
    scanf("%d", &ca);
    //exibe o resultado
    printf("A �rea da circunfer�ncia � %2f", sqrt(co*co + ca*ca));
    return 0;
}
