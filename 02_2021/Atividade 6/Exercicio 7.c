/*7. Faça uma função recursiva similar à
função do exercício 6, porém que exiba
os valores do vetor em ordem inversa. */

#include <stdio.h>
#include <string.h>
#include <locale.h>


int ImprimeVet(int v[], int i);

int main(){
	setlocale(LC_ALL, "Portuguese");
    int i=10;
    int vet[10]={1,2,3,4,5,6,7,8,9,10};
    ImprimeVet(vet, (i-1));
    return 0; 
}

int ImprimeVet(int v[], int i){ 
    if (i<0)
		return 0;
	printf("%d \t", v[i]);
	return ImprimeVet(v,(i-1));
}
