#include <stdio.h>
#include <stdlib.h>

/* Faça um programa para ler uma matriz 4x5 de valores
inteiros positivos e apresentar o maior e o menor valor
da matriz; */

int main(int argc, char *argv[]) {
	int matriz[4][3];
	int num,c,l;
	
	//recebe a matriz	
	for (l=0;l<3;l++){
		for (c=0;c<4;c++){
			printf ("Digite o numero que se encontra na coluna %d da linha %d na matriz: \n", c+1, l+1);
			scanf("%d",&num);
			getchar();
			matriz[l][c]=num;
		}
	}

	//imprime a matriz
	printf("A matriz inserida foi:\n");
	for (l=0;l<3;l++){
		for (c=0;c<4;c++){
			printf ("[ %d ] ", matriz[l][c]);
		}
		printf("\n");
	}
	printf("\n");

	// imprime a segunda matriz
	printf("A o resutado da segunda matriz sera:\n");
	for (l=0;l<3;l++){
		for (c=0;c<4;c++){
			printf ("[ %d ] ", matriz[l][c]*5);
		}
		printf("\n");
	}	

	system("pause");
	return 0;
}
