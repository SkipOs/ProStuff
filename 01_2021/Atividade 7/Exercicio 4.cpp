#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

#define PI 3.14

int main(int argc, char *argv[])
{
    setlocale(LC_ALL, "Portuguese");
    //variáveis
	float co, ca;
    //entrada do usuário
    printf("Digite o valor do cateto oposto: ");
    scanf("%d", &co);
    printf("Digite o valor do cateto adjacente: ");
    scanf("%d", &ca);
    //exibe o resultado
    printf("A área da circunferência é %2f", sqrt(co*co + ca*ca));
    return 0;
}
