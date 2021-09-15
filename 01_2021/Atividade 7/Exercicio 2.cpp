#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[])
{
    setlocale(LC_ALL, "Portuguese");
    int n1;
    int n2;
    printf("Digite as duas notas do aluno: \n");
    scanf("%d %d", &n1, &n2);
    printf("A média final do aluno é %2f", n1, n2, (n1 / n2)/2);
    return 0;
}
