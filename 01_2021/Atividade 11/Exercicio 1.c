#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*1. Dado um vetor v, capaz de armazenar 10 n�meros float,
fa�a um programa para retornar o maior e o menor n�meros
contidos no vetor*/

int main()
{
    setlocale(LC_ALL, "Portuguese");
    //vetores
    float v[10];
    //variaveis
    float maior, menor;
    int i;
    
	for (i=0;i<10;i++){
		printf("Informe o %d� numero: ",i+1);
		scanf("%f", &v[i]);
	}
	
	i=0;
	menor=v[0];
	maior=v[0];
	
	for (i=0;i<10;i++){
		if(v[i]>maior){
			maior=v[i];
		}

		if(v[i]<menor){
			menor=v[i];
		}
	}
	
	printf("\nO menor n�mero inserido foi %.2f\n", menor);
	printf("O maior n�mero inserido foi %.2f\n", maior);
	
	system("pause");
    return 0;
}
