#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define PI 3.14

int main(int argc, char *argv[])
{
    setlocale(LC_ALL, "Portuguese");
    int n1;
    printf("Digite o valor do raio: \n");
    scanf("%d", &n1);
    printf("A área da circunferência é %2f", PI*n1*2);
    return 0;
}
