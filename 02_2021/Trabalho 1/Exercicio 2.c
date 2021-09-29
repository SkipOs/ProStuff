/*1) 2) Faça um programa em linguagem C que, utilizando
função, calcule a matriz transposta informada pelo
usuário. A quantidade de linhas e colunas pode ser
fixa e definida previamente.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define lin 3
#define col 2

void transpo(int n[lin][col]);

int main() {
	setlocale(LC_ALL, "Portuguese");
	int num,c,l;

	int matriz[lin][col];
	
	for (l=0;l<lin;l++){
		for (c=0;c<col;c++){
			printf("Digite o numero que se encontra na coluna %d da linha %d na matriz:", c+1, l+1);
			scanf("%d", &num);
			matriz[l][c]=num;
		}
	}
	printf("\n");
	
	for (l=0;l<lin;l++){
		for (c=0;c<col;c++){
			printf("%d \t", matriz[l][c]);
		}
		printf("\n");
	}
	
	transpo(matriz);
	return 0;
}

void transpo(int n[lin][col]){
	int l, c, aux=0;
	int linT, colT;
	linT = col;
	colT = lin;
	
	int matrizT[linT][colT];
	for (l=0;l<linT;l++){
		for (c=0;c<colT;c++){
			matrizT[l][c] = n[c][l];
		}
	}
	
	printf("\nA matriz transposta seria:\n");
	for (l=0;l<linT;l++){
		for (c=0;c<colT;c++){
			printf("%d \t", matrizT[l][c]);
		}
		printf("\n");
	}
}	

