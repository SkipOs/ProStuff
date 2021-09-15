#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*3. Dado um vetor v de números inteiros com 5
posições, crie um programa que deverá pedir
para o usuário digitar um valor qualquer, n. O
programa deverá exibir a primeira posição do
vetor que possui o número n. Caso o número
não seja encontrado, deverá ser informado que
o número não existe no vetor.*/

int main()
{
    setlocale(LC_ALL, "Portuguese");
    //vetores
    int v[5];
    //variaveis
    int i, n, check;
    
    printf("Informe o valor de N: ");
	scanf("%d", &n);
		
	v[0]=2;
	v[1]=10;
	v[2]=7;
	v[3]=3;
	v[4]=5;
	
	for (i=0;i<5;i++){
		if(v[i]==n){
			printf("A primeira posição do vetor que possui o número é %d.", v[0]);
		}
		else
			check++;
	}
	
	if (check >0)
		printf("O número não existe no vetor.");
	
	printf("\n");
	system("pause");
    return 0;
}
