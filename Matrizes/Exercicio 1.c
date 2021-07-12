#include <stdio.h>
#include <stdlib.h>

/* Faça um programa para ler uma matriz 4x5 de valores
inteiros positivos e apresentar o maior e o menor valor
da matriz; */

int main(int argc, char *argv[]) {
	int matriz[5][4];
	int num,l,c,maior,menor;

	//recebe a matriz
	for (l=0;l<5;l++){
		for (c=0;c<4;c++){
			printf ("Digite o numero que se encontra na coluna %d da linha %d na matriz: \n", c+1, l+1);
			scanf("%d",&num);
			getchar();
			matriz[l][c]=num;
		}
	}

	//imprime a matriz
	for (l=0;l<5;l++){
		for (c=0;c<4;c++){
			printf ("[ %d ] ", matriz[l][c]);
		}
		printf("\n");
	}
		
	//verifica qual o maior e qual o menor valor
	maior=matriz[2][2];
	menor=matriz[2][2];
	
	for (l=0;l<5;l++){
		for (c=0;c<4;c++){
			if (menor>matriz[l][c])
				menor=matriz[l][c];
			if (maior<matriz[l][c])
				maior=matriz[l][c];	
		}
	}
	
	//imprime o maior e o menor valor
	printf ("O maior valor da matriz e %d, sendo o menor %d. \n", maior, menor);
	
	system("pause");
	return 0;
}
