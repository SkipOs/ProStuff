/*3) Faça um programa que percorra
recursivamente um vetor de inteiros de
tamanho 10 exibindo seus valores. */
#include <stdio.h>
#include <string.h>
#include <locale.h>

#define max 10

int ImprimeVet(int v[], int i);

int main(){
	setlocale(LC_ALL, "Portuguese");
    int i=10;
    int vet[10]={1,2,3,4,5,6,7,8,9,10};
    ImprimeVet(vet, (i-1));
    return 0; 
}

int ImprimeVet(int v[], int i){ // função EXIGINDO um parâmetro por referência (int *n)
    if (i<0)
		return 0;
	printf("%d \t", v[i]);
	return ImprimeVet(v,(i-1));
}
