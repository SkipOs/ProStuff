#include <stdio.h>
#include <stdlib.h>

/* Matrizes transpostas são utilizadas amplamente para
resolver diversos tipos de problemas. Para transformar
uma matriz em matriz transposta, basta trocar os
elementos das linhas pelo elementos das colunas e
vice-versa. Faça um programa que, dada uma matriz A
(2x3), crie sua transposta em uma matriz B. */

int main(int argc, char *argv[]) {
	int matriz[2][3];
	int num,c,l;
	
	//recebe a matriz	
	for (l=0;l<2;l++){
		for (c=0;c<3;c++){
			printf ("Digite o numero que se encontra na coluna %d da linha %d na matriz: \n", c+1, l+1);
			scanf("%d",&num);
			getchar();
			matriz[l][c]=num;
		}
	}

	//imprime a matriz
	printf("A matriz inserida (A) foi:\n");
	for (l=0;l<2;l++){
		for (c=0;c<3;c++){
			printf ("[ %d ] ", matriz[l][c]);
		}
		printf("\n");
	}
	printf("\n");

	// imprime a segunda matriz
	printf("A segunda matriz (B) sera:\n");
	for (l=0;l<3;l++){
		for (c=0;c<2;c++){
			printf ("[ %d ] ", matriz[c][l]);
		}
		printf("\n");
	}	

	system("pause");
	return 0;
}
