#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*3. Dado um vetor v de n�meros inteiros com 5
posi��es, crie um programa que dever� pedir
para o usu�rio digitar um valor qualquer, n. O
programa dever� exibir a primeira posi��o do
vetor que possui o n�mero n. Caso o n�mero
n�o seja encontrado, dever� ser informado que
o n�mero n�o existe no vetor.*/

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
			printf("A primeira posi��o do vetor que possui o n�mero � %d.", v[0]);
		}
		else
			check++;
	}
	
	if (check >0)
		printf("O n�mero n�o existe no vetor.");
	
	printf("\n");
	system("pause");
    return 0;
}
